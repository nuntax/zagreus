devenv Zagreus.sln /Build
xcopy /e /v .\x64\Release\Release\net6.0-windows .\output
del .\output\*.pdb
del .\output\Launcher.deps.json
del .\output\Reloaded.Assembler.targets
del .\output\Launcher.dll.config