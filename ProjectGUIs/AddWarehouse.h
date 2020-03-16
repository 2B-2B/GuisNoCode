#pragma once

namespace ProjectGUIs {

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
	public:
		AddWarehouse(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
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
	private: System::Windows::Forms::Label^ addresLabel;
	private: System::Windows::Forms::TextBox^ addresTextBox;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ postalCodeTextBox;
	private: System::Windows::Forms::Button^ addUserButton;
	private: System::Windows::Forms::Button^ backButton;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ cityLabel;
	private: System::Windows::Forms::TextBox^ cityTextBox;



	protected:

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
			this->addresLabel = (gcnew System::Windows::Forms::Label());
			this->addresTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->postalCodeTextBox = (gcnew System::Windows::Forms::TextBox());
			this->addUserButton = (gcnew System::Windows::Forms::Button());
			this->backButton = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->cityLabel = (gcnew System::Windows::Forms::Label());
			this->cityTextBox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// addresLabel
			// 
			this->addresLabel->AutoSize = true;
			this->addresLabel->Location = System::Drawing::Point(16, 106);
			this->addresLabel->Name = L"addresLabel";
			this->addresLabel->Size = System::Drawing::Size(60, 20);
			this->addresLabel->TabIndex = 0;
			this->addresLabel->Text = L"Addres";
			this->addresLabel->Click += gcnew System::EventHandler(this, &AddWarehouse::label1_Click);
			// 
			// addresTextBox
			// 
			this->addresTextBox->Location = System::Drawing::Point(128, 106);
			this->addresTextBox->Name = L"addresTextBox";
			this->addresTextBox->Size = System::Drawing::Size(206, 26);
			this->addresTextBox->TabIndex = 1;
			this->addresTextBox->TextChanged += gcnew System::EventHandler(this, &AddWarehouse::addresTextBox_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 150);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(95, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Postal Code";
			this->label1->Click += gcnew System::EventHandler(this, &AddWarehouse::label1_Click_1);
			// 
			// postalCodeTextBox
			// 
			this->postalCodeTextBox->Location = System::Drawing::Point(128, 150);
			this->postalCodeTextBox->Name = L"postalCodeTextBox";
			this->postalCodeTextBox->Size = System::Drawing::Size(206, 26);
			this->postalCodeTextBox->TabIndex = 3;
			this->postalCodeTextBox->TextChanged += gcnew System::EventHandler(this, &AddWarehouse::postalCodeTextBox_TextChanged);
			// 
			// addUserButton
			// 
			this->addUserButton->Location = System::Drawing::Point(239, 191);
			this->addUserButton->Name = L"addUserButton";
			this->addUserButton->Size = System::Drawing::Size(95, 37);
			this->addUserButton->TabIndex = 9;
			this->addUserButton->Text = L"Add";
			this->addUserButton->UseVisualStyleBackColor = true;
			// 
			// backButton
			// 
			this->backButton->Location = System::Drawing::Point(12, 191);
			this->backButton->Name = L"backButton";
			this->backButton->Size = System::Drawing::Size(95, 37);
			this->backButton->TabIndex = 8;
			this->backButton->Text = L"Back";
			this->backButton->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 22);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 20);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Province";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(13) {
				L"ON", L"NL", L"PE", L"NS", L"NB", L"QC", L"MB",
					L"SK", L"AB", L"BC", L"YT", L"NQ", L"NU"
			});
			this->comboBox1->Location = System::Drawing::Point(128, 22);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(206, 28);
			this->comboBox1->TabIndex = 11;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &AddWarehouse::comboBox1_SelectedIndexChanged);
			// 
			// cityLabel
			// 
			this->cityLabel->AutoSize = true;
			this->cityLabel->Location = System::Drawing::Point(16, 65);
			this->cityLabel->Name = L"cityLabel";
			this->cityLabel->Size = System::Drawing::Size(35, 20);
			this->cityLabel->TabIndex = 12;
			this->cityLabel->Text = L"City";
			// 
			// cityTextBox
			// 
			this->cityTextBox->Location = System::Drawing::Point(128, 65);
			this->cityTextBox->Name = L"cityTextBox";
			this->cityTextBox->Size = System::Drawing::Size(206, 26);
			this->cityTextBox->TabIndex = 13;
			// 
			// AddWarehouse
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(346, 240);
			this->Controls->Add(this->cityTextBox);
			this->Controls->Add(this->cityLabel);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->addUserButton);
			this->Controls->Add(this->backButton);
			this->Controls->Add(this->postalCodeTextBox);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->addresTextBox);
			this->Controls->Add(this->addresLabel);
			this->Name = L"AddWarehouse";
			this->Text = L"AddWarehouse";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void addresTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void postalCodeTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
