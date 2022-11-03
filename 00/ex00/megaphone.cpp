#include <iostream>
#include <string>

int main(int argc, char **argv) {
	std::string	str;

	for(int i = 1; i < argc; i++) 
		str += argv[i];
	if (!str.empty()) {
		for(size_t i = 0; i < str.length(); i++) {
			std::cout<< (char)toupper(str[i]);
		}
	}
	else
		std::cout<< "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout<<std::endl;
	return 0;
}
