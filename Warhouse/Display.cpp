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



//to initialize the user object
void Warhouse::Display::getWarehouseInventory() {
	//code to place the data base info into an array object of users type

	//I dont know how we get the size of the data base but we will  need that

	//declaring the file
	std::ifstream warehouseData;

	std::cout << usersWarehouse->print() << std::endl;
	warehouseData.open(usersWarehouse->print() + ".txt");

	if (!warehouseData) {
		std::cout << "error opening";
	}
	else {
		std::cout << "text opened \n";
	}

	// setting the array of the users;
	getNumberOfItems(&warehouseData);

	//create the number of objects for each type
	dimentionalWood = new Dimentional[*(numberOfItems + 1)];
	plywoodWood = new Plywood[*(numberOfItems + 2)];
	railWood = new Rail[*(numberOfItems + 3)];
	finishingWood = new Finishing[*(numberOfItems + 4)];
		
	//positions for the array of the items
	std::unique_ptr <int> dimensionalPost(new int);
	std::unique_ptr <int> plywoodPost(new int);
	std::unique_ptr <int> railPost(new int);
	std::unique_ptr <int> finishingPost(new int);
	std::unique_ptr<std::string> tempType(new std::string);

	//set to 0;
	*dimensionalPost = 0;
	*plywoodPost = 0;
	*railPost = 0;
	*finishingPost = 0;

	while (!warehouseData.eof()) {

		//read and create the objects
		for (int i = 0; i < numberOfItems[0]; i++) {
			//read the type of item it is
			std::getline(warehouseData, *tempType, ',');

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
				std::getline(warehouseData, *length, ',');
				std::getline(warehouseData, *wdith, ',');
				std::getline(warehouseData, *height, ',');
				std::getline(warehouseData, *price, ',');
				std::getline(warehouseData, *availbe);

				

				//construct the item
				*(dimentionalWood + *dimensionalPost) = Dimentional(*length, *wdith, *height, *price, *availbe);
				
				//add one to change to the next dimentionalWood
				*dimensionalPost += 1;

			}
			else if (*tempType == "plywood") {

				//store the values temporaryly for the the peice of wood
				std::unique_ptr <std::string> length(new std::string);
				std::unique_ptr <std::string> wdith(new std::string);
				std::unique_ptr <std::string> thick(new std::string);
				std::unique_ptr <std::string> price(new std::string);
				std::unique_ptr <std::string> availbe(new std::string);

				//read the values from the file
				std::getline(warehouseData, *length, ',');
				std::getline(warehouseData, *wdith, ',');
				std::getline(warehouseData, *thick, ',');
				std::getline(warehouseData, *price, ',');
				std::getline(warehouseData, *availbe);

				//construct the item
				*(plywoodWood + *plywoodPost) = Plywood(*length, *wdith, *thick, *price, *availbe);

				*plywoodPost += 1;
			}
			else if (*tempType == "rail") {

				//store the values temporaryly for the the peice of wood
				std::unique_ptr <std::string> length(new std::string);
				std::unique_ptr <std::string> wdith(new std::string);
				std::unique_ptr <std::string> material(new std::string);
				std::unique_ptr <std::string> type(new std::string);
				std::unique_ptr <std::string> price(new std::string);
				std::unique_ptr <std::string> availbe(new std::string);

				//read the values from the file
				std::getline(warehouseData, *length, ',');
				std::getline(warehouseData, *wdith, ',');
				std::getline(warehouseData, *material, ',');
				std::getline(warehouseData, *type, ',');
				std::getline(warehouseData, *price, ',');
				std::getline(warehouseData, *availbe);

				//construct the item
				*(railWood + *railPost) = Rail(*length, *wdith, *material, *type, *price, *availbe);

				*railPost += 1;
			}
			else if (*tempType == "finishing") {

				//store the values temporaryly for the the peice of wood
				std::unique_ptr <std::string> length(new std::string);
				std::unique_ptr <std::string> wdith(new std::string);
				std::unique_ptr <std::string> material(new std::string);
				std::unique_ptr <std::string> mouldType(new std::string);
				std::unique_ptr <std::string> price(new std::string);
				std::unique_ptr <std::string> availbe(new std::string);

				//read the values from the file
				std::getline(warehouseData, *length, ',');
				std::getline(warehouseData, *wdith, ',');
				std::getline(warehouseData, *material, ',');
				std::getline(warehouseData, *mouldType, ',');
				std::getline(warehouseData, *price, ',');
				std::getline(warehouseData, *availbe);

				//construct the item
				*(finishingWood + *finishingPost) = Finishing(*length, *wdith, *material, *mouldType, *price, *availbe);

				*finishingPost += 1;
			}

		}

	}

	//set the user warehouse inventory

	//std::cout << dimentionalWood->printToDisplay();

	usersWarehouse->setDimentionalWood(*dimentionalWood);
	usersWarehouse->setPlywoodWood(*plywoodWood);
	usersWarehouse->setRailWood(*railWood);
	usersWarehouse->setFinishingWood(*finishingWood);
	
	//std::cout << "leaving the inital\n";
}



//this will read from a text file, will not be needed if we make a data base.
void Warhouse::Display::getNumberOfItems(std::ifstream* warehouseData) {

	//0 total, 1 dimentional, 2 plywood, 3 rail, 4 finishing
	
	

	std::unique_ptr<std::string> tempType(new std::string);
	std::unique_ptr<std::string> temp(new std::string);
	{	//define the scope of which the temp variables string will die once left

		//this will count the amount of user we have
		while (!warehouseData->eof()) {
			
			

			//read the type of item it is
			std::getline(*warehouseData, *tempType, ',');
			//std::cout << *tempType << std::endl;

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
			//count the amount of items
			numberOfItems[0]++;
				
		}
		std::cout << numberOfItems[0] << '\n';

		std::cout << "number of items: " << *(numberOfItems + 0) << ", " << *(numberOfItems + 1) << ", " << *(numberOfItems + 2) << ", " << *(numberOfItems + 3) << ", " << *(numberOfItems + 4) << std::endl;

		//this will clear the end of file flag
		warehouseData->clear();
		//this will reset the file to the beging
		warehouseData->seekg(0, std::ios::beg);
	}

}












