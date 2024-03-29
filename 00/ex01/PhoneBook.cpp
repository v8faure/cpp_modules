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
			if (total <= COUNT)
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
	size_t		j;

	for (size_t i = 0; i < total; i++) {
		temp = newcontact[i].getfname();
		if (temp.length() > 10) {
			temp.resize(9);
			temp += ".";
		}
		else {
			j = 10 - temp.length();
			temp.clear();
			for (;j > 0; j--)
				temp += " ";
			temp = temp + newcontact[i].getfname();
		}
		data = " | " + temp;
		temp = newcontact[i].getlname();
		if (temp.length() > 10) {
			temp.resize(9);
			temp += ".";
		}
		else {
			j = 10 - temp.length();
			temp.clear();
			for (;j > 0; j--)
				temp += " ";
			temp = temp + newcontact[i].getlname();;
		}
		data += " | " + temp;
		temp = newcontact[i].getnickname();
		if (temp.length() > 10) {
			temp.resize(9);
			temp += ".";
		}
		else {
			j = 10 - temp.length();
			temp.clear();
			for (;j > 0; j--)
				temp += " ";
			temp = temp + newcontact[i].getnickname();
		}
		data += " | " + temp;
		std::cout<< i + 1 << data <<std::endl;
	}
	search();
}

void PhoneBook::search() {
	std::string	str_i;
	char		c_total = total + '0';
	size_t		i = 0;
	
	if (total == 0) {
		std::cout<< "At first, add contacts to your amazing phonebook!"<<std::endl;
		return ;
	}
	std::cout<< "Enter index: ";
	std::cin>> str_i;
	while((str_i[0] < '1' || str_i[0] > c_total) || str_i.length() != 1) {
		std::cout<<"Invalid index: " << str_i << ". " << "Enter digit from 1 to " << c_total << ": ";
		std::cin>> str_i;
	}
	i = stoi(str_i) - 1;
	std::cout<< "Firstname  : " << newcontact[i].getfname() <<std::endl;
	std::cout<< "Lastname   : " << newcontact[i].getlname() <<std::endl;
	std::cout<< "Nickname   : " << newcontact[i].getnickname() <<std::endl;
	std::cout<< "Phone      : " << newcontact[i].getphonenumber() <<std::endl;
	std::cout<< "Dark secret: " << newcontact[i].getsecret() <<std::endl;
}