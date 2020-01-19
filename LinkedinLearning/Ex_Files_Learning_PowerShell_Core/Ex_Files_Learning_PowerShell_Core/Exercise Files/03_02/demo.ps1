Find-Module -Name Sql*
Find-Module -Tag 'PSEdition_Core'
Find-Module -Name 'CallPass'
Find-Module -Name 'CallPass' | Install-Module
Get-Module -Name CallPass -List
Get-Module -List
Find-Module -Name PowerShellGet
Get-Module -Name PowerShellGet -List | Update-Module