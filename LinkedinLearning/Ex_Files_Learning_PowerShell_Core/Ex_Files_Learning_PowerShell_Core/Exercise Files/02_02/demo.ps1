Get-Help -Name Get-Content
Get-Help -Parameter Path
Get-Help -Name Get-Conent -Online
Get-Help -Name Get-Content -Detailed
Get-Help -Name Get-Content -Full

Get-Help -Name About* | Select-Object -Property Name
https://docs.microsoft.com/en-us/powershell/module/microsoft.powershell.core/about/about_comment_based_help?view=powershell-6

Update-Help

Get-Help -Name About* | Select-Object -Property Name