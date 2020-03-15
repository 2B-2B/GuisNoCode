#pragma once

namespace ProjectGUIs {

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
	public:
		ManageUsers(void)
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
		~ManageUsers()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ listOfUsers;
	private: System::Windows::Forms::Button^ addUserButton;
	private: System::Windows::Forms::Button^ removeUserButton;
	private: System::Windows::Forms::Button^ backButton;



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
			this->listOfUsers = (gcnew System::Windows::Forms::ListBox());
			this->addUserButton = (gcnew System::Windows::Forms::Button());
			this->removeUserButton = (gcnew System::Windows::Forms::Button());
			this->backButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// listOfUsers
			// 
			this->listOfUsers->FormattingEnabled = true;
			this->listOfUsers->ItemHeight = 20;
			this->listOfUsers->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Test 1", L"Test 2", L"Test 3" });
			this->listOfUsers->Location = System::Drawing::Point(12, 12);
			this->listOfUsers->Name = L"listOfUsers";
			this->listOfUsers->ScrollAlwaysVisible = true;
			this->listOfUsers->Size = System::Drawing::Size(246, 384);
			this->listOfUsers->TabIndex = 0;
			this->listOfUsers->SelectedIndexChanged += gcnew System::EventHandler(this, &ManageUsers::listBox1_SelectedIndexChanged);
			// 
			// addUserButton
			// 
			this->addUserButton->Location = System::Drawing::Point(277, 24);
			this->addUserButton->Name = L"addUserButton";
			this->addUserButton->Size = System::Drawing::Size(115, 57);
			this->addUserButton->TabIndex = 1;
			this->addUserButton->Text = L"Add";
			this->addUserButton->UseVisualStyleBackColor = true;
			this->addUserButton->Click += gcnew System::EventHandler(this, &ManageUsers::button1_Click);
			// 
			// removeUserButton
			// 
			this->removeUserButton->Location = System::Drawing::Point(277, 127);
			this->removeUserButton->Name = L"removeUserButton";
			this->removeUserButton->Size = System::Drawing::Size(115, 57);
			this->removeUserButton->TabIndex = 2;
			this->removeUserButton->Text = L"Remove";
			this->removeUserButton->UseVisualStyleBackColor = true;
			// 
			// backButton
			// 
			this->backButton->Location = System::Drawing::Point(277, 339);
			this->backButton->Name = L"backButton";
			this->backButton->Size = System::Drawing::Size(115, 57);
			this->backButton->TabIndex = 3;
			this->backButton->Text = L"Back";
			this->backButton->UseVisualStyleBackColor = true;
			// 
			// ManageUsers
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(404, 413);
			this->Controls->Add(this->backButton);
			this->Controls->Add(this->removeUserButton);
			this->Controls->Add(this->addUserButton);
			this->Controls->Add(this->listOfUsers);
			this->Name = L"ManageUsers";
			this->Text = L"ManageUsers";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
