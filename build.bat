@echo off

REM Calculating correct current folder
SET modpath=%~dp0
SET modpath=%modpath:~0,-1%

REM Remove old drive mapping
subst p: /d > nul

REM Mount current folder
subst p: "%modpath%\source"

REM Build pbo files using pboproject and check for errors
pboproject +Clean -Engine=Arma3 -Key -Workspace=P:\ -Noisy -P +Mod="%modpath%\@anrop_magazine_wells" -F +W -Z P:\anrop

REM Remove drive mapping
subst p: /d
