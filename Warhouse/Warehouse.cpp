#include "Warehouse.h"



//return the string as a system string
System::String^ Warehouse::getAddressSS() {

	System::String^ ss = gcnew System::String(address.c_str());
	return ss;
}

//return the string as a system string
System::String^ Warehouse::getCitySS() {

	System::String^ ss = gcnew System::String(city.c_str());
	return ss;
}

//return the string as a system string
System::String^ Warehouse::getProvinceSS() {

	System::String^ ss = gcnew System::String(province.c_str());
	return ss;
}

//return the string as a system string
System::String^ Warehouse::getPostalCodeSS() {
	
	System::String^ ss = gcnew System::String(postalCode.c_str());
	return ss;
}

//return the entire warehouse info
std::string Warehouse::print() {

	return address + ","+city + "," + province + "," + postalCode;
}


System::String^ Warehouse::printSS() {

	System::String^ ss = gcnew System::String(print().c_str());
	return ss;
}




//non-default constructer
//address, province, postalcode
Warehouse::Warehouse(std::string address, std::string city, std::string province, std::string postalCode) {

	this->address = address;
	this->city = city;
	this->province = province;
	this->postalCode = postalCode;
	
	

}

//overloaded constructer
//address, province, postalcode
Warehouse::Warehouse(System::String^ address, System::String^ city, System::String^ province, System::String^ postalCode) {

	//will convert from system string to std string
	this->address = msclr::interop::marshal_as<std::string>(address);
	this->city = msclr::interop::marshal_as<std::string>(city);
	this->province = msclr::interop::marshal_as<std::string>(province);
	this->postalCode = msclr::interop::marshal_as<std::string>(postalCode);
	
}

//non-default constructer overloaded with wood types - standard string
//address, province, postalCode, dimentionalWood, plywoodWood, railWood, finishingWood
Warehouse::Warehouse(std::string address, std::string city, std::string province, std::string postalCode, Dimentional& dimentionalWood, Plywood& plywoodWood, Rail& railWood, Finishing& finishingWood) {

	this->address = address;
	this->city = city;
	this->province = province;
	this->postalCode = postalCode;
	this->dimentionalWood = &dimentionalWood;
	this->plywoodWood = &plywoodWood;
	this->railWood = &railWood;
	this->finishingWood = &finishingWood;

}

Warehouse::Warehouse(std::string address, std::string city, std::string province, std::string postalCode, Dimentional& dimentionalWood) {

	this->address = address;
	this->city = city;
	this->province = province;
	this->postalCode = postalCode;
	this->dimentionalWood = &dimentionalWood;

}


//set the dimentionalwoof of the warehouse;
void Warehouse::setDimentionalWood(Dimentional& dimentionalWood) {

	this->dimentionalWood = &dimentionalWood;

}

//set the dimentionalwoof of the warehouse;
void Warehouse::setPlywoodWood(Plywood& plywoodWood) {

	this->plywoodWood = &plywoodWood;

}

//set the dimentionalwoof of the warehouse;
void Warehouse::setRailWood(Rail& railWood) {

	this->railWood = &railWood;

}

//set the dimentionalwoof of the warehouse;
void Warehouse::setFinishingWood(Finishing& finishingWood) {

	this->finishingWood = &finishingWood;

}

//print all the dimentional values stored
std::string Warehouse::printDimentionalWood(int numberOfTypes) {



}

//print all the playwood values stored
std::string Warehouse::printPlywoodWood(int numberOfTypes) {



}

//print all the rail values stored
std::string Warehouse::printRailWood(int numberOfTypes) {

	std::string allRailsString;

	for (int i = 0; i < numberOfTypes; i++) {
		
	}


}

//print all the finishing values stored
std::string Warehouse::printFinishingWood(int numberOfTypes){


}

//print all the items stored
std::string Warehouse::printTotalInventory(int numberOfDimensionalTypes, int numberOfPlywoodTypes, int numberOfRailTypes, int numberOfFinishingTypes) {

	return printDimentionalWood(numberOfDimensionalTypes) + printPlywoodWood(numberOfPlywoodTypes) + printRailWood(numberOfRailTypes) + printFinishingWood(numberOfFinishingTypes);
}