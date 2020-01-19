<WIN10>

$linuxMachine = '104.209.157.127'
ssh adam@$linuxMachine

## <UBUNTU>

## Install PowerShell 6
snap install powershell --classic

## Ensure OpenSSH Server is installed
sudo apt install openssh-server

### Edit sshd_config
sudo vi /etc/ssh/sshd_config

## Confirm required settings
PasswordAuthentication yes
Subsystem powershell /usr/bin/pwsh -sshs -NoLogo -NoProfile
PubkeyAuthentication yes (optional)

## Restart sshd
sudo service sshd restart

## <WIN10> in PowerShell Core

## Ad hoc commands
Invoke-Command -HostName $linuxMachiine -UserName adam -ScriptBlock {hostname}

## Interactive session

