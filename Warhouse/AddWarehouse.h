#pragma once

#include <msclr\marshal_cppstd.h>
#include <fstream>

namespace Warhouse {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddWarehouse
	/// </summary>
	public ref class AddWarehouse : public System::Windows::Forms::Form
	{
		//Variable declaration
		int* thisGui = nullptr;
		bool* thisXPushed = nullptr;
	public:
		AddWarehouse(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		AddWarehouse(int* gui, bool* xPushed)
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
		~AddWarehouse()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ provinceLabel;
	private: System::Windows::Forms::Label^ cityLabel;
	private: System::Windows::Forms::Label^ addresLabel;
	private: System::Windows::Forms::Label^ postalCodeLabel;
	private: System::Windows::Forms::TextBox^ cityTextBox;
	private: System::Windows::Forms::TextBox^ addresTextBox;
	private: System::Windows::Forms::TextBox^ postalCodeTextBox;
	private: System::Windows::Forms::ComboBox^ provinceComboBox;
	private: System::Windows::Forms::Button^ backButton;
	private: System::Windows::Forms::Button^ addButton;
	protected:




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
			this->provinceLabel = (gcnew System::Windows::Forms::Label());
			this->cityLabel = (gcnew System::Windows::Forms::Label());
			this->addresLabel = (gcnew System::Windows::Forms::Label());
			this->postalCodeLabel = (gcnew System::Windows::Forms::Label());
			this->cityTextBox = (gcnew System::Windows::Forms::TextBox());
			this->addresTextBox = (gcnew System::Windows::Forms::TextBox());
			this->postalCodeTextBox = (gcnew System::Windows::Forms::TextBox());
			this->provinceComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->backButton = (gcnew System::Windows::Forms::Button());
			this->addButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// provinceLabel
			// 
			this->provinceLabel->AutoSize = true;
			this->provinceLabel->Location = System::Drawing::Point(12, 9);
			this->provinceLabel->Name = L"provinceLabel";
			this->provinceLabel->Size = System::Drawing::Size(69, 20);
			this->provinceLabel->TabIndex = 0;
			this->provinceLabel->Text = L"Province";
			// 
			// cityLabel
			// 
			this->cityLabel->AutoSize = true;
			this->cityLabel->Location = System::Drawing::Point(12, 55);
			this->cityLabel->Name = L"cityLabel";
			this->cityLabel->Size = System::Drawing::Size(35, 20);
			this->cityLabel->TabIndex = 1;
			this->cityLabel->Text = L"City";
			// 
			// addresLabel
			// 
			this->addresLabel->AutoSize = true;
			this->addresLabel->Location = System::Drawing::Point(12, 105);
			this->addresLabel->Name = L"addresLabel";
			this->addresLabel->Size = System::Drawing::Size(60, 20);
			this->addresLabel->TabIndex = 2;
			this->addresLabel->Text = L"Addres";
			// 
			// postalCodeLabel
			// 
			this->postalCodeLabel->AutoSize = true;
			this->postalCodeLabel->Location = System::Drawing::Point(12, 152);
			this->postalCodeLabel->Name = L"postalCodeLabel";
			this->postalCodeLabel->Size = System::Drawing::Size(95, 20);
			this->postalCodeLabel->TabIndex = 3;
			this->postalCodeLabel->Text = L"Postal Code";
			// 
			// cityTextBox
			// 
			this->cityTextBox->Location = System::Drawing::Point(140, 55);
			this->cityTextBox->Name = L"cityTextBox";
			this->cityTextBox->Size = System::Drawing::Size(169, 26);
			this->cityTextBox->TabIndex = 4;
			// 
			// addresTextBox
			// 
			this->addresTextBox->Location = System::Drawing::Point(140, 105);
			this->addresTextBox->Name = L"addresTextBox";
			this->addresTextBox->Size = System::Drawing::Size(169, 26);
			this->addresTextBox->TabIndex = 5;
			// 
			// postalCodeTextBox
			// 
			this->postalCodeTextBox->Location = System::Drawing::Point(140, 152);
			this->postalCodeTextBox->Name = L"postalCodeTextBox";
			this->postalCodeTextBox->Size = System::Drawing::Size(169, 26);
			this->postalCodeTextBox->TabIndex = 6;
			// 
			// provinceComboBox
			// 
			this->provinceComboBox->FormattingEnabled = true;
			this->provinceComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(13) {
				L"ON", L"NL", L"PE", L"NS", L"NB", L"QC",
					L"MB", L"SK", L"AB", L"BC", L"YT", L"NQ", L"NU"
			});
			this->provinceComboBox->Location = System::Drawing::Point(140, 9);
			this->provinceComboBox->Name = L"provinceComboBox";
			this->provinceComboBox->Size = System::Drawing::Size(169, 28);
			this->provinceComboBox->TabIndex = 7;
			// 
			// backButton
			// 
			this->backButton->Location = System::Drawing::Point(12, 195);
			this->backButton->Name = L"backButton";
			this->backButton->Size = System::Drawing::Size(117, 37);
			this->backButton->TabIndex = 8;
			this->backButton->Text = L"Back";
			this->backButton->UseVisualStyleBackColor = true;
			this->backButton->Click += gcnew System::EventHandler(this, &AddWarehouse::backButton_Click);
			// 
			// addButton
			// 
			this->addButton->Location = System::Drawing::Point(192, 195);
			this->addButton->Name = L"addButton";
			this->addButton->Size = System::Drawing::Size(117, 37);
			this->addButton->TabIndex = 9;
			this->addButton->Text = L"Add";
			this->addButton->UseVisualStyleBackColor = true;
			this->addButton->Click += gcnew System::EventHandler(this, &AddWarehouse::addButton_Click);
			// 
			// AddWarehouse
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(321, 245);
			this->Controls->Add(this->addButton);
			this->Controls->Add(this->backButton);
			this->Controls->Add(this->provinceComboBox);
			this->Controls->Add(this->postalCodeTextBox);
			this->Controls->Add(this->addresTextBox);
			this->Controls->Add(this->cityTextBox);
			this->Controls->Add(this->postalCodeLabel);
			this->Controls->Add(this->addresLabel);
			this->Controls->Add(this->cityLabel);
			this->Controls->Add(this->provinceLabel);
			this->Name = L"AddWarehouse";
			this->Text = L"AddWarehouse";
			this->VisibleChanged += gcnew System::EventHandler(this, &AddWarehouse::AddWarehouse_VisibleChanged);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//Closes the gui and goes to the previus gui 
private: System::Void backButton_Click(System::Object^ sender, System::EventArgs^ e) {
	*thisXPushed = false; //Tells the driver program that the gui was not closed
	*thisGui = 7; //Sets gui to open ManageWarehouses
	this->Close(); //Closes this gui
}
	    //Adds the warehouse to the database, closes the gui and goes to the previus gui 
private: System::Void addButton_Click(System::Object^ sender, System::EventArgs^ e) {
	//appends the new warehouse to the text file
	std::ofstream warehouseList;
	msclr::interop::marshal_context context;

	//Opens the required text files
	warehouseList.open("WarehouseInventory.txt", std::ios::app);

	//Gets the entered data from the gui
	System::String^ province = this->provinceComboBox->Text;
	std::string provinceString = context.marshal_as<std::string>(province);
	System::String^ city = this->cityTextBox->Text;
	std::string cityString = context.marshal_as<std::string>(city);
	System::String^ adress = this->addresTextBox->Text;
	std::string adressString = context.marshal_as<std::string>(adress);
	System::String^ postalCode = this->postalCodeTextBox->Text;
	std::string postalCodeString = context.marshal_as<std::string>(postalCode);

	//Appends the new warehouse to the users text file
	warehouseList << "\n" << adressString << "," << cityString << "," << provinceString << "," << postalCodeString;
	warehouseList.close();

	*thisXPushed = false; //Tells the driver program that the gui was not closed
	*thisGui = 7; //Closes this gui
	this->Close();
}
	    //Initalizing the gui with the values from the data base
private: System::Void AddWarehouse_VisibleChanged(System::Object^ sender, System::EventArgs^ e) {
	//
	//TODO: Add initalization code
	//
}
};
}
