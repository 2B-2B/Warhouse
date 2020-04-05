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

//overloaded construter, with a dimentional wood & standard string
//Warehouse::Warehouse(std::string address, std::string province, std::string postalCode, Dimentional dimentionalWood):Dimentional(dimentionalWood) {

//	*this = Warehouse(address, province, postalCode);

//}

//overloaded construter, with a dimentional wood & system string
//Warehouse::Warehouse(System::String^ address, System::String^ province, System::String^ postalCode, Dimentional dimentionalWood) :Dimentional(dimentionalWood) {

//	*this = Warehouse(address, province, postalCode);

//}


//set the dimentionalwoof of the warehouse;
void Warehouse::setDimentionalWood(Dimentional& dimentionalWood) {

	this->dimentionalWood = &dimentionalWood;

}