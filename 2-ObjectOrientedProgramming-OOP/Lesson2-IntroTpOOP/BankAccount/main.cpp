//Your task is to design and implement class called BankAccount. This will be a generic account 
//defined by its account number, the name of the owner and the funds available.

// Complete the following steps:

// Create class called BankAccount
// Use typical info about bank accounts to design attributes, such as the account number, 
// the owner name, and the available funds.
// Specify access so that member data are protected from other parts of the program.
// Create accessor and mutator functions for member data.

#include <iostream>
#include <string>

class BankAccount
{
  private:
      // TODO: declare member variables
      int accountNumber;
      std::string accountOwenerName;
      int availableFunds;

  public:
      // TODO: declare setters
        void SetAccountNumber(int x);
        void SetAccountOwnerName(std::string x);
        void SetFunds(int x);
      // TODO: declare getters
        int GetAccountNumber();
        std::string GetAccountOwnerName();
        int GetFunds();
};

// TODO: implement setters
void BankAccount::SetAccountNumber(int x) { accountNumber = x ; }
void BankAccount::SetAccountOwnerName(std::string x) { accountOwenerName = x ; }
void BankAccount::SetFunds(int x) { availableFunds = x ; }

// TODO: implement getters
int BankAccount::GetAccountNumber() { return accountNumber; }
std::string BankAccount::GetAccountOwnerName() { return accountOwenerName ; }
int BankAccount::GetFunds() { return availableFunds ; }

int main(){
    // TODO: instantiate and output a bank account
    BankAccount Ahmed;
    Ahmed.SetAccountNumber(123);
    Ahmed.SetAccountOwnerName("Ahmed Ali");
    Ahmed.SetFunds(5000);

    std::cout << "---------------------------" << "\n";
    std::cout << "ID:    " << Ahmed.GetAccountNumber() << "\n";
    std::cout << "Owner: " << Ahmed.GetAccountOwnerName() << "\n";
    std::cout << "Funds: " << Ahmed.GetFunds() << "\n";
    
}