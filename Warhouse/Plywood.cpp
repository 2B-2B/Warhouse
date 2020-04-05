#include "Plywood.h"

/*
contructor and function specification for Dimentional
*/

Plywood::Plywood() {
	this->length = this->width = this->thick = 0;
}

Plywood::Plywood(double length, double width, double thick, double price, int amount, int available) : Wood(price, amount, available) {
	this->length = length;
	this->width = width;
	this->thick = thick;
	this->available = available;
}

Plywood::Plywood(std::string length, std::string width, std::string thick, std::string price, std::string available) : Wood(price, available) {
	this->length = std::stof(length);
	this->width = std::stof(width);
	this->thick = std::stof(thick);
}

//copy construter
Plywood::Plywood(Plywood& plywoodWood) {

	length = plywoodWood.length;
	width = plywoodWood.width;
	thick = plywoodWood.thick;
	price = plywoodWood.price;
	available = plywoodWood.available;

}


std::string Plywood::dimentionCombination() {
	return std::to_string(length) + "X" + std::to_string(width) + " - " + std::to_string(thick) + "'";
}

System::String^ Plywood::getDimentionSS() {
	System::String^ ss = gcnew System::String(dimentionCombination().c_str());
	return ss;
}