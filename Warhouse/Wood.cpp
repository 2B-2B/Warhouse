#include "Wood.h"

/*
contructor and function specification for Dimentional
*/

Wood::Wood() {
	this->price = 0;
	this->amount = 0;
}

//non-default constructer
Wood::Wood(double price, int available) {
	this->price = price;
	this->available = available;
}

//non-default constructer
Wood::Wood(double price, int amount, int available) {
	this->price = price;
	this->amount = amount;
	this->available = available;
}

Wood::Wood(std::string price, std::string available) {
	this->price = std::stof(price);
	this->available = std::stoi(available);
}

//will return dimentions as a system string
System::String^ Wood::getDimentionSS() {

	System::String^ ss = gcnew System::String(std::to_string(totalPrice()).c_str());

	return ss;

}

//will return price as a system string
System::String^ Wood::getPriceSS() {

	System::String^ ss = gcnew System::String(std::to_string(price).c_str());

	return ss;

}

//will return ammount as a system string
System::String^ Wood::getAmountSS() {

	System::String^ ss = gcnew System::String(std::to_string(amount).c_str());

	return ss;
}