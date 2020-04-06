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



//prints the dimensions as a standard string
std::string Plywood::printToFile() {
	return std::to_string(length) + "," + std::to_string(width) + "," + std::to_string(thick) + "," + Wood::printToFile();
}

//print to the GUI
System::String^ Plywood::printToDisplay() {

	System::String^ ss = gcnew System::String((std::to_string(length) + "ft X " + std::to_string(width) + "ft plywood @ " + std::to_string(thick) + "in thickness @ " + Wood::printToDisplay()).c_str());

	return ss;
}