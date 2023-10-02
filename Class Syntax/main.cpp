// заметки по компиляции?

#include "ClassTemplate.hpp"

int main() {
	ClassTemplate A;								// создание объекта конструктором по умолчанию
	ClassTemplate B(21);							// создание обЪекта конструктором с одной переменной
	ClassTemplate D(21, "School");					// создание обЪекта конструктором с двумя переменными
	int 		nbr = 314;
	std::string str = "Pi";

	std::cout<< "object A: " << A << std::endl;		// вывод в консоль обЪекта А

	A.setFieldInt(nbr);								// внесение изменений в поля обЪекта А
	A.setFieldStr(str);								// с помощью методов set и передачи в него аргумента

	ClassTemplate C(A);								// создание объекта коструктором копирования

	std::cout<< "object A: " << A << std::endl;
	std::cout<< "object B: " << B << std::endl;
	std::cout<< "object C: " << C << std::endl;
	std::cout<< "object D: " << D << std::endl;

	B = D;											// присвоение значений полей объекта D объекту B
	std::cout<< "object B: " << B << std::endl;

	nbr = B.getFieldInt();							// передача значений в переменную с помощью метода get
	str = C.getFieldStr();

	std::cout<< "variables: " << str << " " << nbr <<std::endl;
}