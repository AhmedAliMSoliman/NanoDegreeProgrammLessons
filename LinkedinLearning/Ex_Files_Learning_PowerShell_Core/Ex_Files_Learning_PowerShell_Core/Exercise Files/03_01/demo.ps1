
Get-Command | more

## every command is in a module
Get-Command -Module 'PSDiagnostics'

## modules are automatically imported into a session
Get-Module

## All available modules.
Get-Module -ListAvailable

## When a command is run or referenced, the module gets auto-imported
Get-Command -Module PowerShellGet
Get-Module

## script modules are just a PowerShell scripts with a PSM1 extension
Get-Module -Name PowerShellGet | Get-Member
Get-Module -Name PowerShellGet | Select path

## Modules can be removed from the session
Remove-Module -Name PowerShellGet
Get-Module -Name PowerShellGet

## Modules can be imported manually
Import-Module -Name PowerShellGet
Get-Module -Name PowerShellGet

## Some modules have manifests where of the module metadata comes from
Get-Content "$((Get-Module -Name PSReadline  | select modulebase).Modulebase)\PSReadLine.psd1" | more