## Inheritance program

Learning outcomes highlights: 
- know how to derive from a base class
- undertand the overriding 

**Problem:** The <code>Account</code> class is designed to represent customers’ bank accounts (base class). It includes a data member (of type double) to represent the account balance. This class provides a constructor that receives an initial balance and uses it to initialize the data member. 

# Account Class
## Account.h 
```C++
#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>

using namespace std;
   
class Account{
	private:
		double balance; // data member that stores the balance

	protected:
		double getBalance() const; // return the account balance
		void setBalance( double ); // sets the account balance

		public:
		Account( double = 0.0); // constructor initializes balance
	
		virtual void credit(double);

		virtual bool debit(double);

		virtual void display(ostream &) const; 					
};

#endif
```
## Account.cpp 
```C++
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
	out << "None " << endl;
} 					
```
# Part1: SavingAccount Class
Derived class <code>SavingsAccount</code> that inherits the functionality of an <code>Account</code>, but also include a data member of type double indicating the interest rate (for example 0.12) assigned to the Account (<code>interestRate</code>). 
* Write the SavingsAccount’s constructor that receives the initial balance, as well as an initial value for the SavingsAccount’s interest rate, and then initializes the object. If interest rate is less than zero, the <code>interestRate</code> will be set to zero. 
* Override the <code>display</code> function in the <code>Account</code> class that prints a <code>SavingsAccount</code> in the following format (this is an example):
```C++
Account type: Saving
Balance: $ 400.00
Interest Rate (%): 12.00
```
# Part2: CheckingAccount Class
Derive class <code>CheckingAccount</code> that inherits from base class Account and include an additional data member of type double that represents the fee charged per transaction (<code>transactionFee</code>). 
* Write CheckingAccount’s constructor that receives the initial balance, as well as a parameter indicating a transaction fee amount. If transaction fee is less than zero, the <code>transactionFee</code> will be set to zero. 
* Write the <code>chargeFee</code> member function that updates the balance by deducting the <code>transactionFee</code> from the balance. 
Override member functions debit for class <code>CheckingAccount</code> so that it subtracts the <code>transactionFee</code> from the account balance (call chargeFee). If the operation is successful, it will return true otherwise it does nothing and will return false (<code>debit</code> is successful if the amount is not greater than the balance). CheckingAccount’s versions of this function should invoke the base-class Account version to perform the <code>debit</code> operation.
  * Hint: Define Account’s <code>debit</code> function so that it returns a <code>bool</code> indicating whether money was withdrawn. Then use the return value to determine whether a fee should be charged.
* Override member functions <code>credit</code> for class CheckingAccount so that it subtracts the <code>transactionFee</code> from the account balance (call chargeFee). CheckingAccount’s versions of this function should invoke the base-class Account version to perform the credit operation. 
* Override the <code>display</code> function in the <code>Account</code> class that prints a <code>CheckingAccount</code> in the following format (example):
```C++
Account type: Checking
Balance: $ 400.00
Transaction Fee: 1.00
```
