#pragma once
#include <fstream>
#include <msclr\marshal_cppstd.h>
#include <iostream>

namespace Warhouse {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AdminConsole
	/// </summary>
	public ref class AdminConsole : public System::Windows::Forms::Form
	{
		//Variable declaration
		int* thisGui = nullptr;
		bool* thisXPushed = nullptr;
	public:
		AdminConsole(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		AdminConsole(int* gui, bool* xPushed)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			thisGui = gui;
			thisXPushed = xPushed;
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AdminConsole()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ warehousDisplayListBox;
	protected:
	private: System::Windows::Forms::ListBox^ usersDisplayListBox;
	private: System::Windows::Forms::Button^ viewWarehousesButton;
	private: System::Windows::Forms::Button^ manageWarehousesButton;
	private: System::Windows::Forms::Button^ manageUsersButton;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->warehousDisplayListBox = (gcnew System::Windows::Forms::ListBox());
			this->usersDisplayListBox = (gcnew System::Windows::Forms::ListBox());
			this->viewWarehousesButton = (gcnew System::Windows::Forms::Button());
			this->manageWarehousesButton = (gcnew System::Windows::Forms::Button());
			this->manageUsersButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// warehousDisplayListBox
			// 
			this->warehousDisplayListBox->FormattingEnabled = true;
			this->warehousDisplayListBox->HorizontalScrollbar = true;
			this->warehousDisplayListBox->ItemHeight = 20;
			this->warehousDisplayListBox->Location = System::Drawing::Point(12, 12);
			this->warehousDisplayListBox->Name = L"warehousDisplayListBox";
			this->warehousDisplayListBox->ScrollAlwaysVisible = true;
			this->warehousDisplayListBox->Size = System::Drawing::Size(459, 384);
			this->warehousDisplayListBox->TabIndex = 0;
			// 
			// usersDisplayListBox
			// 
			this->usersDisplayListBox->FormattingEnabled = true;
			this->usersDisplayListBox->HorizontalScrollbar = true;
			this->usersDisplayListBox->ItemHeight = 20;
			this->usersDisplayListBox->Location = System::Drawing::Point(496, 12);
			this->usersDisplayListBox->Name = L"usersDisplayListBox";
			this->usersDisplayListBox->ScrollAlwaysVisible = true;
			this->usersDisplayListBox->Size = System::Drawing::Size(489, 384);
			this->usersDisplayListBox->TabIndex = 1;
			// 
			// viewWarehousesButton
			// 
			this->viewWarehousesButton->Location = System::Drawing::Point(12, 419);
			this->viewWarehousesButton->Name = L"viewWarehousesButton";
			this->viewWarehousesButton->Size = System::Drawing::Size(105, 60);
			this->viewWarehousesButton->TabIndex = 2;
			this->viewWarehousesButton->Text = L"View Warehouses";
			this->viewWarehousesButton->UseVisualStyleBackColor = true;
			this->viewWarehousesButton->Click += gcnew System::EventHandler(this, &AdminConsole::viewWarehousesButton_Click);
			// 
			// manageWarehousesButton
			// 
			this->manageWarehousesButton->Location = System::Drawing::Point(366, 419);
			this->manageWarehousesButton->Name = L"manageWarehousesButton";
			this->manageWarehousesButton->Size = System::Drawing::Size(105, 60);
			this->manageWarehousesButton->TabIndex = 3;
			this->manageWarehousesButton->Text = L"Manage Warehouses";
			this->manageWarehousesButton->UseVisualStyleBackColor = true;
			this->manageWarehousesButton->Click += gcnew System::EventHandler(this, &AdminConsole::manageWarehousesButton_Click);
			// 
			// manageUsersButton
			// 
			this->manageUsersButton->Location = System::Drawing::Point(761, 419);
			this->manageUsersButton->Name = L"manageUsersButton";
			this->manageUsersButton->Size = System::Drawing::Size(224, 60);
			this->manageUsersButton->TabIndex = 4;
			this->manageUsersButton->Text = L"Manage Users";
			this->manageUsersButton->UseVisualStyleBackColor = true;
			this->manageUsersButton->Click += gcnew System::EventHandler(this, &AdminConsole::manageUsersButton_Click);
			// 
			// AdminConsole
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(991, 496);
			this->Controls->Add(this->manageUsersButton);
			this->Controls->Add(this->manageWarehousesButton);
			this->Controls->Add(this->viewWarehousesButton);
			this->Controls->Add(this->usersDisplayListBox);
			this->Controls->Add(this->warehousDisplayListBox);
			this->Name = L"AdminConsole";
			this->Text = L"l";
			this->VisibleChanged += gcnew System::EventHandler(this, &AdminConsole::AdminConsole_VisibleChanged);
			this->ResumeLayout(false);

		}
#pragma endregion
		//Closes the gui and goes to the Display gui 
private: System::Void viewWarehousesButton_Click(System::Object^ sender, System::EventArgs^ e) {
	*thisXPushed = false; //Tells the driver program that the gui was not closed
	*thisGui = 4; //Sets gui to open Display
	this->Close(); //Closes this gui
}
	    //Closes the gui and goes to the ManageWarehouses gui 
private: System::Void manageWarehousesButton_Click(System::Object^ sender, System::EventArgs^ e) {
	*thisXPushed = false; //Tells the driver program that the gui was not closed
	*thisGui = 7; //Sets gui to open ManageWarehouses
	this->Close(); //Closes this gui
}
	    //Closes the gui and goes to the ManageUsers gui 
private: System::Void manageUsersButton_Click(System::Object^ sender, System::EventArgs^ e) {
	*thisXPushed = false; //Tells the driver program that the gui was not closed
	*thisGui = 6; //Sets gui to open ManageWarehouses
	this->Close(); //Closes this gui
}
	    //Initalizing the gui with the values from the data base
private: System::Void AdminConsole_VisibleChanged(System::Object^ sender, System::EventArgs^ e) {
	//Adding list of users to usersDisplayListBox from the text file
	std::ifstream usersList;
	//Opening the users text file
	usersList.open("userList.txt");
	//Loops through the file adding all the usernames and password to the display
	while (!usersList.eof())
	{
		std::string line;
		std::string display;
		std::getline(usersList, line, ',');
		display = "Username: " + line;
		std::getline(usersList, line, ',');
		display = display + " Password: " + line;
		std::getline(usersList, line, ',');
		display = display + " Access: " + line;
		std::getline(usersList, line, ',');
		std::getline(usersList, line, ',');
		std::getline(usersList, line, ',');
		std::getline(usersList, line);
		String^ str2 = gcnew String(display.c_str());
		this->usersDisplayListBox->Items->Add(str2);
	}
	usersList.close();

	//Adding list of warehouses to warehousDisplayListBox from the text file
	std::ifstream warehouseList;
	//Opening the warhouses text file
	warehouseList.open("WarehouseInventory.txt");
	//Loops through the file adding all the adresses and postal codes to the display
	while (!warehouseList.eof())
	{
		std::string line;
		std::string display;
		std::getline(warehouseList, line, ',');
		display = "Adress: " + line;
		std::getline(warehouseList, line, ',');
		std::getline(warehouseList, line, ',');
		std::getline(warehouseList, line);
		display = display + " Postal Code: " + line;
		String^ str2 = gcnew String(display.c_str());
		this->warehousDisplayListBox->Items->Add(str2);
	}
	warehouseList.close();
}

};
}
