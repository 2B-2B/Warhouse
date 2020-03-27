#pragma once

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
	private: System::Windows::Forms::Button^ removeUserButton;
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
			this->removeUserButton = (gcnew System::Windows::Forms::Button());
			this->backButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// usersDisplayListBox
			// 
			this->usersDisplayListBox->FormattingEnabled = true;
			this->usersDisplayListBox->ItemHeight = 20;
			this->usersDisplayListBox->Location = System::Drawing::Point(12, 12);
			this->usersDisplayListBox->Name = L"usersDisplayListBox";
			this->usersDisplayListBox->Size = System::Drawing::Size(306, 584);
			this->usersDisplayListBox->TabIndex = 0;
			// 
			// addNewUserButton
			// 
			this->addNewUserButton->Location = System::Drawing::Point(339, 12);
			this->addNewUserButton->Name = L"addNewUserButton";
			this->addNewUserButton->Size = System::Drawing::Size(181, 65);
			this->addNewUserButton->TabIndex = 1;
			this->addNewUserButton->Text = L"Add New User";
			this->addNewUserButton->UseVisualStyleBackColor = true;
			this->addNewUserButton->Click += gcnew System::EventHandler(this, &ManageUsers::addNewUserButton_Click);
			// 
			// removeUserButton
			// 
			this->removeUserButton->Location = System::Drawing::Point(339, 106);
			this->removeUserButton->Name = L"removeUserButton";
			this->removeUserButton->Size = System::Drawing::Size(181, 65);
			this->removeUserButton->TabIndex = 2;
			this->removeUserButton->Text = L"Remove User";
			this->removeUserButton->UseVisualStyleBackColor = true;
			this->removeUserButton->Click += gcnew System::EventHandler(this, &ManageUsers::removeUserButton_Click);
			// 
			// backButton
			// 
			this->backButton->Location = System::Drawing::Point(339, 525);
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
			this->ClientSize = System::Drawing::Size(532, 613);
			this->Controls->Add(this->backButton);
			this->Controls->Add(this->removeUserButton);
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
	    //Deletes the user from the data base
    private: System::Void removeUserButton_Click(System::Object^ sender, System::EventArgs^ e) {
		//
		//TODO: Add Delete user code
		//
    }
        //Initalizing the gui with the values from the data base
	private: System::Void ManageUsers_VisibleChanged(System::Object^ sender, System::EventArgs^ e) {
		//
		//TODO: Add initalization code
		//
}
};
}
