// See https://aka.ms/new-console-template for more information

using System;
using System.Diagnostics;
using System.Formats.Asn1;
using System.IO;
using Newtonsoft.Json;
using Newtonsoft.Json.Bson;
using Reloaded.Injector;

namespace AimGods_ServerCLI;

class ServerCLI
{
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

    static string SettingsPath = "settings.json";

    static void Main(string[] args)
    {

        foreach (var process in Process.GetProcessesByName("AimGods-Win64-Shipping"))
        {
            process.Kill();
        }
        Console.WriteLine("Hello, World!");
        if (args.Length < 2)
        {
            Console.Error.WriteLine("Arguments are expected: Map and 1vs1 / 2vs2");
            var defaultServerConfig = new ServerConfig
            {
                map = "colosseum_p",
                maxplayers = 5
            };
            StartProcess(defaultServerConfig);
            return;
        }
        var serverConfig = new ServerConfig
        {
            map = args[0],
            maxplayers = args[1] == "1vs1" ? 3 : 5
        };
        StartProcess(serverConfig);
        return;
    }

    static void StartProcess(ServerConfig serverConfig)
    {
        if (!File.Exists(SettingsPath))
        {
            DefaultSettings();
        }

        using StreamReader fileReader = new StreamReader(SettingsPath);

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

        BinaryWriter fileWriter = new BinaryWriter(new FileStream(configPaths.ServerPath + "\\matchconfig_server.ag", FileMode.Create));
        using (BsonWriter writer = new BsonWriter(fileWriter))
        {
            JsonSerializer serializer = new JsonSerializer();
            serializer.Serialize(writer, serverConfig);
        }
        fileWriter.Close();
    }

    static void DefaultSettings()
    {
        using (StreamWriter fileWriter = File.CreateText("settings.json"))
        using (JsonWriter jsonWriter = new JsonTextWriter(fileWriter))
        {
            JsonSerializer serializer = new JsonSerializer();
            serializer.Serialize(jsonWriter, new ConfigPaths
            {
                ServerPath = "\\\\AimGods\\\\Binaries\\\\Win64",
                DllPath = ""
            });
        }
    }
}