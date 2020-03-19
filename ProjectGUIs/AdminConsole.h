#pragma once

namespace ProjectGUIs {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AdminConsole
	/// </summary>
	public ref class AdminConsole : public System::Windows::Forms::Form
	{
	public:
		AdminConsole(void)
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
		~AdminConsole()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::ListBox^ listBox1;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(134, 72);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Manage Users";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AdminConsole::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(197, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(134, 72);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Manage Warehouses";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 281);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(134, 72);
			this->button3->TabIndex = 2;
			this->button3->Text = L"View Warehouse";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Warehouses" });
			this->listBox1->Location = System::Drawing::Point(164, 109);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(167, 244);
			this->listBox1->TabIndex = 3;
			// 
			// AdminConsole
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(343, 365);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"AdminConsole";
			this->Text = L"AdminConsole";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
