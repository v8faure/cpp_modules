#include "Contact.hpp"
#include <string>
#include <iostream>
// #include <stdlib.h>
#include <cctype>

// как реализовать проверку на пустую строку и буквы с дефисом 
// в цикле повторяющий ввод до верного результата
// void addfname() {
// 	int i = 0;
// 	std::string fname;

// 	std::cout<< "Insert your first name: ";
// 	getline(std::cin, fname);
// 	while (fname.length() >= 0) {
// 		if (fname.empty())
// 			std::cout<< "String cannot be empty. Try again: ";
// 		else
// 			for(int i = 0; i > ; i++) {
// 				if (isalpha(fname[i]))
// 				std::cout<< "error"<<std::endl;
// 			}
// 		getline(std::cin, fname);
// 	}
// }

bool isstralpha(std::string & str) {
	for(int i = 0; i <= str.length(); i++) {
		if (isalpha(str[i]) == 0) {
			std::cout<< "Enter only letters. Try again" <<std::endl;
			return false;
		}
	}
	return true;
}

int main() {
	std::string test;

	getline(std::cin,test);
	while(test.length() >= 0) {
		if (test.empty())
			std::cout<< "String cannot be empty. Try again: ";
		else if (isstralpha(test))
			break;
		getline(std::cin, test);
	}

	// addfname();
	// std::cout<< test.length();
}
