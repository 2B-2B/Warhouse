#include "Login.h"


using namespace System;
using namespace System::Windows::Forms;


// this function is not needed, we can remove it
[STAThreadAttribute]
int login(array <String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Warhouse::Login login;
    Application::Run(% login);
    return 0;
}


//non-default constructer
//gui, xPushed
Warhouse::Login::Login (int* gui, bool* xPushed, Users *currentUser)
{
	InitializeComponent();

	//assining the pointers
	thisGui = gui;
	thisXPushed = xPushed;

	//lets fill the userInfo point with the list of users
	getUserInfo();
	this->currentUser = currentUser;
}


//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
/*

the get user function is used to populate the array of users we have stored in the data base
you can make a new fucntion for the initalization of the users from the data base and 
we can comment the text file one out after we know it works.

we do need to know how many user there will be, for creating the array and for checking the array

*/
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//




//to initialize the user object
void Warhouse::Login::getUserInfo() {
	//code to place the data base info into an array object of users type

	//I dont know how we get the size of the data base but we will  need that

	//declaring the file
	std::ifstream userData;
	userData.open("userList.txt");

	// setting the array of the users;
	userCount = getNumberOfUsers(&userData);


	//~~~~~~~~~~~~~~~~~~~~~~~~~~THIS COULD BE AN ISSUE~~~~~~~~~~~~~~~~~~~~~~
	//the userList is only here if we need it for the data base
	userInfo = new Users[userCount];


	//now we populate the array
	for (int i = 0; i < userCount; i++) {
		//read each string and store into array

		//store the values temporaryly for the user
		std::unique_ptr <std::string> userName(new std::string);
		std::unique_ptr <std::string> password(new std::string);
		std::unique_ptr <std::string> clearence(new std::string);
		//store there assoicated warehouse info
		std::unique_ptr <std::string> address(new std::string);
		std::unique_ptr <std::string> province(new std::string);
		std::unique_ptr <std::string> postalCode(new std::string);

		// get the data from the file for the user
		std::getline(userData, *userName, '\t');
		std::getline(userData, *password, '\t');
		std::getline(userData, *clearence, '\t');
		//get there assoicated warehouse info 
		std::getline(userData, *address, '\t');
		std::getline(userData, *province, '\t');
		std::getline(userData, *postalCode);

		//construct the user.
		*(userInfo + i) = Users(*userName, *password, *clearence, *address, *province, *postalCode);
		//cant use the constructer to change the values of warehouse
		(userInfo + i)->setAddress(*address);
		(userInfo + i)->setProvince(*province);
		(userInfo + i)->setPostalCode(*postalCode);

	}

}


//this will read from a text file, will not be needed if we make a data base.
int Warhouse::Login::getNumberOfUsers(std::ifstream* userData) {

	int userCounter = 0;

	std::unique_ptr<std::string> temp(new std::string);
	{	//define the scope of which the temp string will die

		//this will count the amount of user we have
		while (!userData->eof()) {

			std::getline(*userData, *temp);
			userCounter++;

		}
	}

	//this will clear the end of file flag
	userData->clear();
	//this will reset the file to the beging
	userData->seekg(0, std::ios::beg);

	return userCounter;
}


//this is the listener waiting for the user to press the login button
System::Void Warhouse::Login::loginButton_Click(System::Object^ sender, System::EventArgs^ e) {

	// set the position of the array to 0
	search = 0;

	

	//search the entire array
	while (search < userCount) {

		//get the username entered by the user and check for a match in the list
		if (usernameTextBox->Text == (userInfo+search)->getUsernameSS()) {

			//check the password entred for a match in the list
			if (passwordTextBox->Text == (userInfo + search)->getPasswordSS()) {

				//check for admin rights
				if ((userInfo + search)->getClearence() == "admin") {
					*thisXPushed = false; //Tells the driver program that the gui was not closed
					*thisGui = 3; //Sets gui to open AdminConsole
					*currentUser = *(userInfo + search);//set the logged in user 
					



					this->Close(); //Closes this gui
				}
				else {
					*thisXPushed = false; //Tells the driver program that the gui was not closed
					*thisGui = 4; //Sets gui to open Display
					*currentUser = *(userInfo + search);//set the logged in user 
					currentUser->setAddress((userInfo + search)->getAddress());
					currentUser->setProvince((userInfo + search)->getProvince());
					currentUser->setPostalCode((userInfo + search)->getPostalCode());
					this->Close(); //Closes this gui
				}
			}

		}
		//change the position of the array
		search++;
	}
}
