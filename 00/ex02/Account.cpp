#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <sstream>

Account::Account(int initial_deposit) {
    _nbDeposits = initial_deposit;
}

void Account::_displayTimestamp(void) {
	std::stringstream ss;
	time_t sec = time(NULL);
	ss << asctime(localtime(&sec));
	std::cout<< ss.str() <<std::endl;
}

void Account::makeDeposit(int deposit) {
	;
}

bool Account::makeWithdrawal(int withdrawal) {
	;
}

int Account::checkAmount(void) const {
	;
}

void Account::displayStatus(void) const {
	;
}

int Account::getNbAccounts(void) {
	;
}

int	Account::getTotalAmount(void) {
	;
}
int	Account::getNbDeposits(void) {
	;
}
int	Account::getNbWithdrawals(void) {
	;
}
void Account::displayAccountsInfos(void) {
	;
}