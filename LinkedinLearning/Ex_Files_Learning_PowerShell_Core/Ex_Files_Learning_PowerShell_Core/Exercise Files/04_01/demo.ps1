#region Setup PowerShell remoting on remote computer by RDP

## <On remote machine console>
Enable-PSRemoting

winrm quickconfig

## Windows firewall already has TCP/5985 open and Windows Remote Management is allowed

#endregion

#region "Ad-hoc commands"

## Start with some code to run. Just get the local computer hostname
hostname

## Active Directory credential not needed
$credential = Get-Credential

## Reaches out the remote computer, runs the code inside of the scriptblock and returns anything it should. Kinda like psexec
$remoteComputer = '10.0.0.6'
Invoke-Command -ComputerName $remoteComputer -Credential $credential -ScriptBlock { hostname }

#endregion

#region Interactive sessions for re-use

$session = New-PSSession -ComputerName $remoteComputer -Credential $credential
Invoke-Command -Session $session -ScriptBlock { hostname }
$session | Remove-PSSession

Enter-PSSession -ComputerName $remoteComputer -Credential $credential
#endregion
