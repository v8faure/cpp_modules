#ifndef BRASSPLUS_HPP
#define BRASSPLUS_HPP
#include "Brass.hpp"

class BrassPlus: public Brass {
private:
    double  maxLoan_;
    double  rate_;
    double  owesBank_;
public:
    BrassPlus(const std::string & fullName = "Nullbody", long acctNum = -1,
			double balance = 0.0, double maxLoan = 500, double rate = 0.11125);
    BrassPlus(const Brass & brass, double maxLoan = 500, double rate = 0.11125);
    virtual void ViewAcct() const;
    virtual void Withdraw(double amt);;
    void ResetMax(double maxLoan) { maxLoan_ = maxLoan; }
    void ResetRate(double rate) { rate_ = rate; }
    void ResetOwes() { owesBank_ = 0; }
};

#endif