#include "Rail.h"

/*
contructor and function specification for Dimentional
*/

Rail::Rail() {
	this->length = this->height = 0;
	this->material, this->type = "";
}

Rail::Rail(double length, double height, std::string material, std::string type, double price, int amount, int available) : Wood(price, amount, available) {
	this->length = length;
	this->height = height;
	this->type = type;
	this->material = material;
	this->available = available;
}

//non-default overloaded construter
//length, width, height, price, available - strings
Rail::Rail(std::string length, std::string height, std::string material, std::string type, std::string price, std::string available) : Wood(price, available) {
	this->length = std::stof(length);
	this->height = std::stof(height);
	this->material = material;
	this->type = type;
}

//copy construter
Rail::Rail(Rail& railWood) {

	length = railWood.length;
	height = railWood.height;
	type = railWood.type;
	material = railWood.material;
	price = railWood.price;
	available = railWood.available;

}

/*
std::string Rail::dimentionCombination() {
	return std::to_string(length) + "'' X " + std::to_string(height) + " '' " + type + " " + material;
}

System::String^ Rail::getDimentionSS() {
	System::String^ ss = gcnew System::String(dimentionCombination().c_str());
	return ss;
}
*/

//prints the dimensions as a standard string
std::string Rail::printToFile() {
	return std::to_string(length) + "," + std::to_string(height) + "," + material + "," + type + ',' + Wood::printToFile();
}

//print to the GUI
System::String^ Rail::printToDisplay() {

	System::String^ ss = gcnew System::String((std::to_string(length) + "ft X " + std::to_string(height) + "ft made from " + material + " type: " + type + " @ " + Wood::printToDisplay()).c_str());

	return ss;
}