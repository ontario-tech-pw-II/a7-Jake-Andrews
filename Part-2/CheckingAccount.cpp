#include "CheckingAccount.h"

using namespace std;

	
// constructor initializes balance and transaction fee
CheckingAccount::CheckingAccount( double initialBalance, double fee ) : Account( initialBalance ) 
{
	// your code
	if (fee <= 0) {
		transactionFee = 0.0; 
	}
	else {transactionFee = fee;}
} 

// credit (add) an amount to the account balance and charge fee
void CheckingAccount::credit( double amount )
{ 
	// your code
	//considering the case where they have $0, deposit < transaction fee, and go negative. 
	if (getBalance() <= (amount - transactionFee)) {
		Account::credit(amount);
		chargeFee();
	}
	else {cout << "Including your deposit, your bank value is less than the transaction fee." << endl;}
} 

// debit (subtract) an amount from the account balance and charge fee
bool CheckingAccount::debit( double amount )
{
	// your code
	if (amount + transactionFee > getBalance()) {
		cout << "Sorry, that debit is larger than your bank value." << endl;
	}
	else {
		Account::debit(amount);
		chargeFee();
	}
}

// subtract transaction fee
void CheckingAccount::chargeFee()
{
	// your code
	setBalance(getBalance() - transactionFee);
}

void CheckingAccount::display(ostream & os) const
{
	// your code
	os << "Account Type: Checking" << endl;
	os << "Balance: $ " << getBalance() << endl;
	os << "Transaction Fee: " << transactionFee << endl;	
}
