#include "BrassPlus.hpp"
#include <iostream>
using namespace std;

BrassPlus::BrassPlus(const std::string & fullName, long acctNum,
			double balance, double maxLoan, double rate): Brass(fullName, acctNum, balance) {
	maxLoan_ = maxLoan;
	owesBank_ = 0.0;
	rate_ = rate;
}

BrassPlus::BrassPlus(const Brass & brass, double maxLoan, double rate): Brass(brass) {
	maxLoan_ = maxLoan;
	owesBank_ = 0.0;
	rate_ = rate;
}
void BrassPlus::ViewAcct() const {
	Brass::ViewAcct();
	cout<< "Maximum loan: $" << maxLoan_ <<endl;
	cout<< "Owed to bank: $" << owesBank_ <<endl;
	cout<< "Loan Rate: " << 100 * rate_ << "%\n";
}
void BrassPlus::Withdraw(double amt) {
	double balance = Balance();
	if (amt <= balance)
		Brass::Withdraw(amt);
	else if (amt <= balance + maxLoan_ - owesBank_) {
		double advance = amt - balance;
		owesBank_ += advance * (1.0 + rate_);
		cout<< "Bank advance: $" << advance <<endl;
		cout<< "Finance charge: $" << advance * rate_ <<endl;
		Deposit(advance);
		Brass::Withdraw(amt);
	}
	else
		cout<< "Credit limit exceeded. Transaction cancelled.\n";
}