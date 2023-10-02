#include "Brass.hpp"
#include <iostream>

using namespace std;

Brass::Brass(const std::string & fullName, long acctNum, double balance) {
    fullName_ = fullName;
    acctNum_ = acctNum;
    balance_ = balance;
}
void Brass::Deposit (double amt) {
    if (amt < 0)
        cout<< "Negative deposit nit allowed.\nDeposit is cancelled" <<endl;
    else
        balance_ += amt;
}
void Brass::Withdraw(double amt) {
    if (amt < 0)
        cout<< "Withdrawal amount must be positive.\nWithdrawal is cancelled" <<endl;
    else if (amt <= balance_)
        balance_ -= amt;
    else
        cout<< "Withdrawal amount of $" << amt 
        << "exceeds your balance.\n" 
        << "Withdrawal canceled." <<endl;
}
double Brass::Balance() const {
    return balance_;
}
void Brass::ViewAcct() const {
    cout<< "Client: " << fullName_ <<endl;
    cout<< "Account Number: " << acctNum_ <<endl;
    cout<< "Balance: $" << balance_ <<endl;
}