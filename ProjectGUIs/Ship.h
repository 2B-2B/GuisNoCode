#pragma once

namespace ProjectGUIs {

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
	public:
		Ship(void)
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
		~Ship()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ backButton;
	protected:
	private: System::Windows::Forms::Button^ orderButton;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ _AmmountDisplay;
	private: System::Windows::Forms::NumericUpDown^ _OrderAmmont;
	private: System::Windows::Forms::Label^ __Label;

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
			this->backButton = (gcnew System::Windows::Forms::Button());
			this->orderButton = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->_AmmountDisplay = (gcnew System::Windows::Forms::TextBox());
			this->_OrderAmmont = (gcnew System::Windows::Forms::NumericUpDown());
			this->__Label = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_OrderAmmont))->BeginInit();
			this->SuspendLayout();
			// 
			// backButton
			// 
			this->backButton->Location = System::Drawing::Point(186, 229);
			this->backButton->Name = L"backButton";
			this->backButton->Size = System::Drawing::Size(99, 37);
			this->backButton->TabIndex = 27;
			this->backButton->Text = L"Back";
			this->backButton->UseVisualStyleBackColor = true;
			// 
			// orderButton
			// 
			this->orderButton->Location = System::Drawing::Point(12, 229);
			this->orderButton->Name = L"orderButton";
			this->orderButton->Size = System::Drawing::Size(99, 37);
			this->orderButton->TabIndex = 26;
			this->orderButton->Text = L"Order";
			this->orderButton->UseVisualStyleBackColor = true;
			// 
			// textBox3
			// 
			this->textBox3->HideSelection = false;
			this->textBox3->Location = System::Drawing::Point(93, 164);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(33, 26);
			this->textBox3->TabIndex = 25;
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(159, 165);
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(120, 26);
			this->numericUpDown3->TabIndex = 24;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 165);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(61, 20);
			this->label3->TabIndex = 23;
			this->label3->Text = L"Thing 1";
			// 
			// textBox2
			// 
			this->textBox2->HideSelection = false;
			this->textBox2->Location = System::Drawing::Point(93, 113);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(33, 26);
			this->textBox2->TabIndex = 22;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(159, 114);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(120, 26);
			this->numericUpDown2->TabIndex = 21;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 114);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 20);
			this->label2->TabIndex = 20;
			this->label2->Text = L"Thing 1";
			// 
			// textBox1
			// 
			this->textBox1->HideSelection = false;
			this->textBox1->Location = System::Drawing::Point(93, 59);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(33, 26);
			this->textBox1->TabIndex = 19;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(159, 60);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 26);
			this->numericUpDown1->TabIndex = 18;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 60);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(61, 20);
			this->label1->TabIndex = 17;
			this->label1->Text = L"Thing 1";
			// 
			// _AmmountDisplay
			// 
			this->_AmmountDisplay->HideSelection = false;
			this->_AmmountDisplay->Location = System::Drawing::Point(93, 8);
			this->_AmmountDisplay->Name = L"_AmmountDisplay";
			this->_AmmountDisplay->ReadOnly = true;
			this->_AmmountDisplay->Size = System::Drawing::Size(33, 26);
			this->_AmmountDisplay->TabIndex = 16;
			// 
			// _OrderAmmont
			// 
			this->_OrderAmmont->Location = System::Drawing::Point(160, 9);
			this->_OrderAmmont->Name = L"_OrderAmmont";
			this->_OrderAmmont->Size = System::Drawing::Size(120, 26);
			this->_OrderAmmont->TabIndex = 15;
			// 
			// __Label
			// 
			this->__Label->AutoSize = true;
			this->__Label->Location = System::Drawing::Point(12, 9);
			this->__Label->Name = L"__Label";
			this->__Label->Size = System::Drawing::Size(61, 20);
			this->__Label->TabIndex = 14;
			this->__Label->Text = L"Thing 1";
			// 
			// Ship
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(295, 273);
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
			this->Name = L"Ship";
			this->Text = L"Ship";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->_OrderAmmont))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
