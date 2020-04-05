#include "Users.h"

#include <iostream>
#include <fstream>
#include <string>


//return the string as a system string
System::String^ Users::getUsernameSS() {

	System::String^ ss = gcnew System::String(username.c_str());
	return ss;
}

//return the string as a system string
System::String^ Users::getPasswordSS() {

	System::String^ ss = gcnew System::String(password.c_str());
	return ss;
}

//return the string as a system string
System::String^ Users::getClearenceSS() {

	System::String^ ss = gcnew System::String(clearence.c_str());
	return ss;
}



//non-default constructer
//username, password, clearence
Users::Users(std::string username, std::string password, std::string clearence) {

	this->username = username;
	this->password = password;
	this->clearence = clearence;
	
}

//overloaded constructer
//username, password, clearence
Users::Users(System::String^ username, System::String^ password, System::String^ clearence) {

	//will convert from system string to std string
	this->username = msclr::interop::marshal_as<std::string>(username);
	this->password = msclr::interop::marshal_as<std::string>(password);
	this->clearence = msclr::interop::marshal_as<std::string>(clearence);
	
}


//non-deault constructer
Users::Users(std::string username, std::string password, std::string clearence, std::string address, std::string province, std::string postalCode) :Warehouse(address, province, postalCode) {

	//std::cout << "~~~~~~~~~~~~~~\n" << address << '\t' << province << '\t' << postalCode << std::endl;
//	this->address = address;
//	this->province = province;
//	this->postalCode = postalCode;

	//std::cout << this->address << '\t' << this->province << '\t' << this->postalCode << std::endl;
	//std::cout << this->getAddress() << '\t' << this->getProvince() << '\t' << this->getPostalCode() << std::endl;

	this->username = username;
	this->password = password;
	this->clearence = clearence;

	//std::cout << Warehouse::getAddress() << std::endl;

}


//non-deault constructer
Users::Users(System::String^ username, System::String^ password, System::String^ clearence, System::String^ address, System::String^ province, System::String^ postalCode):Warehouse(address,province,postalCode) {

	//will convert from system string to std string
	this->username = msclr::interop::marshal_as<std::string>(username);
	this->password = msclr::interop::marshal_as<std::string>(password);
	this->clearence = msclr::interop::marshal_as<std::string>(clearence);


}

//overloaded assignment oporator
const Users Users::operator = (Users& obj) {

	this->username = obj.username;
	this->password = obj.password;
	this->clearence = obj.clearence;

	return *this;

}

