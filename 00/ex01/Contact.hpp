#ifndef CONTACT_H
# define CONTACT_H

#include <string>
#include <iostream>
#include <stdlib.h>
#include <cctype>
using namespace std;

class	Contact
{
	private:
	string	fname;
	string	lname;
	string	nickname;
	string	phonenumber;
	string	darkestsecret;

	public:
	void addfname(); //check for letters
	void addlname(); //check for letters
	void addnickname();
	void addphonenumber(); //check for numbers
	void addsecret();
	string getfname()const;
	string getlname()const;
	string getnickname()const;
	string getphonenumber()const;
	string getsecret()const;
};

#endif
