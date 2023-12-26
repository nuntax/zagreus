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
Winforms project that provides functionality to both host a server and connect to a server.
## Branches
We have multiple branches for new features that are getting implemented.
### Main
Stable branch. If u just want to build the latest stable version go with that branch.
### Threading
Multiple improvements to the way the server is utilizing threads.
## Building
Clone the project `https://github.com/nuntax/zagreus.git`
Dependency management is currently being done with vcpkg.
Detours and nlhomanm/json arent in the project but instead managed through vcpkg.
You can find a tutorial on how to use vcpkg [here](https://vcpkg.io/en/getting-started).<br/>
For the abilitypicker you have to clone the [UnrealEngine.Gvas](https://github.com/SparkyTD/UnrealEngine.Gvas) repo into the abilitypicker project folder and rename the Main function in UnrealEngine.Gvas/SavToXml/Program.cs to something else or delete it completely.
