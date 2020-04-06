#pragma once

namespace Warhouse {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Order
	/// </summary>
	public ref class Order : public System::Windows::Forms::Form
	{
		//Variable declaration
		int* thisGui = nullptr;
	private: System::Windows::Forms::NumericUpDown^ woodTypeFourSpinner;
	private: System::Windows::Forms::TextBox^ woodTypeFourAmmountDisplayTextBox;
	private: System::Windows::Forms::ComboBox^ woodTypeOneComboBox;
	private: System::Windows::Forms::ComboBox^ woodTypeTwoComboBox;
	private: System::Windows::Forms::ComboBox^ woodTypeThreeComboBox;
	private: System::Windows::Forms::ComboBox^ woodTypeFourComboBox;
	private: System::Windows::Forms::ListBox^ orderDisplayListBox;
		   bool* thisXPushed = nullptr;
	public:
		Order(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Order(int* gui, bool* xPushed)
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
		~Order()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private: System::Windows::Forms::NumericUpDown^ woodTypeOneSpinner;
	private: System::Windows::Forms::NumericUpDown^ woodTypeTwoSpinner;
	private: System::Windows::Forms::NumericUpDown^ woodTypeThreeSpinner;
	private: System::Windows::Forms::Button^ cancelButton;
	private: System::Windows::Forms::Button^ orderButton;
	private: System::Windows::Forms::TextBox^ woodTypeOneAmmountDisplayTextBox;
	private: System::Windows::Forms::TextBox^ woodTypeThreeAmmountDisplayTextBox;
	private: System::Windows::Forms::TextBox^ woodTypeTwoAmmountDisplayTextBox;

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
			this->woodTypeOneSpinner = (gcnew System::Windows::Forms::NumericUpDown());
			this->woodTypeTwoSpinner = (gcnew System::Windows::Forms::NumericUpDown());
			this->woodTypeThreeSpinner = (gcnew System::Windows::Forms::NumericUpDown());
			this->cancelButton = (gcnew System::Windows::Forms::Button());
			this->orderButton = (gcnew System::Windows::Forms::Button());
			this->woodTypeOneAmmountDisplayTextBox = (gcnew System::Windows::Forms::TextBox());
			this->woodTypeThreeAmmountDisplayTextBox = (gcnew System::Windows::Forms::TextBox());
			this->woodTypeTwoAmmountDisplayTextBox = (gcnew System::Windows::Forms::TextBox());
			this->woodTypeFourSpinner = (gcnew System::Windows::Forms::NumericUpDown());
			this->woodTypeFourAmmountDisplayTextBox = (gcnew System::Windows::Forms::TextBox());
			this->woodTypeOneComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->woodTypeTwoComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->woodTypeThreeComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->woodTypeFourComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->orderDisplayListBox = (gcnew System::Windows::Forms::ListBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->woodTypeOneSpinner))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->woodTypeTwoSpinner))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->woodTypeThreeSpinner))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->woodTypeFourSpinner))->BeginInit();
			this->SuspendLayout();
			// 
			// woodTypeOneSpinner
			// 
			this->woodTypeOneSpinner->Location = System::Drawing::Point(268, 7);
			this->woodTypeOneSpinner->Name = L"woodTypeOneSpinner";
			this->woodTypeOneSpinner->Size = System::Drawing::Size(174, 26);
			this->woodTypeOneSpinner->TabIndex = 3;
			// 
			// woodTypeTwoSpinner
			// 
			this->woodTypeTwoSpinner->Location = System::Drawing::Point(268, 52);
			this->woodTypeTwoSpinner->Name = L"woodTypeTwoSpinner";
			this->woodTypeTwoSpinner->Size = System::Drawing::Size(174, 26);
			this->woodTypeTwoSpinner->TabIndex = 4;
			// 
			// woodTypeThreeSpinner
			// 
			this->woodTypeThreeSpinner->Location = System::Drawing::Point(268, 96);
			this->woodTypeThreeSpinner->Name = L"woodTypeThreeSpinner";
			this->woodTypeThreeSpinner->Size = System::Drawing::Size(174, 26);
			this->woodTypeThreeSpinner->TabIndex = 5;
			// 
			// cancelButton
			// 
			this->cancelButton->Location = System::Drawing::Point(12, 470);
			this->cancelButton->Name = L"cancelButton";
			this->cancelButton->Size = System::Drawing::Size(185, 77);
			this->cancelButton->TabIndex = 6;
			this->cancelButton->Text = L"Cancel";
			this->cancelButton->UseVisualStyleBackColor = true;
			this->cancelButton->Click += gcnew System::EventHandler(this, &Order::cancelButton_Click);
			// 
			// orderButton
			// 
			this->orderButton->Location = System::Drawing::Point(263, 470);
			this->orderButton->Name = L"orderButton";
			this->orderButton->Size = System::Drawing::Size(179, 77);
			this->orderButton->TabIndex = 7;
			this->orderButton->Text = L"Order";
			this->orderButton->UseVisualStyleBackColor = true;
			this->orderButton->Click += gcnew System::EventHandler(this, &Order::orderButton_Click);
			// 
			// woodTypeOneAmmountDisplayTextBox
			// 
			this->woodTypeOneAmmountDisplayTextBox->Location = System::Drawing::Point(179, 9);
			this->woodTypeOneAmmountDisplayTextBox->Name = L"woodTypeOneAmmountDisplayTextBox";
			this->woodTypeOneAmmountDisplayTextBox->ReadOnly = true;
			this->woodTypeOneAmmountDisplayTextBox->Size = System::Drawing::Size(50, 26);
			this->woodTypeOneAmmountDisplayTextBox->TabIndex = 8;
			// 
			// woodTypeThreeAmmountDisplayTextBox
			// 
			this->woodTypeThreeAmmountDisplayTextBox->Location = System::Drawing::Point(179, 96);
			this->woodTypeThreeAmmountDisplayTextBox->Name = L"woodTypeThreeAmmountDisplayTextBox";
			this->woodTypeThreeAmmountDisplayTextBox->ReadOnly = true;
			this->woodTypeThreeAmmountDisplayTextBox->Size = System::Drawing::Size(50, 26);
			this->woodTypeThreeAmmountDisplayTextBox->TabIndex = 9;
			// 
			// woodTypeTwoAmmountDisplayTextBox
			// 
			this->woodTypeTwoAmmountDisplayTextBox->Location = System::Drawing::Point(179, 54);
			this->woodTypeTwoAmmountDisplayTextBox->Name = L"woodTypeTwoAmmountDisplayTextBox";
			this->woodTypeTwoAmmountDisplayTextBox->ReadOnly = true;
			this->woodTypeTwoAmmountDisplayTextBox->Size = System::Drawing::Size(50, 26);
			this->woodTypeTwoAmmountDisplayTextBox->TabIndex = 10;
			// 
			// woodTypeFourSpinner
			// 
			this->woodTypeFourSpinner->Location = System::Drawing::Point(268, 145);
			this->woodTypeFourSpinner->Name = L"woodTypeFourSpinner";
			this->woodTypeFourSpinner->Size = System::Drawing::Size(174, 26);
			this->woodTypeFourSpinner->TabIndex = 11;
			// 
			// woodTypeFourAmmountDisplayTextBox
			// 
			this->woodTypeFourAmmountDisplayTextBox->Location = System::Drawing::Point(179, 144);
			this->woodTypeFourAmmountDisplayTextBox->Name = L"woodTypeFourAmmountDisplayTextBox";
			this->woodTypeFourAmmountDisplayTextBox->ReadOnly = true;
			this->woodTypeFourAmmountDisplayTextBox->Size = System::Drawing::Size(50, 26);
			this->woodTypeFourAmmountDisplayTextBox->TabIndex = 12;
			// 
			// woodTypeOneComboBox
			// 
			this->woodTypeOneComboBox->FormattingEnabled = true;
			this->woodTypeOneComboBox->Location = System::Drawing::Point(12, 9);
			this->woodTypeOneComboBox->Name = L"woodTypeOneComboBox";
			this->woodTypeOneComboBox->Size = System::Drawing::Size(143, 28);
			this->woodTypeOneComboBox->TabIndex = 13;
			// 
			// woodTypeTwoComboBox
			// 
			this->woodTypeTwoComboBox->FormattingEnabled = true;
			this->woodTypeTwoComboBox->Location = System::Drawing::Point(12, 54);
			this->woodTypeTwoComboBox->Name = L"woodTypeTwoComboBox";
			this->woodTypeTwoComboBox->Size = System::Drawing::Size(143, 28);
			this->woodTypeTwoComboBox->TabIndex = 14;
			// 
			// woodTypeThreeComboBox
			// 
			this->woodTypeThreeComboBox->FormattingEnabled = true;
			this->woodTypeThreeComboBox->Location = System::Drawing::Point(12, 96);
			this->woodTypeThreeComboBox->Name = L"woodTypeThreeComboBox";
			this->woodTypeThreeComboBox->Size = System::Drawing::Size(143, 28);
			this->woodTypeThreeComboBox->TabIndex = 15;
			// 
			// woodTypeFourComboBox
			// 
			this->woodTypeFourComboBox->FormattingEnabled = true;
			this->woodTypeFourComboBox->Location = System::Drawing::Point(12, 142);
			this->woodTypeFourComboBox->Name = L"woodTypeFourComboBox";
			this->woodTypeFourComboBox->Size = System::Drawing::Size(143, 28);
			this->woodTypeFourComboBox->TabIndex = 16;
			// 
			// orderDisplayListBox
			// 
			this->orderDisplayListBox->FormattingEnabled = true;
			this->orderDisplayListBox->ItemHeight = 20;
			this->orderDisplayListBox->Location = System::Drawing::Point(12, 197);
			this->orderDisplayListBox->Name = L"orderDisplayListBox";
			this->orderDisplayListBox->Size = System::Drawing::Size(430, 244);
			this->orderDisplayListBox->TabIndex = 17;
			// 
			// Order
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(454, 559);
			this->Controls->Add(this->orderDisplayListBox);
			this->Controls->Add(this->woodTypeFourComboBox);
			this->Controls->Add(this->woodTypeThreeComboBox);
			this->Controls->Add(this->woodTypeTwoComboBox);
			this->Controls->Add(this->woodTypeOneComboBox);
			this->Controls->Add(this->woodTypeFourAmmountDisplayTextBox);
			this->Controls->Add(this->woodTypeFourSpinner);
			this->Controls->Add(this->woodTypeTwoAmmountDisplayTextBox);
			this->Controls->Add(this->woodTypeThreeAmmountDisplayTextBox);
			this->Controls->Add(this->woodTypeOneAmmountDisplayTextBox);
			this->Controls->Add(this->orderButton);
			this->Controls->Add(this->cancelButton);
			this->Controls->Add(this->woodTypeThreeSpinner);
			this->Controls->Add(this->woodTypeTwoSpinner);
			this->Controls->Add(this->woodTypeOneSpinner);
			this->Name = L"Order";
			this->Text = L"Order";
			this->Load += gcnew System::EventHandler(this, &Order::Order_Load);
			this->VisibleChanged += gcnew System::EventHandler(this, &Order::Order_VisibleChanged);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->woodTypeOneSpinner))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->woodTypeTwoSpinner))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->woodTypeThreeSpinner))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->woodTypeFourSpinner))->EndInit();
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
private: System::Void orderButton_Click(System::Object^ sender, System::EventArgs^ e) {
	//
	//TODO: Add update database code
	//
	*thisXPushed = false; //Tells the driver program that the gui was not closed
	*thisGui = 4; //Sets gui to open Display
	this->Close(); //Closes this gui
}
    //Initalizing the gui with the values from the data base
private: System::Void Order_VisibleChanged(System::Object^ sender, System::EventArgs^ e) {
	//
	//TODO: Add initalization code
	//
}
};
}
