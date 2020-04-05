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

		//pointer to the objects
		//Dimentional* twoByFour = nullptr;
		//Dimentional* fourByFour = nullptr;
		
		//the current logged in user
		Users* currentUser;

		//the warehous of the currently logged in user
		Warehouse* usersWarehouse;
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
		Display(int* gui, bool* xPushed, bool* isGeneral, Users* currentUser) {
			
			InitializeComponent();

			//setting everuthing up
			thisGui = gui;
			thisXPushed = xPushed;
			this->isGeneral = isGeneral;

			//seeting the current user
			this->currentUser = currentUser;



			//Dimentional twoByFour = Dimentional(2, 4, 8, "pressure treated", 6.50, 500);
		   // Dimentional fourByFour = Dimentional(4, 4, 8, "pressure treated", 10.50, 300);

		   // this->twoByFour = &twoByFour;
		   // this->fourByFour = &fourByFour;

		}
		

		//this is get the inventory of the warehouse
		void getWarehouseInventory();
		void getNumberOfItems(std::ifstream* userData);

		//void getUsersWarehouse(Users** currentUsers )

	protected:
		
		//destructer
		~Display()
		{
			if (components)
			{
				delete components;

				delete usersWarehouse;
				

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
			this->ityDisplayLabel->Location = System::Drawing::Point(12, 73);
			this->ityDisplayLabel->Name = L"ityDisplayLabel";
			this->ityDisplayLabel->Size = System::Drawing::Size(35, 20);
			this->ityDisplayLabel->TabIndex = 0;
			this->ityDisplayLabel->Text = L"City";
			// 
			// ostalCodeDisplayLabel
			// 
			this->ostalCodeDisplayLabel->AutoSize = true;
			this->ostalCodeDisplayLabel->Location = System::Drawing::Point(12, 107);
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
			this->itemDisplayListBox->ItemHeight = 20;
			this->itemDisplayListBox->Location = System::Drawing::Point(221, 12);
			this->itemDisplayListBox->Name = L"itemDisplayListBox";
			this->itemDisplayListBox->Size = System::Drawing::Size(426, 624);
			this->itemDisplayListBox->TabIndex = 4;
			// 
			// shipButton
			// 
			this->shipButton->Location = System::Drawing::Point(12, 285);
			this->shipButton->Name = L"shipButton";
			this->shipButton->Size = System::Drawing::Size(124, 62);
			this->shipButton->TabIndex = 5;
			this->shipButton->Text = L"Ship";
			this->shipButton->UseVisualStyleBackColor = true;
			this->shipButton->Click += gcnew System::EventHandler(this, &Display::shipButton_Click);
			// 
			// orderButton
			// 
			this->orderButton->Location = System::Drawing::Point(12, 183);
			this->orderButton->Name = L"orderButton";
			this->orderButton->Size = System::Drawing::Size(124, 62);
			this->orderButton->TabIndex = 6;
			this->orderButton->Text = L"Order";
			this->orderButton->UseVisualStyleBackColor = true;
			this->orderButton->Click += gcnew System::EventHandler(this, &Display::orderButton_Click);
			// 
			// backButton 
			//TODO: Only make visable is an admin user
			// 
			this->backButton->Location = System::Drawing::Point(12, 570);
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
			this->ClientSize = System::Drawing::Size(659, 644);
			this->Controls->Add(this->backButton);
			this->Controls->Add(this->orderButton);
			this->Controls->Add(this->shipButton);
			this->Controls->Add(this->itemDisplayListBox);
			this->Controls->Add(this->addresDisplayLabel);
			this->Controls->Add(this->provinceDisplayLAbel);
			this->Controls->Add(this->ostalCodeDisplayLabel);
			this->Controls->Add(this->ityDisplayLabel);
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
	*thisXPushed = false; //Tells the driver program that the gui was not closed
	*thisGui = 8; //Sets gui to open Order
	this->Close(); //Closes this gui
}
	    //Closes the gui and goes to the Ship gui 
private: System::Void shipButton_Click(System::Object^ sender, System::EventArgs^ e) {



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
	
	//reinitalize the two by four with the current values of the 
	//*twoByFour = Dimentional(2, 4, 8, "pressure treated", 6.50, 500);
	//*fourByFour = Dimentional(4, 4, 8, "pressure treated", 10.50, 300);

	
	//create the warehouse object
	usersWarehouse = new Warehouse(currentUser->getAddress(), currentUser->getProvince(), currentUser->getPostalCode());

	//display the info of the warehouse on the screen
	addresDisplayLabel->Text = "Address: " + usersWarehouse->getAddressSS();
	provinceDisplayLAbel->Text = "Province: " + usersWarehouse->getProvinceSS();
	ostalCodeDisplayLabel->Text = "Postal Code: " + usersWarehouse->getPostalCodeSS();

	//get the inventory from the warehouse
	getWarehouseInventory();

	std::cout << usersWarehouse->printDimensions();
}

};
}
