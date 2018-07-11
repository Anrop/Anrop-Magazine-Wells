@echo off
setlocal enabledelayedexpansion

REM Calculating correct current folder
SET modpath=%~dp0
SET modpath=%modpath:~0,-1%

REM Remove old drive mapping
subst p: /d > nul

REM Mount current folder
subst p: "%modpath%\source"

REM Build pbo files using pboproject and check for errors
for /D %%s in (source\anrop\magazine_wells\*) do (
	if %%~nxs NEQ temp (
		echo Building %%~nxs
		pboproject +Clean -Engine=Arma3 -Key -Workspace=P:\ -Noisy -P +Mod="%modpath%\@anrop_magazine_wells_%%~nxs" -F +W -Z P:\anrop\magazine_wells\%%~nxs

		if !errorlevel! neq 0 (
			@echo Error encountered while building %%~nxs
			exit /b !errorlevel!
		)
	)
)

REM Remove drive mapping
subst p: /d
