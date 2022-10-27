#include "PhoneBook.hpp"

void PhoneBook::prompt() {
	std::string	command;

	std::cout<< "Please enter one of three commands: ADD, SEARCH, EXIT" <<std::endl;
	std::cin>> command;
	command = upper(command);
	for (;command != "EXIT";) {
		if (command == "ADD") {
			add(index);
			if (index < COUNT)
				index++;
			else
				index = 0;
			if (total < COUNT)
				total++;
		}
		else if (command == "SEARCH") 
			viewdata();
		else
			std::cout<< "Invalid command: " << command <<std::endl;
		std::cout<< "Please enter one of three commands: ADD, SEARCH, EXIT" <<std::endl;
		std::cin>> command;
		command = upper(command);
	}
	std::cout<< "Bye Bye" <<std::endl;
}

void PhoneBook::add(size_t index) {
	newcontact[index].addfname();
	newcontact[index].addlname();
	newcontact[index].addnickname();
	newcontact[index].addphonenumber();
	newcontact[index].addsecret();
	std::cout<< "New contact succsessfully created"<<std::endl;
}

void PhoneBook::viewdata() {
	std::string	temp;
	std::string	data;

	for (size_t i = 0; i < total; i++) {
		temp = newcontact[i].getfname();
		if (temp.length() > 10) {
			temp.resize(9);
			temp += ".";
		}
		data = " | " + temp;
		temp = newcontact[i].getlname();
		if (temp.length() > 10) {
			temp.resize(9);
			temp += ".";
		}
		data += " | " + temp;
		temp = newcontact[i].getnickname();
		if (temp.length() > 10) {
			temp.resize(9);
			temp += ".";
		}
		data += " | " + temp;
		std::cout<< i + 1 << data <<std::endl;
	}
	search();
}

void PhoneBook::search() {
	size_t	i;
	i = 0;

	std::cout<< "Enter index: "<< std::endl;
	std::cin>> i;
	while (i <= 0 && i > total) {
		std::cout<<" Invalid index: " << i << ". " << "Enter digit from 1 to " << total << ": " <<std::endl;
		std::cin>> i;
	}
	std::cout<< newcontact[i].getfname() <<std::endl;
	std::cout<< newcontact[i].getlname() <<std::endl;
	std::cout<< newcontact[i].getnickname() <<std::endl;
	std::cout<< newcontact[i].getphonenumber() <<std::endl;
	std::cout<< newcontact[i].getsecret() <<std::endl;
}