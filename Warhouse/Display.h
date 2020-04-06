#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include "Warehouse.h"
#include "Users.h"



namespace Warhouse {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Display
	/// </summary>
	public ref class Display : public System::Windows::Forms::Form
	{
	private:

		//Variable declaration
		int* thisGui = nullptr;
		bool* thisXPushed = nullptr;
		bool* isGeneral = nullptr;
		
		//the current logged in user
		Users* currentUser;

		//the warehous of the currently logged in user
		Warehouse* usersWarehouse;
		Warehouse* currentWarehouse;
		Dimentional* dimentionalWood;
		Plywood* plywoodWood;
		Rail* railWood;
		Finishing* finishingWood;

		int* numberOfItems;


	public:
		Display(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		//non default constructer
		Display(int* gui, bool* xPushed, bool* isGeneral, Users* currentUser, Warehouse* currentWarehouse, int* numberOfItems) {
			
			InitializeComponent();

			//setting everuthing up
			thisGui = gui;
			thisXPushed = xPushed;
			this->isGeneral = isGeneral;

			//seeting the current user
			this->currentUser = currentUser;
			//create the warehouse object
			this->currentWarehouse = currentWarehouse;
			this->numberOfItems = numberOfItems;


			//create the warehouse object
			//usersWarehouse = new Warehouse(currentUser->getAddress(), currentUser->getCity(), currentUser->getProvince(), currentUser->getPostalCode());

		}
		

		//this is get the inventory of the warehouse
		void getWarehouseInventory();
		void getNumberOfItems(std::ifstream* userData);


	protected:
		
		//destructer
		~Display()
		{
			if (components)
			{


				delete components;
				delete usersWarehouse;
				delete dimentionalWood;
				delete plywoodWood;
				delete railWood;
				delete finishingWood;

			}
		}
	private: System::Windows::Forms::Label^ ityDisplayLabel;
	protected:

	protected:

		//declaring the object displayed on the screen
	private: System::Windows::Forms::Label^ ostalCodeDisplayLabel;
	private: System::Windows::Forms::Label^ provinceDisplayLAbel;
	private: System::Windows::Forms::Label^ addresDisplayLabel;
	private: System::Windows::Forms::ListBox^ itemDisplayListBox;
	private: System::Windows::Forms::Button^ shipButton;
	private: System::Windows::Forms::Button^ orderButton;
	private: System::Windows::Forms::Button^ backButton;
	protected:




	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code

		//this function is needed to display the object on the screen
		void InitializeComponent(void)
		{
			this->ityDisplayLabel = (gcnew System::Windows::Forms::Label());
			this->ostalCodeDisplayLabel = (gcnew System::Windows::Forms::Label());
			this->provinceDisplayLAbel = (gcnew System::Windows::Forms::Label());
			this->addresDisplayLabel = (gcnew System::Windows::Forms::Label());
			this->itemDisplayListBox = (gcnew System::Windows::Forms::ListBox());
			this->shipButton = (gcnew System::Windows::Forms::Button());
			this->orderButton = (gcnew System::Windows::Forms::Button());
			this->backButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// ityDisplayLabel
			// 
			this->ityDisplayLabel->AutoSize = true;
			this->ityDisplayLabel->Location = System::Drawing::Point(12, 72);
			this->ityDisplayLabel->Name = L"ityDisplayLabel";
			this->ityDisplayLabel->Size = System::Drawing::Size(35, 20);
			this->ityDisplayLabel->TabIndex = 0;
			this->ityDisplayLabel->Text = L"City";
			// 
			// ostalCodeDisplayLabel
			// 
			this->ostalCodeDisplayLabel->AutoSize = true;
			this->ostalCodeDisplayLabel->Location = System::Drawing::Point(12, 108);
			this->ostalCodeDisplayLabel->Name = L"ostalCodeDisplayLabel";
			this->ostalCodeDisplayLabel->Size = System::Drawing::Size(95, 20);
			this->ostalCodeDisplayLabel->TabIndex = 1;
			this->ostalCodeDisplayLabel->Text = L"Postal Code";
			// 
			// provinceDisplayLAbel
			// 
			this->provinceDisplayLAbel->AutoSize = true;
			this->provinceDisplayLAbel->Location = System::Drawing::Point(12, 42);
			this->provinceDisplayLAbel->Name = L"provinceDisplayLAbel";
			this->provinceDisplayLAbel->Size = System::Drawing::Size(69, 20);
			this->provinceDisplayLAbel->TabIndex = 2;
			this->provinceDisplayLAbel->Text = L"Province";
			// 
			// addresDisplayLabel
			// 
			this->addresDisplayLabel->AutoSize = true;
			this->addresDisplayLabel->Location = System::Drawing::Point(12, 9);
			this->addresDisplayLabel->Name = L"addresDisplayLabel";
			this->addresDisplayLabel->Size = System::Drawing::Size(60, 20);
			this->addresDisplayLabel->TabIndex = 3;
			this->addresDisplayLabel->Text = L"Addres";
			// 
			// itemDisplayListBox
			// 
			this->itemDisplayListBox->FormattingEnabled = true;
			this->itemDisplayListBox->HorizontalScrollbar = true;
			this->itemDisplayListBox->ItemHeight = 20;
			this->itemDisplayListBox->Location = System::Drawing::Point(220, 12);
			this->itemDisplayListBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->itemDisplayListBox->Name = L"itemDisplayListBox";
			this->itemDisplayListBox->ScrollAlwaysVisible = true;
			this->itemDisplayListBox->Size = System::Drawing::Size(1280, 624);
			this->itemDisplayListBox->TabIndex = 4;
			// 
			// shipButton
			// 
			this->shipButton->Location = System::Drawing::Point(12, 285);
			this->shipButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->shipButton->Name = L"shipButton";
			this->shipButton->Size = System::Drawing::Size(124, 62);
			this->shipButton->TabIndex = 5;
			this->shipButton->Text = L"Ship";
			this->shipButton->UseVisualStyleBackColor = true;
			this->shipButton->Click += gcnew System::EventHandler(this, &Display::shipButton_Click);
			// 
			// orderButton
			// 
			this->orderButton->Location = System::Drawing::Point(12, 182);
			this->orderButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->orderButton->Name = L"orderButton";
			this->orderButton->Size = System::Drawing::Size(124, 62);
			this->orderButton->TabIndex = 6;
			this->orderButton->Text = L"Order";
			this->orderButton->UseVisualStyleBackColor = true;
			this->orderButton->Click += gcnew System::EventHandler(this, &Display::orderButton_Click);
			// 
			// backButton
			// 
			this->backButton->Location = System::Drawing::Point(12, 570);
			this->backButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->backButton->Name = L"backButton";
			this->backButton->Size = System::Drawing::Size(128, 62);
			this->backButton->TabIndex = 7;
			this->backButton->Text = L"Back";
			this->backButton->UseVisualStyleBackColor = true;
			this->backButton->Click += gcnew System::EventHandler(this, &Display::backButton_Click);
			// 
			// Display
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1699, 644);
			this->Controls->Add(this->backButton);
			this->Controls->Add(this->orderButton);
			this->Controls->Add(this->shipButton);
			this->Controls->Add(this->itemDisplayListBox);
			this->Controls->Add(this->addresDisplayLabel);
			this->Controls->Add(this->provinceDisplayLAbel);
			this->Controls->Add(this->ostalCodeDisplayLabel);
			this->Controls->Add(this->ityDisplayLabel);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Display";
			this->Text = L"Display";
			this->VisibleChanged += gcnew System::EventHandler(this, &Display::Display_VisibleChanged);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//these are the listeners

		//Closes the gui and goes to the Order gui 
private: System::Void orderButton_Click(System::Object^ sender, System::EventArgs^ e) {
	
	currentWarehouse->setDimentionalWood(*usersWarehouse->dimentionalWood);
	currentWarehouse->setPlywoodWood(*usersWarehouse->plywoodWood);
	currentWarehouse->setRailWood(*usersWarehouse->railWood);
	currentWarehouse->setFinishingWood(*usersWarehouse->finishingWood);
	
	*thisXPushed = false; //Tells the driver program that the gui was not closed
	*thisGui = 8; //Sets gui to open Order
	this->Close(); //Closes this gui
}
	    //Closes the gui and goes to the Ship gui 
private: System::Void shipButton_Click(System::Object^ sender, System::EventArgs^ e) {

	currentWarehouse->setDimentionalWood(*usersWarehouse->dimentionalWood);
	currentWarehouse->setPlywoodWood(*usersWarehouse->plywoodWood);
	currentWarehouse->setRailWood(*usersWarehouse->railWood);
	currentWarehouse->setFinishingWood(*usersWarehouse->finishingWood);


	*thisXPushed = false; //Tells the driver program that the gui was not closed
	*thisGui = 9; //Sets gui to open Ship
	this->Close(); //Closes this gui
}
	    //Closes the gui and goes to the previus gui 
private: System::Void backButton_Click(System::Object^ sender, System::EventArgs^ e) {

	//if they are general dont allow them to go back
	if (!isGeneral) {

		*thisXPushed = false; //Tells the driver program that the gui was not closed
		*thisGui = 3; //Sets gui to open AdminConsole
		this->Close(); //Closes this gui
	}
}
	    //Initalizing the gui with the values from the data base
private: System::Void Display_VisibleChanged(System::Object^ sender, System::EventArgs^ e) {

	//assing to the warehouse of the logged in user
	usersWarehouse = new Warehouse(currentUser->getAddress(), currentUser->getCity(), currentUser->getProvince(), currentUser->getPostalCode());

	//display the info of the warehouse on the screen
	addresDisplayLabel->Text = "Address: " + usersWarehouse->getAddressSS();
	ityDisplayLabel->Text = "City: " + usersWarehouse->getCitySS();
	provinceDisplayLAbel->Text = "Province: " + usersWarehouse->getProvinceSS();
	ostalCodeDisplayLabel->Text = "Postal Code: " + usersWarehouse->getPostalCodeSS();

	//get the inventory from the warehouse
	getWarehouseInventory();

	//to display all objects to the display list
	for (int i = 0; i < numberOfItems[1]; i++) {
		itemDisplayListBox->Items->Add(usersWarehouse->dimentionalWood[i].printToDisplay());
	}

	for (int i = 0; i < numberOfItems[2]; i++) {
		itemDisplayListBox->Items->Add(usersWarehouse->plywoodWood[i].printToDisplay());
	}

	for (int i = 0; i < numberOfItems[3]; i++) {
		itemDisplayListBox->Items->Add(usersWarehouse->railWood[i].printToDisplay());
	}

	for (int i = 0; i < numberOfItems[4]; i++) {
		itemDisplayListBox->Items->Add(usersWarehouse->finishingWood[i].printToDisplay());
	}


}

};
}