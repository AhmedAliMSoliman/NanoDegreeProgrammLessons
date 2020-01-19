[CmdletBinding()]
param(
    [Parameter()]
    [string]$Name
)

if ((Get-Service -Name $Name).Status -eq 'Running') {
    $true
} else {
    $false
}