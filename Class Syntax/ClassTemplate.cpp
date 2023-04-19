// Фаил реализации класса содержит определения методов. Здесь к заголовкам методов добавляется (как называется?)
// ClassName::ClassName() {}
// ClassName & ClassName::operator=(ClassName &equal) {}
// void ClassName::setField(type _variableName) {}

#include "ClassTemplate.hpp"					//обязательно указать включение заголовочного файла класса

// далее описываем все по порядку заголовочного файла

// ClassTemplate::ClassTemplate() {}

// ClassTemplate::СlassTemplate(int _fieldInt, std::string _fieldStr) {
// 	setFieldInt(_fieldInt);
// 	setFieldStr(_fieldStr);
// }

ClassTemplate::ClassTemplate(int _fieldInt) {
	setFieldInt(_fieldInt); // fieldInt = _fieldInt, this->fieldInt = _fieldInt
	setFieldStr("Ecole");	// fieldStr = "String", this->fieldStr = "String"
}

ClassTemplate::ClassTemplate(int _fieldInt, std::string _fieldStr):
							 fieldInt(42), fieldStr("Ecole") {
	setFieldInt(_fieldInt);
	setFieldStr(_fieldStr);
}

ClassTemplate::ClassTemplate(const ClassTemplate &copy) {*this = copy;}			// Два варианта написания конструктора копирования
// ClassTemplate::ClassTemplate(const ClassTemplate &copy) {					// Первый когда в классе перегружен оператор присваивания(=)
// 	fieldInt = copy.getFieldInt();
// 	fieldStr = copy.getFieldStr();
// }

ClassTemplate::~ClassTemplate() {} // добавить варианты с delete

ClassTemplate & ClassTemplate::operator=(const ClassTemplate &equal) {
	if (this != &equal) {														// Всегда проверяем не равне ли переданный объект сам себе
		setFieldInt(equal.fieldInt);											// Далее необходимые поля присваеваем соотвественно, желательно делать
		setFieldStr(equal.fieldStr);											// set(get)
	}
	return (*this);																// Возвращаем адрес текущего объекта в любом сценарии if(false) or if(true)
}

void ClassTemplate::setFieldInt(int _fieldInt)			{fieldInt = _fieldInt;}
void ClassTemplate::setFieldStr(std::string _fieldStr)	{fieldStr = _fieldStr;}

int ClassTemplate::getFieldInt(void) const			{return (fieldInt);}
std::string ClassTemplate::getFieldStr(void) const	{return (fieldStr);}

std::ostream &operator<<(std::ostream &op, const ClassTemplate &_print) {
	op << _print.getFieldStr() << " " << _print.getFieldInt();
	return (op);
}