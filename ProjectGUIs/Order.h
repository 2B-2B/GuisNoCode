#pragma once

namespace ProjectGUIs {

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
	public:
		Order(void)
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
		~Order()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ __Label;
	protected:
	private: System::Windows::Forms::NumericUpDown^ _OrderAmmont;
	private: System::Windows::Forms::TextBox^ _AmmountDisplay;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ orderButton;
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
			this->__Label = (gcnew System::Windows::Forms::Label());
			this->_OrderAmmont = (gcnew System::Windows::Forms::NumericUpDown());
			this->_AmmountDisplay = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->orderButton = (gcnew System::Windows::Forms::Button());
			this->backButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_OrderAmmont))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			this->SuspendLayout();
			// 
			// __Label
			// 
			this->__Label->AutoSize = true;
			this->__Label->Location = System::Drawing::Point(13, 13);
			this->__Label->Name = L"__Label";
			this->__Label->Size = System::Drawing::Size(61, 20);
			this->__Label->TabIndex = 0;
			this->__Label->Text = L"Thing 1";
			this->__Label->Click += gcnew System::EventHandler(this, &Order::__Label_Click);
			// 
			// _OrderAmmont
			// 
			this->_OrderAmmont->Location = System::Drawing::Point(160, 13);
			this->_OrderAmmont->Name = L"_OrderAmmont";
			this->_OrderAmmont->Size = System::Drawing::Size(120, 26);
			this->_OrderAmmont->TabIndex = 1;
			this->_OrderAmmont->ValueChanged += gcnew System::EventHandler(this, &Order::_OrderAmmont_ValueChanged);
			// 
			// _AmmountDisplay
			// 
			this->_AmmountDisplay->HideSelection = false;
			this->_AmmountDisplay->Location = System::Drawing::Point(94, 12);
			this->_AmmountDisplay->Name = L"_AmmountDisplay";
			this->_AmmountDisplay->ReadOnly = true;
			this->_AmmountDisplay->Size = System::Drawing::Size(33, 26);
			this->_AmmountDisplay->TabIndex = 2;
			this->_AmmountDisplay->TextChanged += gcnew System::EventHandler(this, &Order::_AmmountDisplay_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->HideSelection = false;
			this->textBox1->Location = System::Drawing::Point(94, 63);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(33, 26);
			this->textBox1->TabIndex = 5;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Order::textBox1_TextChanged);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(160, 64);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 26);
			this->numericUpDown1->TabIndex = 4;
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &Order::numericUpDown1_ValueChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 64);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(61, 20);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Thing 1";
			this->label1->Click += gcnew System::EventHandler(this, &Order::label1_Click);
			// 
			// textBox2
			// 
			this->textBox2->HideSelection = false;
			this->textBox2->Location = System::Drawing::Point(94, 117);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(33, 26);
			this->textBox2->TabIndex = 8;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Order::textBox2_TextChanged);
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(160, 118);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(120, 26);
			this->numericUpDown2->TabIndex = 7;
			this->numericUpDown2->ValueChanged += gcnew System::EventHandler(this, &Order::numericUpDown2_ValueChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 118);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 20);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Thing 1";
			this->label2->Click += gcnew System::EventHandler(this, &Order::label2_Click);
			// 
			// textBox3
			// 
			this->textBox3->HideSelection = false;
			this->textBox3->Location = System::Drawing::Point(94, 168);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(33, 26);
			this->textBox3->TabIndex = 11;
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(160, 169);
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(120, 26);
			this->numericUpDown3->TabIndex = 10;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 169);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(61, 20);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Thing 1";
			this->label3->Click += gcnew System::EventHandler(this, &Order::label3_Click);
			// 
			// orderButton
			// 
			this->orderButton->Location = System::Drawing::Point(13, 233);
			this->orderButton->Name = L"orderButton";
			this->orderButton->Size = System::Drawing::Size(99, 37);
			this->orderButton->TabIndex = 12;
			this->orderButton->Text = L"Order";
			this->orderButton->UseVisualStyleBackColor = true;
			this->orderButton->Click += gcnew System::EventHandler(this, &Order::button1_Click);
			// 
			// backButton
			// 
			this->backButton->Location = System::Drawing::Point(187, 233);
			this->backButton->Name = L"backButton";
			this->backButton->Size = System::Drawing::Size(99, 37);
			this->backButton->TabIndex = 13;
			this->backButton->Text = L"Back";
			this->backButton->UseVisualStyleBackColor = true;
			// 
			// Order
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(298, 282);
			this->Controls->Add(this->backButton);
			this->Controls->Add(this->orderButton);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->numericUpDown3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->_AmmountDisplay);
			this->Controls->Add(this->_OrderAmmont);
			this->Controls->Add(this->__Label);
			this->Name = L"Order";
			this->Text = L"Order";
			this->Load += gcnew System::EventHandler(this, &Order::Order_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_OrderAmmont))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void _OrderAmmont_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void _AmmountDisplay_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void __Label_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void numericUpDown2_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Order_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
