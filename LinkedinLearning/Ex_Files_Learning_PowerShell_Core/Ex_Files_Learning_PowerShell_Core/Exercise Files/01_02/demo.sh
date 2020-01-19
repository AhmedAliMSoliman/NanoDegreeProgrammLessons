# Update the list of products
sudo apt-get update

wget -q https://packages.microsoft.com/config/ubuntu/18.04/packages-microsoft-prod.deb

# Register the Microsoft repository GPG keys
sudo dpkg -i packages-microsoft-prod.deb

# Install PowerShell
sudo apt-get install -y powershell

# Start PowerShell
pwsh

## Check the version
$PSversiontable