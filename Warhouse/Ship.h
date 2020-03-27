#pragma once

namespace Warhouse {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Ship
	/// </summary>
	public ref class Ship : public System::Windows::Forms::Form
	{
		//Variable declaration
		int* thisGui = nullptr;
		bool* thisXPushed = nullptr;
	public:
		Ship(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Ship(int* gui, bool* xPushed)
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
		~Ship()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ woodTypeTwoAmmountDisplayTextBox;
	protected:
	private: System::Windows::Forms::TextBox^ woodTypeThreeAmmountDisplayTextBox;
	private: System::Windows::Forms::TextBox^ woodTypeOneAmmountDisplayTextBox;
	private: System::Windows::Forms::Button^ shipButton;

	private: System::Windows::Forms::Button^ cancelButton;
	private: System::Windows::Forms::NumericUpDown^ woodTypeThreeSpinner;
	private: System::Windows::Forms::NumericUpDown^ woodTypeTwoSpinner;
	private: System::Windows::Forms::NumericUpDown^ woodTypeOneSpinner;
	private: System::Windows::Forms::Label^ woodTypeDisplayLebelThree;
	private: System::Windows::Forms::Label^ woodTypeDisplayLabelTwo;
	private: System::Windows::Forms::Label^ woodTypeDisplayLabelOne;

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
			this->woodTypeTwoAmmountDisplayTextBox = (gcnew System::Windows::Forms::TextBox());
			this->woodTypeThreeAmmountDisplayTextBox = (gcnew System::Windows::Forms::TextBox());
			this->woodTypeOneAmmountDisplayTextBox = (gcnew System::Windows::Forms::TextBox());
			this->shipButton = (gcnew System::Windows::Forms::Button());
			this->cancelButton = (gcnew System::Windows::Forms::Button());
			this->woodTypeThreeSpinner = (gcnew System::Windows::Forms::NumericUpDown());
			this->woodTypeTwoSpinner = (gcnew System::Windows::Forms::NumericUpDown());
			this->woodTypeOneSpinner = (gcnew System::Windows::Forms::NumericUpDown());
			this->woodTypeDisplayLebelThree = (gcnew System::Windows::Forms::Label());
			this->woodTypeDisplayLabelTwo = (gcnew System::Windows::Forms::Label());
			this->woodTypeDisplayLabelOne = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->woodTypeThreeSpinner))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->woodTypeTwoSpinner))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->woodTypeOneSpinner))->BeginInit();
			this->SuspendLayout();
			// 
			// woodTypeTwoAmmountDisplayTextBox
			// 
			this->woodTypeTwoAmmountDisplayTextBox->Location = System::Drawing::Point(179, 54);
			this->woodTypeTwoAmmountDisplayTextBox->Name = L"woodTypeTwoAmmountDisplayTextBox";
			this->woodTypeTwoAmmountDisplayTextBox->ReadOnly = true;
			this->woodTypeTwoAmmountDisplayTextBox->Size = System::Drawing::Size(50, 26);
			this->woodTypeTwoAmmountDisplayTextBox->TabIndex = 21;
			// 
			// woodTypeThreeAmmountDisplayTextBox
			// 
			this->woodTypeThreeAmmountDisplayTextBox->Location = System::Drawing::Point(179, 96);
			this->woodTypeThreeAmmountDisplayTextBox->Name = L"woodTypeThreeAmmountDisplayTextBox";
			this->woodTypeThreeAmmountDisplayTextBox->ReadOnly = true;
			this->woodTypeThreeAmmountDisplayTextBox->Size = System::Drawing::Size(50, 26);
			this->woodTypeThreeAmmountDisplayTextBox->TabIndex = 20;
			// 
			// woodTypeOneAmmountDisplayTextBox
			// 
			this->woodTypeOneAmmountDisplayTextBox->Location = System::Drawing::Point(179, 9);
			this->woodTypeOneAmmountDisplayTextBox->Name = L"woodTypeOneAmmountDisplayTextBox";
			this->woodTypeOneAmmountDisplayTextBox->ReadOnly = true;
			this->woodTypeOneAmmountDisplayTextBox->Size = System::Drawing::Size(50, 26);
			this->woodTypeOneAmmountDisplayTextBox->TabIndex = 19;
			// 
			// shipButton
			// 
			this->shipButton->Location = System::Drawing::Point(263, 470);
			this->shipButton->Name = L"shipButton";
			this->shipButton->Size = System::Drawing::Size(179, 77);
			this->shipButton->TabIndex = 18;
			this->shipButton->Text = L"Ship";
			this->shipButton->UseVisualStyleBackColor = true;
			this->shipButton->Click += gcnew System::EventHandler(this, &Ship::shipButton_Click);
			// 
			// cancelButton
			// 
			this->cancelButton->Location = System::Drawing::Point(12, 470);
			this->cancelButton->Name = L"cancelButton";
			this->cancelButton->Size = System::Drawing::Size(185, 77);
			this->cancelButton->TabIndex = 17;
			this->cancelButton->Text = L"Cancel";
			this->cancelButton->UseVisualStyleBackColor = true;
			this->cancelButton->Click += gcnew System::EventHandler(this, &Ship::cancelButton_Click);
			// 
			// woodTypeThreeSpinner
			// 
			this->woodTypeThreeSpinner->Location = System::Drawing::Point(268, 96);
			this->woodTypeThreeSpinner->Name = L"woodTypeThreeSpinner";
			this->woodTypeThreeSpinner->Size = System::Drawing::Size(174, 26);
			this->woodTypeThreeSpinner->TabIndex = 16;
			// 
			// woodTypeTwoSpinner
			// 
			this->woodTypeTwoSpinner->Location = System::Drawing::Point(268, 52);
			this->woodTypeTwoSpinner->Name = L"woodTypeTwoSpinner";
			this->woodTypeTwoSpinner->Size = System::Drawing::Size(174, 26);
			this->woodTypeTwoSpinner->TabIndex = 15;
			// 
			// woodTypeOneSpinner
			// 
			this->woodTypeOneSpinner->Location = System::Drawing::Point(268, 7);
			this->woodTypeOneSpinner->Name = L"woodTypeOneSpinner";
			this->woodTypeOneSpinner->Size = System::Drawing::Size(174, 26);
			this->woodTypeOneSpinner->TabIndex = 14;
			// 
			// woodTypeDisplayLebelThree
			// 
			this->woodTypeDisplayLebelThree->AutoSize = true;
			this->woodTypeDisplayLebelThree->Location = System::Drawing::Point(12, 98);
			this->woodTypeDisplayLebelThree->Name = L"woodTypeDisplayLebelThree";
			this->woodTypeDisplayLebelThree->Size = System::Drawing::Size(134, 20);
			this->woodTypeDisplayLebelThree->TabIndex = 13;
			this->woodTypeDisplayLebelThree->Text = L"Wood Type Three";
			// 
			// woodTypeDisplayLabelTwo
			// 
			this->woodTypeDisplayLabelTwo->AutoSize = true;
			this->woodTypeDisplayLabelTwo->Location = System::Drawing::Point(12, 54);
			this->woodTypeDisplayLabelTwo->Name = L"woodTypeDisplayLabelTwo";
			this->woodTypeDisplayLabelTwo->Size = System::Drawing::Size(122, 20);
			this->woodTypeDisplayLabelTwo->TabIndex = 12;
			this->woodTypeDisplayLabelTwo->Text = L"Wood Type Two";
			// 
			// woodTypeDisplayLabelOne
			// 
			this->woodTypeDisplayLabelOne->AutoSize = true;
			this->woodTypeDisplayLabelOne->Location = System::Drawing::Point(12, 9);
			this->woodTypeDisplayLabelOne->Name = L"woodTypeDisplayLabelOne";
			this->woodTypeDisplayLabelOne->Size = System::Drawing::Size(123, 20);
			this->woodTypeDisplayLabelOne->TabIndex = 11;
			this->woodTypeDisplayLabelOne->Text = L"Wood Type One";
			// 
			// Ship
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(453, 556);
			this->Controls->Add(this->woodTypeTwoAmmountDisplayTextBox);
			this->Controls->Add(this->woodTypeThreeAmmountDisplayTextBox);
			this->Controls->Add(this->woodTypeOneAmmountDisplayTextBox);
			this->Controls->Add(this->shipButton);
			this->Controls->Add(this->cancelButton);
			this->Controls->Add(this->woodTypeThreeSpinner);
			this->Controls->Add(this->woodTypeTwoSpinner);
			this->Controls->Add(this->woodTypeOneSpinner);
			this->Controls->Add(this->woodTypeDisplayLebelThree);
			this->Controls->Add(this->woodTypeDisplayLabelTwo);
			this->Controls->Add(this->woodTypeDisplayLabelOne);
			this->Name = L"Ship";
			this->Text = L"Ship";
			this->VisibleChanged += gcnew System::EventHandler(this, &Ship::Ship_VisibleChanged);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->woodTypeThreeSpinner))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->woodTypeTwoSpinner))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->woodTypeOneSpinner))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//Closes the gui and goes to the previus gui 
private: System::Void cancelButton_Click(System::Object^ sender, System::EventArgs^ e) {
	*thisXPushed = false; //Tells the driver program that the gui was not closed
	*thisGui = 4; //Sets gui to open Display
	this->Close(); //Closes this gui
}
	//Updates the quantity of items stored in the data base, closes the gui an opens Display
private: System::Void shipButton_Click(System::Object^ sender, System::EventArgs^ e) {
	//
	//TODO: Add update database code
	//
	*thisXPushed = false; //Tells the driver program that the gui was not closed
	*thisGui = 4; //Sets gui to open Display
	this->Close(); //Closes this gui
}
    //Initalizing the gui with the values from the data base
private: System::Void Ship_VisibleChanged(System::Object^ sender, System::EventArgs^ e) {
	//
	//TODO: Add initalization code
	//
}
};
}
