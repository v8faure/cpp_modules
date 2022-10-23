#include "Contact.hpp"

string Contact::getfname() const {
	return fname;
}

string Contact::getlname() const {
	return lname;
}

string Contact::getnickname() const {
	return nickname;
}

string Contact::getphonenumber() const {
	return phonenumber;
}

string Contact::getsecret() const {
	return darkestsecret;
}

void Contact::addfname() {
	cout<< "Insert your first name: ";
	getline(cin, fname);
	// cout<<endl;
	while (fname.empty()) {
		cout<< "String cannot be empty. Try again: ";
		getline(cin, fname);
	}
}

void Contact::addlname() {
	cout<< "Insert your last name: ";
	getline(cin, lname);
	// cout<<endl;
	while (lname.empty()) {
		cout<< "String cannot be empty. Try again: ";
		getline(cin, lname);
	}
}

void Contact::addnickname() {
	cout<< "Insert your nickname: ";
	getline(cin, nickname);
	// cout<<endl;
	while (nickname.empty()) {
		cout<< "String cannot be empty. Try again: ";
		getline(cin, nickname);
	}
}

void Contact::addphonenumber() {
	cout<< "Enter your phonenumber: ";
	getline(cin, phonenumber);
	while ((phonenumber.length() != 7) && (phonenumber.length() != 10)) {
		cout<< "Phonenumber must contain 7 or 10 digits, without 8(+7). Try again: ";
		getline(cin, phonenumber);
	}
}

void Contact::addsecret() {
	cout<< "Please, share your dark secret: ";
	getline(cin, darkestsecret);
	// cout<<endl;
	while (darkestsecret.empty()) {
		cout<< "String cannot be empty. Try again: ";
		getline(cin, darkestsecret);
	}
}
