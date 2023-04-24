// Синтасис класса родителя с виртуальными методами
// Если в классе указываются виртуальные методы, необходимо декструктор указать виртуальным
#ifndef GRANDPARENT_HPP
#define GRANDPARENT_HPP

#include <iostream>
#include "../ClassTemplate.hpp"					// путь к заголовку пользовательского класса 

class Grandparent {
private:                                        // поля и методы указанные в модификаторе private не доступны для использования и изменения наследникам
	std::string		privatefield;
	ClassTemplate	classimplement;				// имплементация пользовательского класса (это не наследование). Объект инициализируется конструтором класса
												// или можно инициализировать объект в поле инициализации конструктора этого класса
	bool privateMethod();
protected:                                      // поля и методы указанные в модификаторе protected не доступны пользователю для изменения через объект, но доступны классу наследнику
	int 		num = 3;
	int 		array[num];
	std::string	protectedfield;
	
	bool protectedMethod();
public:                                         // доступный во всех случаях
	Grandparent();
	Grandparent(const Grandparent &copy);
	Grandparent & operator=(const Grandparent &equal);
	virtual ~Grandparent(); // добавить варианты с delete

	void setPrivateField(const std::string _privatefield);
	void setProtectedField(const std::string _protectedfield);
	void setClassImplement(ClassTemplate _object);

	std::string getPrivateField() const {return privatefield;}
	std::string getProtectedField() const {return protectedfield;}
	ClassTemplate getClassImplement() const {return classimplement;}	// возвращает копию объекта типа ClassTemplate

	//virtual methods
	virtual std::string PureVirtual() = 0;								// чистый виртуальный (абстрактный) метод
	virtual std::string SimpleVirtual();								// виртуальный метод
};

#endif
// описать explicit и mutable