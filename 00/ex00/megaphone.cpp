#include <iostream>
#include <string>

// using namespace std;

int main() {
	std::string	str;
	
	size_t	i;

	std::cin>> str;
	if (!str.empty()) {
		for(i = 0; i < str.length(); i++) {
			std::cout<< (char)toupper(str[i]);
		}
	}
	else
		std::cout<< "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout<<std::endl;
	return 0;
}
