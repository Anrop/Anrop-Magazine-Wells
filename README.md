# Anrop Magazine Wells

Contains magazine wells definitions for cross mod compatibility

## Supported mods

- BWA3
- HLC
- RHS
- SFP

## Build locally

Make sure pboproject and any dependencies are installed from https://armaservices.maverick-applications.com/Products/MikerosDosTools/FileBrowserFree

Double click build.bat to generate pbo files in @anrop_magazine_wells.
Check source/temp for build logs.

## Build on Jenkins

Project uses Jenkinsfile to define build steps.
Add the repository or organization to Jenkins as a pipeline job and it should pick it up automatically.

It requires a node with the label "mikero" and pboproject must be available in PATH
