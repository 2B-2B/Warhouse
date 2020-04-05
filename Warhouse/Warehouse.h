#pragma once

#include <iostream>
#include <string>

//here are the objects of a warehouse, need to be inherritted
#include "Dimentional.h"
#include "Plywood.h"
#include "Rail.h"
#include "Finishing.h"

//this is to convert system string to std string
#include <msclr\marshal_cppstd.h>


class Warehouse : public Dimentional, Plywood, Rail, Finishing
{

protected:
	//could make this a location class
	std::string postalCode;
	std::string province;
	std::string address;
	Dimentional* dimentionalWood;
	Plywood* plywoodWood;
	Rail* railWood;
	Finishing* finishingWood;

public:

	//getter functions
	std::string getPostalCode() { return postalCode; }
	std::string getProvince() { return province; }
	std::string getAddress() { return address; }

	//setter function
	void setPostalCode(std::string postalCode) { this->postalCode = postalCode; }
	void setProvince(std::string province) { this->province = province; }
	void setAddress(std::string address) { this->address = address; }






	//convert to system string
	System::String^ getPostalCodeSS();
	System::String^ getProvinceSS();
	System::String^ getAddressSS();

	//this is to print the full address as a string
	std::string print();
	//this is to print the full address as a system string
	System::String^ printSS();


	//default constructers
	Warehouse() { postalCode = province = address = "n/a"; }

	//non-default constructer - standard string
	//address, province, postalCode
	Warehouse(std::string address, std::string province, std::string postalCode);

	//overloaded constructer - system string
	Warehouse(System::String^ address, System::String^ province, System::String^ postalCode);

	//non-default constructer overloaded with wood types - standard string
	//address, province, postalCode, dimentionalWood, plywoodWood, railWood, finishingWood
	Warehouse(std::string address, std::string province, std::string postalCode, Dimentional& dimentionalWood, Plywood& plywoodWood, Rail& railWood, Finishing& finishingWood);

	Warehouse(std::string address, std::string province, std::string postalCode, Dimentional& dimentionalWood);


	//construters for its objects
	//standard string
	//Warehouse(std::string address, std::string province, std::string postalCode, Dimentional dimentionalWood);
	//system string
	//Warehouse(System::String^ address, System::String^ province, System::String^ postalCode, Dimentional dimentionalWood);




	void setDimentionalWood(Dimentional& dimentionalWood);

};

