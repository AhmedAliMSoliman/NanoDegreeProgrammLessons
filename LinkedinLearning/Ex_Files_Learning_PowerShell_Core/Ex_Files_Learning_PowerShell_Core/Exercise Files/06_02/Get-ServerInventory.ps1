[CmdletBinding()]
param(
    [Parameter(Mandatory)]
    [string]$ComputerName,

    [Parameter(Mandatory)]
    [pscredential]$Credential
)

$serverInfo = @{
    ServerName = $ComputerName
}
		
## Create the CIM session for the server
$cimSession = New-CimSession -ComputerName $ComputerName -Credential $Credential

## Add values to the properties
$serverInfo.'OperatingSystem' = Get-CimInstance -ClassName 'Win32_OperatingSystem' -CimSession $cimSession | Select-Object -ExpandProperty Caption

$memory = Get-CimInstance -ClassName 'Win32_PhysicalMemory' -CimSession $cimSession | Select-Object -ExpandProperty Capacity | Measure-Object -Sum
$memory = $memory.Sum
$serverInfo.'Memory (GB)' = $memory / 1GB

## Convert the hashtable to a common custom object for potential future processing
## at some point
[pscustomobject]$serverInfo