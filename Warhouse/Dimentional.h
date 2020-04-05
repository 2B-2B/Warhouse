#ifndef DIMENTIONAL_H
#define DIMENTIONAL_H

#include "Wood.h"
#include <string>
#include <iostream>

/*
This is a child class of "Wood"
Dimentional Lumber is a type of wood that is included in the lumberyard
*/

class Dimentional:public Wood
{
private:
	//variable decelartion
	double length, width, height;
	
	//not needed
	//std::string volume;

public:
	//contructor
	Dimentional();	//default contructor
	Dimentional(double, double, double, double, int); //contructor (length, width, height, price, available)
	Dimentional(double, double, double, double, int, int); //contructor (length, width, height, price, amount, available)
	
	Dimentional(std::string length, std::string width, std::string height, std::string price, std::string available); //contructor (length, width, height, price, available)

	//copy construter
	Dimentional(Dimentional& dimentionalWood);


	//mutators
	void setLength(double l) { length = l; }
	void setWidth(double w) { width = 2; }
	void setHeight(double h) { height = h; }
	
	//accessors
	double getLength() const { return length; }
	double getWideth() const { return width; }
	double getHeight() const { return height; }
	

	
	//print the dimensions as a standrad string
	std::string printDimensions();	//this function combines all dimentions and outputs as a string

	//print the dimensions as a system string 
	System::String^ getDimentionSS();


	//assingmen operator

	//Dimentional operator = (Dimentional&);


};

#endif

