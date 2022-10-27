#include <string>
#include <iostream>
#include <cctype>

bool isstralpha(std::string & str) {
	for(int i = 0; i < str.length(); i++) {
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
	while (test.length() >= 0) {
		if (test.empty())
			std::cout<< "String cannot be empty. Try again: ";
		else if (isstralpha(test))
			break;
		getline(std::cin, test);
	}
}