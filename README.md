# Zagreus
This project aims to be a nearly one-to-one server replacement for the game **Aim Gods** by **Finalmouse Entertainment.**
We are reaching that by injecting our code into the Game via DLL-Injection.



## Project Structure
This project contains 2 CPP projects that compile DLLs for the client and for the Server.
The third project is a winforms application that is launching the game, injecting the right dll and then passing the needed options like gamemode and map to our dll by communicating through a BSON file. (.ag)
