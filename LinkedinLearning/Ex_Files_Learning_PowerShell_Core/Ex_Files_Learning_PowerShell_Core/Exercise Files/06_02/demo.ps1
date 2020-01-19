
## Define what information we'd like to retrieve from our servers
<#
- Name
- Operating System
- Memory
#>

## Demo is a stretch goal

## Prerequistes
## Ensure Windows firewall is disabled or allows PowerShell Remoting

#region Understanding reading information with WMI/CIM

## Namespaces
Get-CimInstance -Namespace 'Root' -Class '__Namespace'

## Classes in a namespace
Get-CimClass -Namespace 'root\CIMV2' | Where-Object { $_.CimClassName -like 'Win32*' } | Sort-Object CimClassName

## Common classes
Get-CimClass -Namespace 'root\CIMV2' -ClassName Win32_OperatingSystem
Get-CimClass -Namespace 'root\CIMV2' -ClassName Win32_PhysicalMemory

## Properties in classes
Get-CimClass -Namespace 'root\CIMV2' -ClassName Win32_PhysicalMemory | Select-Object -ExpandProperty CimClassProperties

## Finding instances of classes
Get-CimInstance -ClassName 'Win32_OperatingSystem'
Get-CimInstance -ClassName 'Win32_PhysicalMemory'

## Remote computers

## Enable PowerShell Remoting and allow us to connect to remote servers (no AD)
Enable-PSRemoting -SkipNetworkProfileCheck
Set-Item WSMan:\localhost\Client\TrustedHosts -Value *

$credential = Get-Credential
$cimSession = New-CimSession -ComputerName '10.0.0.6' -Credential $Credential
Get-CimInstance -ClassName 'Win32_PhysicalMemory' -CimSession $cimSession
#endregon

#endregion