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
	/// Summary for ManageWarehouses
	/// </summary>
	public ref class ManageWarehouses : public System::Windows::Forms::Form
	{
		//Variable declaration
		int* thisGui = nullptr;
		bool* thisXPushed = nullptr;
	public:
		ManageWarehouses(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		ManageWarehouses(int* gui, bool* xPushed)
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
		~ManageWarehouses()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ warehouseDisplayListBox;
	protected:
	private: System::Windows::Forms::Button^ addNewWarehouseButton;

	private: System::Windows::Forms::Button^ backButton;

	protected:

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
			this->warehouseDisplayListBox = (gcnew System::Windows::Forms::ListBox());
			this->addNewWarehouseButton = (gcnew System::Windows::Forms::Button());
			this->backButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// warehouseDisplayListBox
			// 
			this->warehouseDisplayListBox->FormattingEnabled = true;
			this->warehouseDisplayListBox->ItemHeight = 20;
			this->warehouseDisplayListBox->Location = System::Drawing::Point(12, 12);
			this->warehouseDisplayListBox->Name = L"warehouseDisplayListBox";
			this->warehouseDisplayListBox->ScrollAlwaysVisible = true;
			this->warehouseDisplayListBox->Size = System::Drawing::Size(307, 584);
			this->warehouseDisplayListBox->TabIndex = 0;
			// 
			// addNewWarehouseButton
			// 
			this->addNewWarehouseButton->Location = System::Drawing::Point(345, 12);
			this->addNewWarehouseButton->Name = L"addNewWarehouseButton";
			this->addNewWarehouseButton->Size = System::Drawing::Size(131, 74);
			this->addNewWarehouseButton->TabIndex = 1;
			this->addNewWarehouseButton->Text = L"Add New Warehouse";
			this->addNewWarehouseButton->UseVisualStyleBackColor = true;
			this->addNewWarehouseButton->Click += gcnew System::EventHandler(this, &ManageWarehouses::addNewWarehouseButton_Click);
			// 
			// backButton
			// 
			this->backButton->Location = System::Drawing::Point(345, 522);
			this->backButton->Name = L"backButton";
			this->backButton->Size = System::Drawing::Size(131, 74);
			this->backButton->TabIndex = 3;
			this->backButton->Text = L"Back";
			this->backButton->UseVisualStyleBackColor = true;
			this->backButton->Click += gcnew System::EventHandler(this, &ManageWarehouses::backButton_Click);
			// 
			// ManageWarehouses
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(504, 619);
			this->Controls->Add(this->backButton);
			this->Controls->Add(this->addNewWarehouseButton);
			this->Controls->Add(this->warehouseDisplayListBox);
			this->Name = L"ManageWarehouses";
			this->Text = L"ManageWarehouses";
			this->VisibleChanged += gcnew System::EventHandler(this, &ManageWarehouses::ManageWarehouses_VisibleChanged);
			this->ResumeLayout(false);

		}
#pragma endregion
	//Closes the gui and goes to the AddWarehouse gui 
private: System::Void addNewWarehouseButton_Click(System::Object^ sender, System::EventArgs^ e) {
	*thisXPushed = false; //Tells the driver program that the gui was not closed
	*thisGui = 2; //Sets gui to open AddWarehouse
	this->Close(); //Closes this gui
}
	//Closes the gui and goes to the previus gui 
private: System::Void backButton_Click(System::Object^ sender, System::EventArgs^ e) {
	*thisXPushed = false; //Tells the driver program that the gui was not closed
	*thisGui = 3; //Sets gui to open AdminConsole
	this->Close(); //Closes this gui
}
    //Initalizing the gui with the values from the data base
private: System::Void ManageWarehouses_VisibleChanged(System::Object^ sender, System::EventArgs^ e) {
	//Adding list of warehouses to warehouseDisplayListBox from the text file
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
		this->warehouseDisplayListBox->Items->Add(str2);
	}
	warehouseList.close();
}
};
}
