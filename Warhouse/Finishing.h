#ifndef FINISHING_H
#define FINISHING_H

#include "Wood.h"
#include <string>
#include <iostream>

/*
This is a child class of "Wood" 
Finishing is a type of wood offered in our LumberYard
*/

class Finishing :public Wood
{
private:
	//variable deceleration
	double length,height;
	std::string mouldType, material;

public:
	//contructor
	Finishing();	//default constructor
	Finishing(double, double, std::string, std::string, double, int, int); //contructor (lenght, height, material, mouldType, price, amount, available)

	//non-default overloaded constructer
	//length, height, material, type, price, available - strings
	Finishing(std::string length, std::string height, std::string material, std::string mouldType, std::string price, std::string available);
	
	//copy construter
	Finishing(Finishing& finishingWood);

	//mutators
	void setLength(double length) { this->length = length; }
	void setThick(double height) { this->height = height; }
	
	//accessors
	double getLength() const{ return this->length; }
	double getThick() const{ return this->height; }

	//additional functions
	std::string printToFile();	//this function combines all dimentions and outputs it as a string
	System::String^ printToDisplay();

	//System::String^ getDimentionSS();

};

#endif
