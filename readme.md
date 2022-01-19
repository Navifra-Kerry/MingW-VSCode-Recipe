# MingW-64 Windows with VSCode Configurtaion Recipe

## Download and Install

Download : [MingW-64](http://sourceforge.net/projects/mingw-w64/files/Toolchains%20targetting%20Win32/Personal%20Builds/mingw-builds/installer/mingw-w64-install.exe/download)

add Envirment path in Powershell

```powershell
$env:PATH +=";${MingW-install-path}/bin/"
```

## if you need clang-format, first install clang-format

1. install node package

```
npm install -g clang-format
```

2. VSCode Extentions  
   https://marketplace.visualstudio.com/items?itemName=mjohns.clang-format

3. Settings VSCode
   Open the command palette (either with F1 or Ctrl+Shift+P)
   Type "open settings"
   You are presented with two options, choose "Open Settings (JSON)"

```
{
    "clang-format.executable": "clang-format.cmd"
}
```
