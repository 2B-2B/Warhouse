#ifndef RAIL_H
#define RAIL_H

#include "Wood.h"
#include <string>
#include <iostream>
#include <msclr/marshal_cppstd.h>
/*
This is a child class of "Wood".
Railings are one of the types of wood avaiable in our lumberyard. 
*/

class Rail :public Wood
{

private:
	//variable deceleration
	double length, height;	
	std::string type, material;

public:
	//contructor 
	Rail();		//default contructor
	Rail(double, double, std::string, std::string, double, int, int);	//contructor (length, height, material, type, price, amount, available)

	//non-default overloaded constructer
	//length, height, material, type, price, available - strings
	Rail(std::string length, std::string height, std::string material, std::string type, std::string price, std::string available);

	//copy construter
	Rail(Rail& railWood);

	//mutators
	void setLength(double length) { this->length = length; }
	void setThick(double height) { this->height = height; }
	
	//Accessor
	double getLength() const { return this->length; }
	double getThick() const { return this->height; }

	//additional functions
	std::string printToFile(); //this function combines all values and dimentions into a string to output
	System::String^ printToDisplay();

	//System::String^ getDimentionSS();

};


#endif
