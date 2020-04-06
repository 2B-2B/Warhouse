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
	private: System::Windows::Forms::ListBox^ shipDisplayListBox;
	private: System::Windows::Forms::ComboBox^ woodTypeFourComboBox;
	private: System::Windows::Forms::ComboBox^ woodTypeThreeComboBox;
	private: System::Windows::Forms::ComboBox^ woodTypeTwoComboBox;
	private: System::Windows::Forms::ComboBox^ woodTypeOneComboBox;
	private: System::Windows::Forms::TextBox^ woodTypeFourAmmountDisplayTextBox;
	private: System::Windows::Forms::NumericUpDown^ woodTypeFourSpinner;
	private: System::Windows::Forms::TextBox^ woodTypeTwoAmmountDisplayTextBox;
	private: System::Windows::Forms::TextBox^ woodTypeThreeAmmountDisplayTextBox;
	private: System::Windows::Forms::TextBox^ woodTypeOneAmmountDisplayTextBox;
	private: System::Windows::Forms::NumericUpDown^ woodTypeThreeSpinner;
	private: System::Windows::Forms::NumericUpDown^ woodTypeTwoSpinner;
	private: System::Windows::Forms::NumericUpDown^ woodTypeOneSpinner;
	private: System::Windows::Forms::Button^ addButton;

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

	protected:


	private: System::Windows::Forms::Button^ shipButton;

	private: System::Windows::Forms::Button^ cancelButton;







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
			this->shipButton = (gcnew System::Windows::Forms::Button());
			this->cancelButton = (gcnew System::Windows::Forms::Button());
			this->shipDisplayListBox = (gcnew System::Windows::Forms::ListBox());
			this->woodTypeFourComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->woodTypeThreeComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->woodTypeTwoComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->woodTypeOneComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->woodTypeFourAmmountDisplayTextBox = (gcnew System::Windows::Forms::TextBox());
			this->woodTypeFourSpinner = (gcnew System::Windows::Forms::NumericUpDown());
			this->woodTypeTwoAmmountDisplayTextBox = (gcnew System::Windows::Forms::TextBox());
			this->woodTypeThreeAmmountDisplayTextBox = (gcnew System::Windows::Forms::TextBox());
			this->woodTypeOneAmmountDisplayTextBox = (gcnew System::Windows::Forms::TextBox());
			this->woodTypeThreeSpinner = (gcnew System::Windows::Forms::NumericUpDown());
			this->woodTypeTwoSpinner = (gcnew System::Windows::Forms::NumericUpDown());
			this->woodTypeOneSpinner = (gcnew System::Windows::Forms::NumericUpDown());
			this->addButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->woodTypeFourSpinner))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->woodTypeThreeSpinner))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->woodTypeTwoSpinner))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->woodTypeOneSpinner))->BeginInit();
			this->SuspendLayout();
			// 
			// shipButton
			// 
			this->shipButton->Location = System::Drawing::Point(350, 470);
			this->shipButton->Name = L"shipButton";
			this->shipButton->Size = System::Drawing::Size(92, 77);
			this->shipButton->TabIndex = 18;
			this->shipButton->Text = L"Ship";
			this->shipButton->UseVisualStyleBackColor = true;
			this->shipButton->Click += gcnew System::EventHandler(this, &Ship::shipButton_Click);
			// 
			// cancelButton
			// 
			this->cancelButton->Location = System::Drawing::Point(12, 470);
			this->cancelButton->Name = L"cancelButton";
			this->cancelButton->Size = System::Drawing::Size(82, 77);
			this->cancelButton->TabIndex = 17;
			this->cancelButton->Text = L"Cancel";
			this->cancelButton->UseVisualStyleBackColor = true;
			this->cancelButton->Click += gcnew System::EventHandler(this, &Ship::cancelButton_Click);
			// 
			// shipDisplayListBox
			// 
			this->shipDisplayListBox->FormattingEnabled = true;
			this->shipDisplayListBox->HorizontalScrollbar = true;
			this->shipDisplayListBox->ItemHeight = 20;
			this->shipDisplayListBox->Location = System::Drawing::Point(12, 202);
			this->shipDisplayListBox->Name = L"shipDisplayListBox";
			this->shipDisplayListBox->ScrollAlwaysVisible = true;
			this->shipDisplayListBox->Size = System::Drawing::Size(430, 244);
			this->shipDisplayListBox->TabIndex = 31;
			// 
			// woodTypeFourComboBox
			// 
			this->woodTypeFourComboBox->FormattingEnabled = true;
			this->woodTypeFourComboBox->Location = System::Drawing::Point(12, 147);
			this->woodTypeFourComboBox->Name = L"woodTypeFourComboBox";
			this->woodTypeFourComboBox->Size = System::Drawing::Size(143, 28);
			this->woodTypeFourComboBox->TabIndex = 30;
			// 
			// woodTypeThreeComboBox
			// 
			this->woodTypeThreeComboBox->FormattingEnabled = true;
			this->woodTypeThreeComboBox->Location = System::Drawing::Point(12, 101);
			this->woodTypeThreeComboBox->Name = L"woodTypeThreeComboBox";
			this->woodTypeThreeComboBox->Size = System::Drawing::Size(143, 28);
			this->woodTypeThreeComboBox->TabIndex = 29;
			// 
			// woodTypeTwoComboBox
			// 
			this->woodTypeTwoComboBox->FormattingEnabled = true;
			this->woodTypeTwoComboBox->Location = System::Drawing::Point(12, 59);
			this->woodTypeTwoComboBox->Name = L"woodTypeTwoComboBox";
			this->woodTypeTwoComboBox->Size = System::Drawing::Size(143, 28);
			this->woodTypeTwoComboBox->TabIndex = 28;
			// 
			// woodTypeOneComboBox
			// 
			this->woodTypeOneComboBox->FormattingEnabled = true;
			this->woodTypeOneComboBox->Location = System::Drawing::Point(12, 14);
			this->woodTypeOneComboBox->Name = L"woodTypeOneComboBox";
			this->woodTypeOneComboBox->Size = System::Drawing::Size(143, 28);
			this->woodTypeOneComboBox->TabIndex = 27;
			// 
			// woodTypeFourAmmountDisplayTextBox
			// 
			this->woodTypeFourAmmountDisplayTextBox->Location = System::Drawing::Point(179, 149);
			this->woodTypeFourAmmountDisplayTextBox->Name = L"woodTypeFourAmmountDisplayTextBox";
			this->woodTypeFourAmmountDisplayTextBox->ReadOnly = true;
			this->woodTypeFourAmmountDisplayTextBox->Size = System::Drawing::Size(50, 26);
			this->woodTypeFourAmmountDisplayTextBox->TabIndex = 26;
			// 
			// woodTypeFourSpinner
			// 
			this->woodTypeFourSpinner->Location = System::Drawing::Point(268, 150);
			this->woodTypeFourSpinner->Name = L"woodTypeFourSpinner";
			this->woodTypeFourSpinner->Size = System::Drawing::Size(174, 26);
			this->woodTypeFourSpinner->TabIndex = 25;
			// 
			// woodTypeTwoAmmountDisplayTextBox
			// 
			this->woodTypeTwoAmmountDisplayTextBox->Location = System::Drawing::Point(179, 59);
			this->woodTypeTwoAmmountDisplayTextBox->Name = L"woodTypeTwoAmmountDisplayTextBox";
			this->woodTypeTwoAmmountDisplayTextBox->ReadOnly = true;
			this->woodTypeTwoAmmountDisplayTextBox->Size = System::Drawing::Size(50, 26);
			this->woodTypeTwoAmmountDisplayTextBox->TabIndex = 24;
			// 
			// woodTypeThreeAmmountDisplayTextBox
			// 
			this->woodTypeThreeAmmountDisplayTextBox->Location = System::Drawing::Point(179, 101);
			this->woodTypeThreeAmmountDisplayTextBox->Name = L"woodTypeThreeAmmountDisplayTextBox";
			this->woodTypeThreeAmmountDisplayTextBox->ReadOnly = true;
			this->woodTypeThreeAmmountDisplayTextBox->Size = System::Drawing::Size(50, 26);
			this->woodTypeThreeAmmountDisplayTextBox->TabIndex = 23;
			// 
			// woodTypeOneAmmountDisplayTextBox
			// 
			this->woodTypeOneAmmountDisplayTextBox->Location = System::Drawing::Point(179, 14);
			this->woodTypeOneAmmountDisplayTextBox->Name = L"woodTypeOneAmmountDisplayTextBox";
			this->woodTypeOneAmmountDisplayTextBox->ReadOnly = true;
			this->woodTypeOneAmmountDisplayTextBox->Size = System::Drawing::Size(50, 26);
			this->woodTypeOneAmmountDisplayTextBox->TabIndex = 22;
			// 
			// woodTypeThreeSpinner
			// 
			this->woodTypeThreeSpinner->Location = System::Drawing::Point(268, 101);
			this->woodTypeThreeSpinner->Name = L"woodTypeThreeSpinner";
			this->woodTypeThreeSpinner->Size = System::Drawing::Size(174, 26);
			this->woodTypeThreeSpinner->TabIndex = 21;
			// 
			// woodTypeTwoSpinner
			// 
			this->woodTypeTwoSpinner->Location = System::Drawing::Point(268, 57);
			this->woodTypeTwoSpinner->Name = L"woodTypeTwoSpinner";
			this->woodTypeTwoSpinner->Size = System::Drawing::Size(174, 26);
			this->woodTypeTwoSpinner->TabIndex = 20;
			// 
			// woodTypeOneSpinner
			// 
			this->woodTypeOneSpinner->Location = System::Drawing::Point(268, 12);
			this->woodTypeOneSpinner->Name = L"woodTypeOneSpinner";
			this->woodTypeOneSpinner->Size = System::Drawing::Size(174, 26);
			this->woodTypeOneSpinner->TabIndex = 19;
			// 
			// addButton
			// 
			this->addButton->Location = System::Drawing::Point(100, 470);
			this->addButton->Name = L"addButton";
			this->addButton->Size = System::Drawing::Size(244, 74);
			this->addButton->TabIndex = 32;
			this->addButton->Text = L"Add to Shipment";
			this->addButton->UseVisualStyleBackColor = true;
			this->addButton->Click += gcnew System::EventHandler(this, &Ship::addButton_Click);
			// 
			// Ship
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(453, 556);
			this->Controls->Add(this->addButton);
			this->Controls->Add(this->shipDisplayListBox);
			this->Controls->Add(this->woodTypeFourComboBox);
			this->Controls->Add(this->woodTypeThreeComboBox);
			this->Controls->Add(this->woodTypeTwoComboBox);
			this->Controls->Add(this->woodTypeOneComboBox);
			this->Controls->Add(this->woodTypeFourAmmountDisplayTextBox);
			this->Controls->Add(this->woodTypeFourSpinner);
			this->Controls->Add(this->woodTypeTwoAmmountDisplayTextBox);
			this->Controls->Add(this->woodTypeThreeAmmountDisplayTextBox);
			this->Controls->Add(this->woodTypeOneAmmountDisplayTextBox);
			this->Controls->Add(this->woodTypeThreeSpinner);
			this->Controls->Add(this->woodTypeTwoSpinner);
			this->Controls->Add(this->woodTypeOneSpinner);
			this->Controls->Add(this->shipButton);
			this->Controls->Add(this->cancelButton);
			this->Name = L"Ship";
			this->Text = L"Ship";
			this->VisibleChanged += gcnew System::EventHandler(this, &Ship::Ship_VisibleChanged);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->woodTypeFourSpinner))->EndInit();
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

	   //Adds the selected wood changes to the shipment display and logs them to be changed in the text file
private: System::Void addButton_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
