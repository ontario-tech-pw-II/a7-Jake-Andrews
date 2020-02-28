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
	
		// TODDO: Write a function prototype for virtual function credit 
		virtual void credit(double);

		// TODO: Write a function prototype for virtual function debit
		virtual bool debit(double);

		// TODO: Write a function prototype for virtual function display
		virtual void display(ostream &) const; 					
};

#endif
