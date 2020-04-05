#ifndef PLYWOOD_H
#define PLYWOOD_H

#include "Wood.h"
#include <string>
#include <iostream>

/*
this is a child class of "Wood"
Plywood is a type of wood offered in our lumber yard
*/

class Plywood :public Wood
{
private:
	//variable deceleration
	double length, width, thick;

	//not needed
	//std::string volume;

public:
	//contructor
	Plywood();	//default constructor
	Plywood(double, double, double, double, int, int); //constructor (length, width, thick, price, amount, avaiable)
	Plywood(std::string length, std::string width, std::string thick, std::string price, std::string available); //constructor (length, width, thick, price, amount, available)



	//mutators
	void setLength(double length) { this->length = length; }
	void setWidth(double width) { this->width = width; }
	void setThick(double thick) { this->thick = thick; }
	
	//accessors
	double getLength() const{ return this->length; }
	double getWideth() const{ return this->width; }
	double getThick() const{ return this->thick; }
	

	//additional functions
	std::string dimentionCombination();	//this function combines all dimentions and outputs it as a string

	System::String^ getDimentionSS();
};

#endif
