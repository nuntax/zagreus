using System.Diagnostics;
using Microsoft.AspNetCore.Mvc;
using Newtonsoft.Json;
using Newtonsoft.Json.Bson;
using Reloaded.Injector;

var builder = WebApplication.CreateBuilder();

builder.Services.AddEndpointsApiExplorer();
builder.Services.AddSwaggerGen();

var app = builder.Build();

app.UseSwagger();
app.UseSwaggerUI();

app.UseSwaggerUI(options =>
{
    options.SwaggerEndpoint("/swagger/v1/swagger.json", "v1");
    options.RoutePrefix = "notswagger";
});

app.MapGet("/start", ([FromHeader] string auth, [FromHeader] string map, [FromHeader] string mode) =>
{
    if (auth != "sdfhsdjklfshdfukghweyu237894y23") return Results.Problem();
    if (map != "colosseum_p" && map != "egypt_p") return Results.Problem();
    if (mode != "1vs1" && mode != "2vs2") return Results.Forbid();

    ServerConfig serverConfig = new ServerConfig
    {
        map = map,
        maxplayers = mode == "1vs1" ? 3 : 5
    };
    
    const string settingsPath = "settings.json";
    
    if (!File.Exists(settingsPath))
    {
        return Results.Problem("Settings file not found!");
    }

    using StreamReader fileReader = new StreamReader(settingsPath);

    JsonSerializer jsonSerializer = new JsonSerializer();
    ConfigPaths configPaths = (ConfigPaths)jsonSerializer.Deserialize(fileReader, typeof(ConfigPaths))!;

    ProcessStartInfo startInfo = new ProcessStartInfo();
    startInfo.FileName = Path.Combine(configPaths.ServerPath, "AimGods-Win64-Shipping.exe");
    startInfo.Arguments = "-NoEAC -nullrhi";
    Process aimgods = Process.Start(startInfo)!;
    
    while (true)
    {
        try
        {
            var time = aimgods.StartTime;
            break;
        }
        catch (Exception)
        {
            continue;
        }
    }

    Injector injector = new Injector(aimgods);
    injector.Inject(configPaths.DllPath + "\\AimGods_Server.dll");
    if (File.Exists(configPaths.ServerPath + "\\matchconfig_server.ag"))
    {
        File.Delete(configPaths.ServerPath + "\\matchconfig_server.ag");
    }

    using BinaryWriter fileWriter = new BinaryWriter(new FileStream(configPaths.ServerPath + "\\matchconfig_server.ag", FileMode.Create));
    using BsonWriter writer = new BsonWriter(fileWriter);
    JsonSerializer serializer = new JsonSerializer();
    serializer.Serialize(writer, serverConfig);
    
    return Results.Ok("Hello World");
});

app.Run();

struct ServerConfig
{
    public String map { get; set; }
    public int maxplayers { get; set; }
}

struct ConfigPaths
{
    public string ServerPath;
    public string DllPath;
}