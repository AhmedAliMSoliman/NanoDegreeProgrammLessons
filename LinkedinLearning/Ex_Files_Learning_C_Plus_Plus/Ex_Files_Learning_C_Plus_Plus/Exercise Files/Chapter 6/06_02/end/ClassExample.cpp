/*Classes -    Erin Colvin
This will create a simple class called BankAccount  
*/
#include <iostream> 

using namespace std; 
//////////////////////
//Class definition
//////////////////////
class BankAccount
{
  private: 
	float balance;

  public:    
    BankAccount();  
	void Deposit(float);
    void WithDrawl();
    float getBalance();
    
};
//Default constructor, gets executed when an instance
//of the class gets created, just initializes the balance to 0
BankAccount::BankAccount()
{
	balance = 0;
}
//Function to return the balance since the access specifier
//for attributes should be private
float BankAccount::getBalance()
{
	return balance;
}

//Function to add a deposit to my balance
void BankAccount::Deposit(float dep)
{
	balance = balance + dep;
}
//See if you can write the withdrawl function here:

//////////////////////////////////////////////////////////////////
int main() 
{
      BankAccount checking;
      BankAccount savings;
      cout << "Checking balance is: " << checking.getBalance() << endl;
      cout << "Savings balance is: " << savings.getBalance() << endl;
      
      //Add a deposit to my classes
      checking.Deposit(100);
	  savings.Deposit(500);
	  
	  //Print again, getting the balance through the getBalance function
	  cout << "Checking balance is: " << checking.getBalance() << endl;
      cout << "Savings balance is: " << savings.getBalance() << endl;
      
      return 0;
}



