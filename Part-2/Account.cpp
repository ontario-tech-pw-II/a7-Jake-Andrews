#include "Account.h"

using namespace std;

Account::Account( double initialBalance)
{
	if( initialBalance >= 0.0 )
		balance = initialBalance;
	else 
		balance = 0.0;
}	

//credit (add) an amount to the account balance
void Account::credit( double amount )
{
	balance = balance + amount; 
} 

//debit (subtract) an amount from the account balance return bool indicating whether money was debited
bool Account::debit( double amount )
{
	if ( amount > balance ){
		return false;
	} else{
		balance = balance - amount;
		return true;
	}
}

double Account::getBalance() const
{
	return balance;
} 

void Account::setBalance( double newBalance )
{
	balance = newBalance;
} 

void Account::display(ostream & out) const
{
} 					

 
