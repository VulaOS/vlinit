@echo off






cl /c src/*.c

link *.obj lib/vlalib.lib ntdll.lib /entry:VlEntry /Out:vlinit.exe /subsystem:native
del *.obj