#include "Contact.hpp"

bool Contact::isstralpha(std::string & str) {
    for(size_t i = 0; i < str.length(); i++) {
        if (isalpha(str[i]) == 0)
            return false;
    }
    return true;
}

bool Contact::isstrdigit(std::string & str) {
    for(size_t i = 0; i < str.length(); i++) {
        if (isdigit(str[i]) == 0)
            return false;
    }
    return true;
}

std::string Contact::getfname() const {
	return fname;
}

std::string Contact::getlname() const {
	return lname;
}

std::string Contact::getnickname() const {
	return nickname;
}

std::string Contact::getphonenumber() const {
	return phonenumber;
}

std::string Contact::getsecret() const {
	return darkestsecret;
}

void Contact::addfname() {
	std::cout<< "Insert your first name: ";
	std::cin>> fname;
	while (fname.length() >= 0) {
		if (fname.empty())
			std::cout<< "String cannot be empty. ";
		else if (this->isstralpha(fname))
			break;
		std::cout<< "Enter only letters. Try again: ";
		std::cin>> fname;
	}
}

void Contact::addlname() {
	std::cout<< "Insert your last name: ";
	std::cin>> lname;
	while (lname.length() >= 0) {
		if (lname.empty())
			std::cout<< "String cannot be empty. ";
		else if (this->isstralpha(lname))
			break;
		std::cout<< "Enter only letters. Try again: ";
		std::cin>> lname;
	}
}

void Contact::addnickname() {
	std::cout<< "Insert your nickname: ";
	std::cin>> nickname;
	while (nickname.empty()) {
		std::cout<< "String cannot be empty. Try again: ";
		std::cin>> nickname;
	}
}

void Contact::addphonenumber() {
	std::cout<< "Enter your phonenumber: ";
	std::cin>> phonenumber;
	while ((phonenumber.length()) >= 0) {
		if ((phonenumber.length() != 7) && (phonenumber.length() != 10))
			std::cout<< "Phonenumber must contain 7 or 10 digits, without 8(+7). ";
		else if (this->isstrdigit(phonenumber)) {
			break;
		}
		std::cout<< "Enter only digits. Try again: "<<std::endl;
		std::cin>> phonenumber;
	}
}

void Contact::addsecret() {
	std::cout<< "Please, share your dark secret: ";
	std::cin>> darkestsecret;
	while (darkestsecret.empty()) {
		std::cout<< "String cannot be empty. Try again: ";
		std::cin>> darkestsecret;
	}
}
