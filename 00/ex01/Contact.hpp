#ifndef CONTACT_H
# define CONTACT_H

#include <string>
#include <iostream>
#include <stdlib.h>
#include <cctype>

class	Contact
{
	private:
	std::string	fname;
	std::string	lname;
	std::string	nickname;
	std::string	phonenumber;
	std::string	darkestsecret;
	bool isstralpha(std::string & str);
	bool isstrdigit(std::string & str);

	public:
	void addfname();
	void addlname();
	void addnickname();
	void addphonenumber();
	void addsecret();
	std::string getfname()const;
	std::string getlname()const;
	std::string getnickname()const;
	std::string getphonenumber()const;
	std::string getsecret()const;
};

#endif
