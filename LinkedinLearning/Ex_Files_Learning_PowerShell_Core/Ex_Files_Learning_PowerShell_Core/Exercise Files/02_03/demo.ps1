## demo prep
'Windows Update', 'Windows Search' | % { Add-Content -Path "C:\services.txt" -Value $_ }

## objects
$service = Get-Service -DisplayName 'Windows Update'
$service | Get-Member
$service
$service | Select-Object -Property *

## pipeline --need to manipulate multiple services

## the non-pipeline way
Stop-Service -DisplayName 'Windows Update'
Stop-Service -DisplayName 'Windows Search'

## the pipeline way
Get-Content -Path 'C:\services.txt'
Get-Content -Path 'C:\services.txt' | Get-Service

## how does this work? parameter binding
Get-Help -Name Get-Service -Full | more

## starts all of the services in the text file
Get-Content -Path 'C:\services.txt' | Get-Service | Start-Service

## allows to string together more commands
Get-Content -Path 'C:\services.txt' | Get-Service | Start-Service -PassThru
