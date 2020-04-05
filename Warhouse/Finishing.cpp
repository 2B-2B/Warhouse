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

//non-default overloaded construter
//length, width, height, price, available - strings
Finishing::Finishing(std::string length, std::string height, std::string material, std::string mouldType, std::string price, std::string available) : Wood(price, available) {
	this->length = std::stof(length);
	this->height = std::stof(height);
	this->material = material;
	this->mouldType = mouldType;
}

//copy construter
Finishing::Finishing(Finishing& finishingWood) {

	length = finishingWood.length;
	height = finishingWood.height;
	mouldType = finishingWood.mouldType;
	material = finishingWood.material;
	price = finishingWood.price;
	available = finishingWood.available;

}

//combination string function
std::string Finishing::dimentionCombination() {
	return std::to_string(length) + "X"+ std::to_string(height) + mouldType + " " + material;
}


System::String^ Finishing::getDimentionSS() {
	System::String^ ss = gcnew System::String(dimentionCombination().c_str());
	return ss;
}