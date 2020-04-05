#include "Display.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
//this is not needed
int display(array <String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Warhouse::Display display;
    Application::Run(% display);
    return 0;
}


/*
//to initialize the user object
void Warhouse::Display::getWarehouseInventory() {
	//code to place the data base info into an array object of users type

	//I dont know how we get the size of the data base but we will  need that

	//declaring the file
	std::ifstream warehouseData;
	warehouseData.open("WarehouseInventory.txt");

	// setting the array of the users;
	getNumberOfItems(&warehouseData);


	//~~~~~~~~~~~~~~~~~~~~~~~~~~THIS COULD BE AN ISSUE~~~~~~~~~~~~~~~~~~~~~~
	//the userList is only here if we need it for the data base

	
	
	std::cout << "number of items: " << *(numberOfItems + 0) << ", " << *(numberOfItems + 1) << ", " << *(numberOfItems + 2) << ", " << *(numberOfItems + 3) << ", " << *(numberOfItems + 4) << std::endl;

	
	if (*(numberOfItems + 1) != 0) {
		dimentionalWood = new Dimentional[*(numberOfItems + 1)];
	}
	else {
		dimentionalWood = new Dimentional[1];
	}
	
	
	
	if (*(numberOfItems + 2) != 0) {
		plywoodWood = new Plywood[*(numberOfItems + 2)];
	}
	else {
		plywoodWood = new Plywood[1];
		
	}

	

	if (*(numberOfItems + 3) != 0) {
		railWood = new Rail[*(numberOfItems + 3)];
	}
	else {
		railWood = new Rail[1];
	}

	if (*(numberOfItems + 4) != 0) {
		finishingWood = new Finishing[*(numberOfItems + 4)];
	}
	else {
		finishingWood = new Finishing[1];
	}
	
	
	
	

	




	//temporary pointers for the warehouse
	std::unique_ptr<std::string> tempWarehouse(new std::string);
	std::unique_ptr<std::string> warehouseAddress(new std::string);
	std::unique_ptr<std::string> warehouseProvince(new std::string);
	std::unique_ptr<std::string> warehousePostalCode(new std::string);
	std::unique_ptr<std::string> tempType(new std::string);
	std::unique_ptr<std::string> temp(new std::string);
	{
		do {

			//check to see if this is the warehouse we want
			std::getline(warehouseData, *tempType, '\t');

			//if its not the address we are looking for read the rest of the line
			if (*tempType != usersWarehouse->getAddress()) {
				std::getline(warehouseData, *temp, '\n');
			}

			//if the type is no longer a proper type then it must be a new warehouse
		} while (*tempType != usersWarehouse->getAddress() && !warehouseData.eof());

		//read in the values from the 
		//std::getline(*warehouseData, *temp, '\t');
		*warehouseAddress = *tempType;
		std::getline(warehouseData, *warehouseProvince, '\t');
		std::getline(warehouseData, *warehousePostalCode, '\n');

		//set the warehouse to be checked in the if
		*tempWarehouse = *warehouseAddress + ", " + *warehouseProvince + ", " + *warehousePostalCode;


		//making sure we have the correct warehouse
		if (*tempWarehouse == usersWarehouse->print()) {

			std::cout << "warehouse Found & setting values\n";

			//positions for the array of the items
			std::unique_ptr <int> dimensionalPost(new int);
			std::unique_ptr <int> plywoodPost(new int);
			std::unique_ptr <int> railPost(new int);
			std::unique_ptr <int> finishingPost(new int);
			
			//set to 0;
			*dimensionalPost = 0;
			*plywoodPost = 0;
			*railPost = 0;
			*finishingPost = 0;


			//read and create the objects
			for (int i = 0; i < numberOfItems[0]; i++) {

				//read the type of item it is
				std::getline(warehouseData, *tempType, '\t');

				//create the proper object base on the item type
				//dementional wood
				if (*tempType == "dimentional") {

					//store the values temporaryly for the the peice of wood
					std::unique_ptr <std::string> length(new std::string);
					std::unique_ptr <std::string> wdith(new std::string);
					std::unique_ptr <std::string> height(new std::string);
					std::unique_ptr <std::string> price(new std::string);
					std::unique_ptr <std::string> availbe(new std::string);

					//read the values from the file
					std::getline(warehouseData, *length, '\t');
					std::getline(warehouseData, *wdith, '\t');
					std::getline(warehouseData, *height, '\t');
					std::getline(warehouseData, *price, '\t');
					std::getline(warehouseData, *availbe, '\t');


					//construct the item
					*(dimentionalWood + *dimensionalPost) = Dimentional(*length, *wdith, *height, *price, *availbe);


				}
				else if (*tempType == "plywood") {


					std::cout << "error";



				}
				else if (*tempType == "rail") {


					std::cout << "error";


				}
				else if (*tempType == "finishing") {


					std::cout << "error";



				}

				//if the type is no longer a proper type then it must be a new warehouse
			} while (*tempType == "dimentional" || *tempType == "plywood" || *tempType == "rail" || *tempType == "finishing");

			*usersWarehouse = Warehouse(*warehouseAddress, *warehouseProvince, *warehousePostalCode, *dimentionalWood);
			std::cout << "warehouse has been Set \n";
		}



		//*usersWarehouse = Warehouse(*warehouseAddress, *warehouseProvince, *warehousePostalCode, *dimentionalWood, *plywoodWood, *railWood, *finishingWood);




	}

	std::cout << "leaving the inital\n";

	//std::cout << userInfo[0].getAddress() << std::endl;

}
*/

/*
//this will read from a text file, will not be needed if we make a data base.
void Warhouse::Display::getNumberOfItems(std::ifstream* warehouseData) {

	//0 total, 1 dimentional, 2 plywood, 3 rail, 4 finishing
	numberOfItems = new int[5]{ 0,0,0,0,0};
	

	std::unique_ptr<std::string> tempWarehouse(new std::string);
	std::unique_ptr<std::string> tempType(new std::string);
	std::unique_ptr<std::string> temp(new std::string);
	{	//define the scope of which the temp variables string will die once left

		//this will count the amount of user we have
		while (!warehouseData->eof()) {
			
			// read all values that are not a warehouse 
			do {
			
				//read the type of item it is
				std::getline(*warehouseData, *tempType, '\t');

				//if its an item type read the reminder of the line
				if (*tempType != usersWarehouse->getAddress()) {
					std::getline(*warehouseData, *temp, '\n');
				}

				//if the type is no longer a proper type then it must be a new warehouse
			} while (*tempType != usersWarehouse->getAddress() && !warehouseData->eof());
			
			//read in the values from the 
			//std::getline(*warehouseData, *temp, '\t');
			*tempWarehouse = *tempType;
			std::getline(*warehouseData, *temp, '\t');
			*tempWarehouse += ", " + *temp;
			std::getline(*warehouseData, *temp, '\n');
			*tempWarehouse += ", " + *temp;


			std::cout <<"Value read: " << *tempWarehouse << std::endl;
			std::cout << "target val: " << usersWarehouse->print() << std::endl;

			if (*tempWarehouse == usersWarehouse->print()) {

				std::cout << "warehouse Found\n";

				do {
					//count the amount of items
					numberOfItems[0]++;
					//read the type of item it is
					std::getline(*warehouseData, *tempType, '\t');
					//read the item itself
					std::getline(*warehouseData, *temp, '\n');

					if (*tempType == "dimentional") {
						numberOfItems[1]++;
					}
					else if(*tempType == "plywood") {
						numberOfItems[2]++;
					}
					else if (*tempType == "rail") {
						numberOfItems[3]++;
					}
					else if (*tempType == "finishing") {
						numberOfItems[4]++;
					}
						
					//if the type is no longer a proper type then it must be a new warehouse
				} while (*tempType == "dimentional" || *tempType == "plywood" || *tempType == "rail" || *tempType == "finishing");

				numberOfItems[0]--;
				std::cout << numberOfItems[0] << '\n';

				std::cout << "number of items: " << *(numberOfItems + 0) << ", " << *(numberOfItems + 1) << ", " << *(numberOfItems + 2) << ", " << *(numberOfItems + 3) << ", " << *(numberOfItems + 4) << std::endl;
				


			}
			
		}

		//this will clear the end of file flag
		warehouseData->clear();
		//this will reset the file to the beging
		warehouseData->seekg(0, std::ios::beg);
	}

}

*/










