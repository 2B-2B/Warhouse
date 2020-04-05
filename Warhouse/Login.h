#pragma once
#include <iostream>


//lets try this
#include <fstream>
#include <string>
#include <memory>
#include "Users.h"



namespace Warhouse {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
		//Variable declaration
		int* thisGui = nullptr;
		bool* thisXPushed = nullptr;
		int search;	//for searching through the array of users
		int userCount; //for searching through the array of users

		//pointer to the list of users
		Users* userInfo;
		Users* currentUser;


		//functions for populating the UserList from a text file
		void getUserInfo();
		int getNumberOfUsers(std::ifstream* userData);

	public:

		//default constructer - we arent calling this
		Login(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}


		//the constructer we are calling 
		Login(int* gui, bool* xPushed, Users* currentUsers);
		

	protected:
		//destructer, will destroy all the componants when we close the window
		~Login()
		{
			if (components)
			{
				delete components;

				delete userInfo;

			}
		}
	private: System::Windows::Forms::Label^ usernameLabel;
	private: System::Windows::Forms::Label^ passwordLabel;
	private: System::Windows::Forms::TextBox^ usernameTextBox;
	private: System::Windows::Forms::TextBox^ passwordTextBox;
	private: System::Windows::Forms::Button^ loginButton;


		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		
		//this function is needed to display the object on the screen
		void InitializeComponent(void)
		{
			this->usernameLabel = (gcnew System::Windows::Forms::Label());
			this->passwordLabel = (gcnew System::Windows::Forms::Label());
			this->usernameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->passwordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->loginButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// usernameLabel
			// 
			this->usernameLabel->AutoSize = true;
			this->usernameLabel->Location = System::Drawing::Point(20, 31);
			this->usernameLabel->Name = L"usernameLabel";
			this->usernameLabel->Size = System::Drawing::Size(73, 17);
			this->usernameLabel->TabIndex = 0;
			this->usernameLabel->Text = L"Username";
			// 
			// passwordLabel
			// 
			this->passwordLabel->AutoSize = true;
			this->passwordLabel->Location = System::Drawing::Point(20, 83);
			this->passwordLabel->Name = L"passwordLabel";
			this->passwordLabel->Size = System::Drawing::Size(69, 17);
			this->passwordLabel->TabIndex = 1;
			this->passwordLabel->Text = L"Password";
			// 
			// usernameTextBox
			// 
			this->usernameTextBox->Location = System::Drawing::Point(128, 29);
			this->usernameTextBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->usernameTextBox->Name = L"usernameTextBox";
			this->usernameTextBox->Size = System::Drawing::Size(109, 22);
			this->usernameTextBox->TabIndex = 2;
			// 
			// passwordTextBox
			// 
			this->passwordTextBox->Location = System::Drawing::Point(128, 83);
			this->passwordTextBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->passwordTextBox->Name = L"passwordTextBox";
			this->passwordTextBox->PasswordChar = '*';
			this->passwordTextBox->Size = System::Drawing::Size(109, 22);
			this->passwordTextBox->TabIndex = 3;
			// 
			// loginButton
			// 
			this->loginButton->Location = System::Drawing::Point(23, 141);
			this->loginButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->loginButton->Name = L"loginButton";
			this->loginButton->Size = System::Drawing::Size(202, 32);
			this->loginButton->TabIndex = 4;
			this->loginButton->Text = L"Login";
			this->loginButton->UseVisualStyleBackColor = true;
			this->loginButton->Click += gcnew System::EventHandler(this, &Login::loginButton_Click);
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(369, 217);
			this->Controls->Add(this->loginButton);
			this->Controls->Add(this->passwordTextBox);
			this->Controls->Add(this->usernameTextBox);
			this->Controls->Add(this->passwordLabel);
			this->Controls->Add(this->usernameLabel);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Login";
			this->Text = L"Login";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


		//Closes this gui and opens either Display or AdminConsole
		// the listern for the botton press
	private: System::Void loginButton_Click(System::Object^ sender, System::EventArgs^ e);

};
}
