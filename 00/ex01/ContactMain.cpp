#include "Contact.hpp"
#include <string>
#include <iostream>
// #include <stdlib.h>
#include <cctype>

// как реализовать проверку на пустую строку и буквы с дефисом 
// в цикле повторяющий ввод до верного результата
string addfname() {
	int	ch = 0;
	string fname;

	cout<< "Insert your first name: ";
	getline(cin, fname);
	while (fname.empty()) {
		cout<< "String cannot be empty. Try again: ";
		getline(cin, fname);
		for(size_t i = 0; i < fname.length(); i++) {
			if (!isalpha(fname[i])) {
				if (&fname[i] != "-") {
					cout<< "String can contain only letters and dash(-). Try again: ";
					getline(cin, fname);
				}
				else if (++ch > 2) {
					cout<< "To much dash(-). Try again: ";
					getline(cin, fname);
				}
			}
		}
	}
	return fname;
}

int main() {
	// Contact test;
	string test;
	// // int i = 0;
	// // string	n = "12345";

	// cout<< "test class Contact" <<endl;
	// // if (test.addfname())
	// // 	return 1;
	// // test.addlname();
	// // test.addnickname();
	// test.addphonenumber();
	// // test.addsecret();
	// // cout<< test.contactdata() <<endl;
	test = addfname();
	cout<< test <<endl;
	return 0;
}
