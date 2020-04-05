#include "Dimentional.h"

/*
contructor and function specification for Dimentional
*/

//default construter
Dimentional::Dimentional() {
	this->length = this->width = this->height = 0;
}

//non-default construter
Dimentional::Dimentional(double length, double width, double height, double price, int available) : Wood(price, available) {
	this->length = length;
	this->width = width;
	this->height = height;
}

//non-default construter
Dimentional::Dimentional(double length, double width, double height, double price, int amount, int available) : Wood(price, amount, available) {
	this->length = length;
	this->width = width;
	this->height = height;
}

//non-default overloaded construter
//length, width, height, price, available - strings
Dimentional::Dimentional(std::string length, std::string width, std::string height, std::string price, std::string available) : Wood(price, available) {
	this->length = std::stof(length);
	this->width = std::stof(width);
	this->height = std::stof(height);
}

//copy construter
Dimentional::Dimentional(Dimentional& dimentionalWood) {

	length = dimentionalWood.length;
	width = dimentionalWood.width;
	height = dimentionalWood.height;
	price = dimentionalWood.price;
	amount = dimentionalWood.amount;
	available = dimentionalWood.available;

}

//prints the dimensions as a standard string
std::string Dimentional::printDimensions() {
	return std::to_string(length) + "X" + std::to_string(width) + " - " + std::to_string(height) + "'";
}

//prints the dimensions as a system string
System::String^ Dimentional::getDimentionSS() {
	System::String^ ss = gcnew System::String(printDimensions().c_str());
	return ss;
}