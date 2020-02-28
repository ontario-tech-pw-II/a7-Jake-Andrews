#include "CheckingAccount.h"

using namespace std;

	
// constructor initializes balance and transaction fee
CheckingAccount::CheckingAccount( double initialBalance, double fee ) : Account( initialBalance ) 
{
	// your code
} 

// credit (add) an amount to the account balance and charge fee
void CheckingAccount::credit( double amount )
{
	// your code
} 

// debit (subtract) an amount from the account balance and charge fee
bool CheckingAccount::debit( double amount )
{
	// your code
}

// subtract transaction fee
void CheckingAccount::chargeFee()
{
	// your code
}

void CheckingAccount::display(ostream & os) const
{
	// your code
}
