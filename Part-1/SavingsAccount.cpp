#include "SavingsAccount.h"

using namespace std;

// constructor initializes balance and interest rate
SavingsAccount::SavingsAccount( double initialBalance, double rate ) : Account( initialBalance ) 
{
	// your code
	//return the account balance 
	if (rate <= 0) {
		interestRate = 0.0; 
	}
	else {interestRate = rate;}
}

double SavingsAccount::calculateInterest() {
	// your code
} 
void SavingsAccount::display(ostream & os) const
{
	// your code
	//Account::display(cout);
	os << "Account Type: Saving" << endl;
	os << "Balance: $ " << getBalance() << endl;
	os << "Interest Rate (%): " << interestRate*100 << endl;
	
}
