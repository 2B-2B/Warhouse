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
	/// Summary for ManageUsers
	/// </summary>
	public ref class ManageUsers : public System::Windows::Forms::Form
	{
		//Variable declaration
		int* thisGui = nullptr;
		bool* thisXPushed = nullptr;
	public:
		ManageUsers(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		ManageUsers(int* gui, bool* xPushed)
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
		~ManageUsers()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ usersDisplayListBox;
	protected:
	private: System::Windows::Forms::Button^ addNewUserButton;

	private: System::Windows::Forms::Button^ backButton;

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
			this->usersDisplayListBox = (gcnew System::Windows::Forms::ListBox());
			this->addNewUserButton = (gcnew System::Windows::Forms::Button());
			this->backButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// usersDisplayListBox
			// 
			this->usersDisplayListBox->FormattingEnabled = true;
			this->usersDisplayListBox->ItemHeight = 20;
			this->usersDisplayListBox->Location = System::Drawing::Point(12, 12);
			this->usersDisplayListBox->Name = L"usersDisplayListBox";
			this->usersDisplayListBox->Size = System::Drawing::Size(446, 584);
			this->usersDisplayListBox->TabIndex = 0;
			// 
			// addNewUserButton
			// 
			this->addNewUserButton->Location = System::Drawing::Point(464, 12);
			this->addNewUserButton->Name = L"addNewUserButton";
			this->addNewUserButton->Size = System::Drawing::Size(181, 65);
			this->addNewUserButton->TabIndex = 1;
			this->addNewUserButton->Text = L"Add New User";
			this->addNewUserButton->UseVisualStyleBackColor = true;
			this->addNewUserButton->Click += gcnew System::EventHandler(this, &ManageUsers::addNewUserButton_Click);
			// 
			// backButton
			// 
			this->backButton->Location = System::Drawing::Point(464, 525);
			this->backButton->Name = L"backButton";
			this->backButton->Size = System::Drawing::Size(181, 76);
			this->backButton->TabIndex = 3;
			this->backButton->Text = L"Back";
			this->backButton->UseVisualStyleBackColor = true;
			this->backButton->Click += gcnew System::EventHandler(this, &ManageUsers::backButton_Click);
			// 
			// ManageUsers
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(657, 613);
			this->Controls->Add(this->backButton);
			this->Controls->Add(this->addNewUserButton);
			this->Controls->Add(this->usersDisplayListBox);
			this->Name = L"ManageUsers";
			this->Text = L"ManageUsers";
			this->VisibleChanged += gcnew System::EventHandler(this, &ManageUsers::ManageUsers_VisibleChanged);
			this->ResumeLayout(false);

		}
#pragma endregion
		//Closes the gui and goes to the AddUser gui 
	private: System::Void addNewUserButton_Click(System::Object^ sender, System::EventArgs^ e) {
		*thisXPushed = false; //Tells the driver program that the gui was not closed
		*thisGui = 1; //Sets gui to open AddUser
		this->Close(); //Closes this gui
	}
	    //Closes the gui and goes to the previus gui 
	private: System::Void backButton_Click(System::Object^ sender, System::EventArgs^ e) {
		*thisXPushed = false; //Tells the driver program that the gui was not closed
		*thisGui = 3; //Sets gui to open AdminConsole
		this->Close(); //Closes this gui
	}

        //Initalizing the gui with the values from the data base
	private: System::Void ManageUsers_VisibleChanged(System::Object^ sender, System::EventArgs^ e) {
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
}
};
}
