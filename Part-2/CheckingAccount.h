#ifndef SICT_CHECKINGACCOUNT_H
#define SICT_CHECKINGACCOUNT_H

#include "Account.h"

using namespace std;

class CheckingAccount : public Account {
	private:
		double transactionFee;

		// 	TODO: subtract transaction fee form balance
		void chargeFee();
	
	public:

		// constructor initializes balance and transaction fee 
		CheckingAccount( double , double );  

		// TODO: Write a function prototype to override credit function
		void credit( double );

		// TODO: Write a function prototype to  override debit function
		bool debit( double );	

		// TODO: Write a function prototype to  override display function
		void display(ostream &) const;
};
#endif
