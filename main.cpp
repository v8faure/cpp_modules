#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv) { 
	std::string		fileName;
	std::string		strTemp;

	if (argc == 4) {
		std::string		strOne(argv[2]);
		std::string		strTwo(argv[3]);
		std::ifstream	fd(argv[1]);

		if (!fd.is_open()) {
			std::cout<< "Can't open file" <<std::endl;
			return 2;
		}
		fileName = argv[1];
		fileName += ".replace";
		std::ofstream	newfile(fileName);
		while (fd >> strTemp) {
			if (strTemp == strOne)
					newfile << " " + strTwo + " ";
			else
				newfile << " " + strTemp;
			}
		fd.close();
		newfile.close();
	}
	else {
		std::cout<< "Wrong count of arguments. Need ./filename srting1 string2" << std::endl;
		return 1;
	}
	return 0;
} 