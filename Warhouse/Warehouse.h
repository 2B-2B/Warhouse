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


class Warehouse: public Dimentional, Plywood, Rail, Finishing
{

protected:
	//could make this a location class
	
	std::string address;
	std::string city;
	std::string province;
	std::string postalCode;

	Dimentional* dimentionalWood;
	Plywood* plywoodWood;
	Rail* railWood;
	Finishing* finishingWood;

public:
	
	//getter functions
	std::string getAddress() { return address; }
	std::string getCity() { return city; }
	std::string getProvince() { return province; }
	std::string getPostalCode() { return postalCode; }

	//setter function
	void setAddress(std::string address) { this->address = address; }
	void setCity(std::string city) { this->city = city; }
	void setProvince(std::string province) { this->province = province; }
	void setPostalCode(std::string postalCode) { this->postalCode = postalCode; }




	//convert to system string
	System::String^ getAddressSS();
	System::String^ getCitySS();
	System::String^ getProvinceSS();
	System::String^ getPostalCodeSS();
	
	
	
	//this is to print the full address as a string
	std::string print();
	//this is to print the full address as a system string
	System::String^ printSS();


	//default constructers
	Warehouse() { postalCode = city = province = address = "n/a"; }

	//non-default constructer - standard string
	//address, province, postalCode
	Warehouse(std::string address, std::string city, std::string province, std::string postalCode);

	//overloaded constructer - system string
	Warehouse(System::String^ address, System::String^ city, System::String^ province, System::String^ postalCode);

	//non-default constructer overloaded with wood types - standard string
	//address, province, postalCode, dimentionalWood, plywoodWood, railWood, finishingWood
	Warehouse(std::string address, std::string city, std::string province, std::string postalCode, Dimentional& dimentionalWood, Plywood& plywoodWood, Rail& railWood, Finishing& finishingWood);

	Warehouse(std::string address, std::string city, std::string province, std::string postalCode, Dimentional& dimentionalWood);

	
	void setDimentionalWood(Dimentional& dimentionalWood);
	void setPlywoodWood(Plywood& plywoodWood);
	void setRailWood(Rail& railWood);
	void setFinishingWood(Finishing& finishingWood);

	std::string printDimentionalWood(int numberOfTypes);
	std::string printPlywoodWood(int numberOfTypes);
	std::string printRailWood(int numberOfTypes);
	std::string printFinishingWood(int numberOfTypes);

	std::string printTotalInventory(int numberOfDimensionalTypes, int numberOfPlywoodTypes, int numberOfRailTypes, int numberOfFinishingTypes);


};

