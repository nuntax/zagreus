# Zagreus
This project aims to be a nearly one-to-one server replacement for the game **Aim Gods** by **Finalmouse Entertainment.**
We are reaching that by injecting our code into the Game via DLL-Injection.



## Solution Structure
This project contains 2 CPP projects that compile DLLs for the client and for the Server.
The third project is a winforms application that is launching the game, injecting the right dll and then passing the needed options like gamemode and map to our dll by communicating through a BSON file. (.ag)
### Aimgods_Client
Client DLL that will connect to the given IP-Address that got defined in `matchconfig.ag` by the Launcher as soon as the Login Map got loaded (Engine is fully initialized at that point).
### AimGods_Server
Server DLL that opens a Server with the options that got defined in `matchconfig_server.ag` by the Launcher as soon as the Login Map got loaded (Engine is fully initialized at that point).
### Launcher
Winforms project that provides functionality to both host a server and connect with a client.
## Building
Clone the project `https://github.com/nuntax/zagreus.git`
Open the Solution and Build :)
