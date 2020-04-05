#pragma once

#include <iostream>
#include <string>
#include "Warehouse.h"

//this is to convert system string to std string
#include <msclr\marshal_cppstd.h>

class Users:public Warehouse
{

private:

	//variable declaration
	std::string username;
	std::string password;
	std::string clearence;
	

public:

	//getter functions - for checking the user in the login screen
	std::string getUsername() const { return username; }
	std::string getPassword() const { return password; }
	std::string getClearence() const { return clearence; }
	

	//setter functions
	void setUsername(std::string username) { this->username = username; }
	void setPassword(std::string password) { this->password = password; }
	void setClearence(std::string clearence) { this->clearence = clearence; }
	

	//get the system string
	System::String^ getUsernameSS();
	System::String^ getPasswordSS();
	System::String^ getClearenceSS();

	//default constructer
	Users() { username = password = clearence = "n/d";}

	//non-deault constructer
	Users(std::string username, std::string password, std::string clearence);

	//overloaded constructer
	Users(System::String^ username, System::String^ password, System::String^ clearence);

	//non-deault constructer
	Users(std::string username, std::string password, std::string clearence, std::string address, std::string city, std::string province, std::string postalCode);

	//non-deault constructer
	Users(System::String^ username, System::String^ password, System::String^ clearence, System::String^ address, System::String^ city, System::String^ province, System::String^ postalCode);



	//overloaded stream function
	const Users operator = (Users&);


};

