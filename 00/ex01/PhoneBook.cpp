#include "PhoneBook.hpp"

void PhoneBook::prompt() {
	string	command;

	cout<< "Please enter one of three commands: ADD, SEARCH, EXIT" <<endl;
	cin>> command;
	command = upper(command);
	for (;command != "EXIT";) {
		if (command == "ADD") {
			add(index);
			if (index <= COUNT)
				index++;
			else
				index = 0;
			if (total <= COUNT)
				total++;
		}
		else if (command == "SEARCH") {
			total--;
			viewdata();
		}
		else
			cout<< "Invalid command: " << command <<endl;
		cout<< "Please enter one of three commands: ADD, SEARCH, EXIT" <<endl;
		cin>> command;
		command = upper(command);
	}
}

void PhoneBook::add(size_t index) {
	newcontact[index].addfname();
	newcontact[index].addlname();
	newcontact[index].addnickname();
	newcontact[index].addphonenumber();
	newcontact[index].addsecret();
	cout<< "New contact succsessfully created"<<endl;
}

void PhoneBook::viewdata() {
	string	temp;
	string	data;

	for (size_t i = 0; i <= total; i++) {
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
		cout<< i + 1 << data <<endl;
	}
	search();
}

void PhoneBook::search() {
	size_t	i;
	i = 0;

	for(;i > 0 && i <= total;) {
		cout<< "Enter index: "<< endl;
		cin>> i;
	}
	i -= 1;
	cout<< newcontact[i].getfname() <<endl;
	cout<< newcontact[i].getlname() <<endl;
	cout<< newcontact[i].getnickname() <<endl;
	cout<< newcontact[i].getphonenumber() <<endl;
	cout<< newcontact[i].getsecret() <<endl;
}