#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#define COUNT	7

#include <iostream>
#include <string>
#include "Contact.hpp"

using namespace std;

class PhoneBook
{
	private:
	size_t	index;
	size_t	total;
	Contact	newcontact[COUNT];
	string upper(string & command) {
		if (!command.empty()) {
			for(size_t i = 0; i < command.length(); i++) {
			command[i] = (char)toupper(command[i]);
			}
		}
		return command;
	};

	public:
	PhoneBook() {index = 0; total = 0;};
	void prompt();
	void add(size_t index);
	void search();
	void viewdata();
};
#endif
