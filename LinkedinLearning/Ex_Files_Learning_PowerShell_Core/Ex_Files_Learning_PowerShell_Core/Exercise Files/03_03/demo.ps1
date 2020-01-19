#region Exploring commands (functions and cmdlets)

## Cmdlet source cannot be viewed. 
Get-Command | Group-Object -Property CommandType

Get-Command | Where-Object { $_.CommandType -eq 'Cmdlet' }

#endregion

#region Build a function that tests whether or not a Windows service is started

## Test the Windows Update agent service
Get-Service -Name 'wuauserv'

if ((Get-Service -Name 'wuauserv').Status -eq 'Running') {
    $true
}	else {
    $false
}

## The function bones
function Test-ServiceStarted { }

## Copy/paste into the console

## PowerShell sees the function so we can tab-complete now but it doesn't do much
Test-Service<tab>

## See function loaded into the session
Get-Command | Where-Object { $_.CommandType -eq 'Function' }

## Add in some code to test whether the Windows Update agent is running.
## Function is executed just like a cmdlet with an optional output
function Test-ServiceStarted {
    if ((Get-Service -Name 'wuauserv').Status -eq 'Running') {
        $true
    }	else {
        $false
    }
}

## This function needs to be more flexible to support other services without
## having to be modified

## Add param block and a service name parameter
function Test-ServiceStarted {
    param(
        [Parameter()]
        [string]$Name
    )
	
    if ((Get-Service -Name $Name).Status -eq 'Running') {
        $true
    }	else {
        $false
    }
}

## We now can use this function to test any service name without modifying the code
Test-ServiceStarted -Name wuauserv

#endregion