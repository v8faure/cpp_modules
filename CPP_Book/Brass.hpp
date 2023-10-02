#ifndef     BRASS_HPP
#define    BRASS_HPP
#include <string>


class Brass {
private:
	std::string	fullName_;
	long		acctNum_;
	double		balance_;
public:
	Brass(const std::string & fullName = "NullBoby", long acctNum = -1,
			double balance = 0.0);
	void Deposit (double amt);
	virtual void Withdraw(double amt);
	double Balance() const;
	virtual void ViewAcct() const;
	virtual ~Brass() {}
};

#endif