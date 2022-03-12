del readgen.86
del readgen.exe
del readgen.mp1
del *.obj
del *.lst

plm86 readgen.plm debug nolist
@if errorlevel 1 goto stop

plm86 cons.plm debug nolist
@if errorlevel 1 goto stop

plm86 string.plm debug nolist
@if errorlevel 1 goto stop

plm86 tokread.plm debug nolist
@if errorlevel 1 goto stop

plm86 sys.plm debug nolist
@if errorlevel 1 goto stop

link86 readgen.obj, cons.obj, string.obj, tokread.obj, sys.obj, c:\intel\lib\doslibs.obj, c:\intel\lib\plm86.lib to readgen.86 bind
@if errorlevel 1 goto stop

udi2dos readgen
@if errorlevel 1 goto stop

:stop
