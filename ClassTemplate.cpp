// Фаил реализации класса содержит определения методов. Здесь к заголовкам методов добавляется (как называется?)
// ClassName::ClassName() {}
// ClassName & ClassName::operator=(ClassName &equal) {}
// void ClassName::setField(type _variableName) {}

#include "ClassTemplate.hpp"											//обязательно указать включение заголовочного файла класса

// далее описываем все по порядку заголовочного файла

ClassTemplate::ClassTemplate() {}

// ClassTemplate::СlassTemplate(int _fieldInt, std::string _fieldStr) {
// 	setFieldInt(_fieldInt);
// 	setFieldStr(_fieldStr);
// }

ClassTemplate::ClassTemplate(ClassTemplate(int _fieldInt)) {
	setFieldInt(_fieldInt); // fieldInt = _fieldInt, this->fieldInt = _fieldInt
	setFieldStr("String");	// fieldStr = "String", this->fieldStr = "String"
}

ClassTemplate::ClassTemplate(int _fieldInt, std::string _fieldStr):
							 fieldInt(42), fieldStr("String") {
	setFieldInt(_fieldInt);
	setFieldStr(_fieldStr);
}

ClassTemplate::ClassTemplate(ClassTemplate const &copy) {

}

void ClassTemplate::setFieldInt(int _fieldInt) {
	fieldInt = _fieldInt;
}

void ClassTemplate::setFieldStr(std::string _fieldStr) {
	fieldStr = _fieldStr;
}