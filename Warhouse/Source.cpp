
//GUI classes
#include "AddUser.h"
#include "AddWarehouse.h"
#include "AdminConsole.h"
#include "Display.h"
#include "Login.h"
#include "ManageUsers.h"
#include "ManageWarehouses.h"
#include "Order.h"
#include "Ship.h"

//Driver classes
#include "Users.h"

//Standar libs.
#include <iostream>
#include <string>
#include <fstream>
#include <memory>





using namespace System;
using namespace System::Windows::Forms;



int main() {
	//Variables declarations
	int gui = 5; //Used to select which gui block is run NOTE: Defaults to login gui
	bool close = false; //Flag for ending the program when the gui is closed
	bool xPushed = true; //Flag for closing the gui via the x button (This is done incase of a need for additional logic on close)
	bool isGeneral = true;

	//this will store the user that is logged in
	Users currentUser;
	
	//Constantly Opens and deletes guis while the program is runing
	while (!close)
	{
		//If else block selects the 
		if (gui == 0) //Closes the program
		{
			close = true;
			//
			//TODO: Add any required closing logic
			//
		}
		else if (gui == 1){ //Run the AddUser gui
		
			Warhouse::AddUser^ addUser = gcnew Warhouse::AddUser(&gui, &xPushed); //Creates an intance of the AddUser gui
			Application::Run(addUser); //Runs the instance of the AddUser gui NOTE: this pauses the thread untill the gui is closed
			(xPushed) ? close = true : xPushed = true; //After the gui is closed checks if the program should exit
			delete addUser; //Deleats the intance of the AddUser gui
		}
		else if (gui == 2) { //Runs the AddWarehouse gui
			Warhouse::AddWarehouse^ addWarehouse = gcnew Warhouse::AddWarehouse(&gui, &xPushed); //Creates an intance of the AddWarehouse gui
			Application::Run(addWarehouse); //Runs the instance of the AddWarehouse gui NOTE: this pauses the thread untill the gui is closed
			(xPushed) ? close = true : xPushed = true; //After the gui is closed checks if the program should exit
			delete addWarehouse; //Deleats the intance of the AddWarehouse gui
		}
		else if (gui == 3) { //Runs the AdminConsole gui

			

			Warhouse::AdminConsole^ adminConsole = gcnew Warhouse::AdminConsole(&gui, &xPushed); //Creates an intance of the AdminConsole gui
			Application::Run(adminConsole); //Runs the instance of the AdminConsole gui NOTE: this pauses the thread untill the gui is closed
			(xPushed) ? close = true : xPushed = true; //After the gui is closed checks if the program should exit
			delete adminConsole; //Deleats the intance of the AdminConsole gui
		}
		else if (gui == 4) { //Runs the Display gui


			//std::cout << currentUser.getUsername() << std::endl;

			Warhouse::Display^ display = gcnew Warhouse::Display(&gui, &xPushed, &isGeneral, &currentUser); //Creates an intance of the Display gui
			Application::Run(display); //Runs the instance of the Display gui NOTE: this pauses the thread untill the gui is closed
			(xPushed) ? close = true : xPushed = true; //After the gui is closed checks if the program should exit
			delete  display; //Deleats the intance of the Display gui
		}
		else if (gui == 5) { //Runs the Login gui

			

			//constructer the login display
			Warhouse::Login^ login = gcnew Warhouse::Login(&gui, &xPushed, &currentUser);

			Application::Run(login); //Runs the instance of the Login gui NOTE: this pauses the thread untill the gui is closed
			(xPushed) ? close = true : xPushed = true; //After the gui is closed checks if the program should exit
			delete  login; //Deleats the intance of the Login gui

			//if the logged in user is admin rember that.
			if (gui == 3) {
				isGeneral = false;
			}


		}
		else if (gui == 6) { //Runs the ManageUsers gui
			Warhouse::ManageUsers^ manageUsers = gcnew Warhouse::ManageUsers(&gui, &xPushed); //Creates an intance of the ManageUsers gui
			Application::Run(manageUsers); //Runs the instance of the ManageUsers gui NOTE: this pauses the thread untill the gui is closed
			(xPushed) ? close = true : xPushed = true; //After the gui is closed checks if the program should exit
			delete  manageUsers; //Deleats the intance of the ManageUsers gui
		}
		else if (gui == 7) { //Runs the ManageWarehouses gui
			Warhouse::ManageWarehouses^ manageWarehouses = gcnew Warhouse::ManageWarehouses(&gui, &xPushed); //Creates an intance of the ManageWarehouses gui
			Application::Run(manageWarehouses); //Runs the instance of the ManageWarehouses gui NOTE: this pauses the thread untill the gui is closed
			(xPushed) ? close = true : xPushed = true; //After the gui is closed checks if the program should exit
			delete manageWarehouses; //Deleats the intance of the ManageWarehouses gui
		}
		else if (gui == 8) { //Runs the Order gui
			Warhouse::Order^ order = gcnew Warhouse::Order(&gui, &xPushed); //Creates an intance of the Order gui
			Application::Run(order); //Runs the instance of the Order gui NOTE: this pauses the thread untill the gui is closed
			(xPushed) ? close = true : xPushed = true; //After the gui is closed checks if the program should exit
			delete order; //Deleats the intance of the Order gui
		}
		else if (gui == 9) { //Runs the Ship gui
			Warhouse::Ship^ ship = gcnew Warhouse::Ship(&gui, &xPushed); //Creates an intance of the Ship gui
			Application::Run(ship); //Runs the instance of the Ship gui NOTE: this pauses the thread untill the gui is closed
			(xPushed) ? close = true : xPushed = true; //After the gui is closed checks if the program should exit
			delete ship; //Deleats the intance of the Ship gui
		}
	}
}











