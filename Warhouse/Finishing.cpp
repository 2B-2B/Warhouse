#include "Finishing.h"

/*
contructor and function specification for Dimentional
*/

Finishing::Finishing() {
	this->length = this->height = 0;
	this->material, this->mouldType = "";
}

Finishing::Finishing(double length, double height, std::string material, std::string mouldType, double price, int amount, int available) : Wood(price, amount, available) {
	this->length = length;
	this->height = height;
	this->mouldType = mouldType;
	this->material = material;
	this->available = available;
}

//combination string function
std::string Finishing::dimentionCombination() {
	return std::to_string(length) + "X"+ std::to_string(height) + mouldType + " " + material;
}


System::String^ Finishing::getDimentionSS() {
	System::String^ ss = gcnew System::String(dimentionCombination().c_str());
	return ss;
}