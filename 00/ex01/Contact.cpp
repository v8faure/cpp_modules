#include "Contact.hpp"

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
	getline(std::cin, fname);
	while (fname.empty()) {
		std::cout<< "String cannot be empty. Try again: ";
		getline(std::cin, fname);
	}
}

void Contact::addlname() {
	std::cout<< "Insert your last name: ";
	getline(std::cin, lname);
	while (lname.empty()) {
		std::cout<< "String cannot be empty. Try again: ";
		getline(std::cin, lname);
	}
}

void Contact::addnickname() {
	std::cout<< "Insert your nickname: ";
	getline(std::cin, nickname);
	while (nickname.empty()) {
		std::cout<< "String cannot be empty. Try again: ";
		getline(std::cin, nickname);
	}
}

void Contact::addphonenumber() {
	std::cout<< "Enter your phonenumber: ";
	getline(std::cin, phonenumber);
	while ((phonenumber.length() != 7) && (phonenumber.length() != 10)) {
		std::cout<< "Phonenumber must contain 7 or 10 digits, without 8(+7). Try again: ";
		getline(std::cin, phonenumber);
	}
}

void Contact::addsecret() {
	std::cout<< "Please, share your dark secret: ";
	getline(std::cin, darkestsecret);
	while (darkestsecret.empty()) {
		std::cout<< "String cannot be empty. Try again: ";
		getline(std::cin, darkestsecret);
	}
}
