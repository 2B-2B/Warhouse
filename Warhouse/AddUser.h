#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <msclr\marshal_cppstd.h>

namespace Warhouse {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddUser
	/// </summary>
	public ref class AddUser : public System::Windows::Forms::Form
	{
		//Variable declaration
		int* thisGui = nullptr;
	private: System::Windows::Forms::Label^ warehouseLabel;
	private: System::Windows::Forms::ComboBox^ warehouseComboBox;
	private: System::Windows::Forms::Button^ addButton;
	private: System::Windows::Forms::Button^ backButton;
	private: System::Windows::Forms::RadioButton^ adminAccessRadioButton;
	private: System::Windows::Forms::RadioButton^ generalAccessRasioButton;
	private: System::Windows::Forms::Label^ accessLevelLabel;
	private: System::Windows::Forms::TextBox^ passwordTextBox;
	private: System::Windows::Forms::TextBox^ usernameTextBox;
	private: System::Windows::Forms::Label^ passwordLabel;
	private: System::Windows::Forms::Label^ usernameLabel;
		   bool* thisXPushed = nullptr;
	public:
		AddUser(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		AddUser(int* gui, bool* xPushed)
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
		~AddUser()
		{
			if (components)
			{
				delete components;
			}
		}









	protected:




	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->warehouseLabel = (gcnew System::Windows::Forms::Label());
			this->warehouseComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->addButton = (gcnew System::Windows::Forms::Button());
			this->backButton = (gcnew System::Windows::Forms::Button());
			this->adminAccessRadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->generalAccessRasioButton = (gcnew System::Windows::Forms::RadioButton());
			this->accessLevelLabel = (gcnew System::Windows::Forms::Label());
			this->passwordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->usernameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->passwordLabel = (gcnew System::Windows::Forms::Label());
			this->usernameLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// warehouseLabel
			// 
			this->warehouseLabel->AutoSize = true;
			this->warehouseLabel->Location = System::Drawing::Point(26, 102);
			this->warehouseLabel->Name = L"warehouseLabel";
			this->warehouseLabel->Size = System::Drawing::Size(91, 20);
			this->warehouseLabel->TabIndex = 32;
			this->warehouseLabel->Text = L"Warehouse";
			// 
			// warehouseComboBox
			// 
			this->warehouseComboBox->FormattingEnabled = true;
			this->warehouseComboBox->Location = System::Drawing::Point(130, 94);
			this->warehouseComboBox->Name = L"warehouseComboBox";
			this->warehouseComboBox->Size = System::Drawing::Size(136, 28);
			this->warehouseComboBox->TabIndex = 31;
			// 
			// addButton
			// 
			this->addButton->Location = System::Drawing::Point(150, 200);
			this->addButton->Name = L"addButton";
			this->addButton->Size = System::Drawing::Size(116, 40);
			this->addButton->TabIndex = 30;
			this->addButton->Text = L"Add";
			this->addButton->UseVisualStyleBackColor = true;
			this->addButton->Click += gcnew System::EventHandler(this, &AddUser::addButton_Click);
			// 
			// backButton
			// 
			this->backButton->Location = System::Drawing::Point(12, 200);
			this->backButton->Name = L"backButton";
			this->backButton->Size = System::Drawing::Size(116, 40);
			this->backButton->TabIndex = 29;
			this->backButton->Text = L"Back";
			this->backButton->UseVisualStyleBackColor = true;
			this->backButton->Click += gcnew System::EventHandler(this, &AddUser::backButton_Click);
			// 
			// adminAccessRadioButton
			// 
			this->adminAccessRadioButton->AutoSize = true;
			this->adminAccessRadioButton->Location = System::Drawing::Point(134, 170);
			this->adminAccessRadioButton->Name = L"adminAccessRadioButton";
			this->adminAccessRadioButton->Size = System::Drawing::Size(79, 24);
			this->adminAccessRadioButton->TabIndex = 28;
			this->adminAccessRadioButton->Text = L"Admin";
			this->adminAccessRadioButton->UseVisualStyleBackColor = true;
			// 
			// generalAccessRasioButton
			// 
			this->generalAccessRasioButton->AutoSize = true;
			this->generalAccessRasioButton->Checked = true;
			this->generalAccessRasioButton->Location = System::Drawing::Point(134, 140);
			this->generalAccessRasioButton->Name = L"generalAccessRasioButton";
			this->generalAccessRasioButton->Size = System::Drawing::Size(91, 24);
			this->generalAccessRasioButton->TabIndex = 27;
			this->generalAccessRasioButton->TabStop = true;
			this->generalAccessRasioButton->Text = L"General";
			this->generalAccessRasioButton->UseVisualStyleBackColor = true;
			// 
			// accessLevelLabel
			// 
			this->accessLevelLabel->AutoSize = true;
			this->accessLevelLabel->Location = System::Drawing::Point(26, 153);
			this->accessLevelLabel->Name = L"accessLevelLabel";
			this->accessLevelLabel->Size = System::Drawing::Size(102, 20);
			this->accessLevelLabel->TabIndex = 26;
			this->accessLevelLabel->Text = L"Access Level";
			// 
			// passwordTextBox
			// 
			this->passwordTextBox->Location = System::Drawing::Point(130, 53);
			this->passwordTextBox->Name = L"passwordTextBox";
			this->passwordTextBox->PasswordChar = '*';
			this->passwordTextBox->Size = System::Drawing::Size(136, 26);
			this->passwordTextBox->TabIndex = 25;
			// 
			// usernameTextBox
			// 
			this->usernameTextBox->Location = System::Drawing::Point(130, 21);
			this->usernameTextBox->Name = L"usernameTextBox";
			this->usernameTextBox->Size = System::Drawing::Size(136, 26);
			this->usernameTextBox->TabIndex = 24;
			// 
			// passwordLabel
			// 
			this->passwordLabel->AutoSize = true;
			this->passwordLabel->Location = System::Drawing::Point(26, 53);
			this->passwordLabel->Name = L"passwordLabel";
			this->passwordLabel->Size = System::Drawing::Size(78, 20);
			this->passwordLabel->TabIndex = 23;
			this->passwordLabel->Text = L"Password";
			// 
			// usernameLabel
			// 
			this->usernameLabel->AutoSize = true;
			this->usernameLabel->Location = System::Drawing::Point(26, 21);
			this->usernameLabel->Name = L"usernameLabel";
			this->usernameLabel->Size = System::Drawing::Size(83, 20);
			this->usernameLabel->TabIndex = 22;
			this->usernameLabel->Text = L"Username";
			// 
			// AddUser
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(278, 261);
			this->Controls->Add(this->warehouseLabel);
			this->Controls->Add(this->warehouseComboBox);
			this->Controls->Add(this->addButton);
			this->Controls->Add(this->backButton);
			this->Controls->Add(this->adminAccessRadioButton);
			this->Controls->Add(this->generalAccessRasioButton);
			this->Controls->Add(this->accessLevelLabel);
			this->Controls->Add(this->passwordTextBox);
			this->Controls->Add(this->usernameTextBox);
			this->Controls->Add(this->passwordLabel);
			this->Controls->Add(this->usernameLabel);
			this->Name = L"AddUser";
			this->Text = L"AddUser";
			this->VisibleChanged += gcnew System::EventHandler(this, &AddUser::AddUser_VisibleChanged);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//Closes the gui and goes to the previus gui 
	private: System::Void backButton_Click(System::Object^ sender, System::EventArgs^ e) {
		*thisXPushed = false; //Tells the driver program that the gui was not closed
		*thisGui = 6; //Sets gui to open ManageUsers
		this->Close(); //Closes this gui
	}

		   //Adds the user to the database, closes the gui and goes to the previus gui 
	private: System::Void addButton_Click(System::Object^ sender, System::EventArgs^ e) {
		//appends the new user to the text file
		std::ofstream usersList;
		msclr::interop::marshal_context context;
		std::ifstream warehouses;

		//Opens the required text files
		warehouses.open("WarehouseInventory.txt");
		usersList.open("userList.txt", std::ios::app);

		//Gets the entered data from the gui
		System::String^ userName = this->usernameTextBox->Text;
		std::string userNameString = context.marshal_as<std::string>(userName);
		System::String^ password = this->usernameTextBox->Text;
		std::string passwordString = context.marshal_as<std::string>(password);
		System::String^ adress = this->warehouseComboBox->Text;
		std::string adressString = context.marshal_as<std::string>(adress);
		
		//Gets the data for th entered adress from the textfile
		bool runLoop = true;
		while (!warehouses.eof() && runLoop)
		{
			std::string adressFile;
			std::string city;
			std::string province;
			std::string postalCode;
			std::getline(warehouses, adressFile, ',');
			std::getline(warehouses, city, ',');
			std::getline(warehouses, province, ',');
			std::getline(warehouses, postalCode);

			//Appends the new user to the users text file
			if (adressFile == adressString)
			{
				usersList << "\n" << userNameString << "," << passwordString << ",";
				if (this->adminAccessRadioButton->Checked)
				{
					usersList << "admin" << "," << adressFile << "," << city << "," << province << "," << postalCode;
				}
				else
				{
					usersList << "general" << "," << adressFile << "," << city << "," << province << "," << postalCode;
				}
				runLoop = false;
			}
		}
		warehouses.close();
		usersList.close();

		*thisXPushed = false; //Tells the driver program that the gui was not closed
		*thisGui = 6; //Sets gui to open ManageUsers
		this->Close(); //Closes this gui
	}

		   //Initalizing the gui with the values from the data base
	private: System::Void AddUser_VisibleChanged(System::Object^ sender, System::EventArgs^ e) {
		//Adds the warehouse adresses to the warehouseComboBox
		std::ifstream warehouses;
		//opens the warehouses text file
		warehouses.open("WarehouseInventory.txt");
		//Grabs all the adresses
		while (!warehouses.eof())
		{
			std::string line;
			std::getline(warehouses, line, ',');
			String^ str2 = gcnew String(line.c_str());
			std::getline(warehouses, line, ',');
			std::getline(warehouses, line, ',');
			std::getline(warehouses, line);
			//adds the addresses to the combo box
			this->warehouseComboBox->Items->Add(str2);
		}
		warehouses.close();
		//initalized the text file.

		
	}
	};
}
