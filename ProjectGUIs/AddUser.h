#pragma once

namespace ProjectGUIs {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddUser
	/// </summary>
	public ref class AddUser : public System::Windows::Forms::Form
	{
	public:
		AddUser(void)
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
		~AddUser()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ usernameLabel;
	private: System::Windows::Forms::Label^ passwordLabel;
	private: System::Windows::Forms::Label^ accessLevelLabel;
	private: System::Windows::Forms::Button^ backButton;

	protected:




	private: System::Windows::Forms::TextBox^ usernameTextBox;
	private: System::Windows::Forms::TextBox^ usernamePassword;
	private: System::Windows::Forms::Button^ addUserButton;
	private: System::Windows::Forms::RadioButton^ generalUser;
	private: System::Windows::Forms::RadioButton^ adminUser;







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
			this->usernameLabel = (gcnew System::Windows::Forms::Label());
			this->passwordLabel = (gcnew System::Windows::Forms::Label());
			this->accessLevelLabel = (gcnew System::Windows::Forms::Label());
			this->backButton = (gcnew System::Windows::Forms::Button());
			this->usernameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->usernamePassword = (gcnew System::Windows::Forms::TextBox());
			this->addUserButton = (gcnew System::Windows::Forms::Button());
			this->generalUser = (gcnew System::Windows::Forms::RadioButton());
			this->adminUser = (gcnew System::Windows::Forms::RadioButton());
			this->SuspendLayout();
			// 
			// usernameLabel
			// 
			this->usernameLabel->AutoSize = true;
			this->usernameLabel->Location = System::Drawing::Point(29, 24);
			this->usernameLabel->Name = L"usernameLabel";
			this->usernameLabel->Size = System::Drawing::Size(83, 20);
			this->usernameLabel->TabIndex = 0;
			this->usernameLabel->Text = L"Username";
			// 
			// passwordLabel
			// 
			this->passwordLabel->AutoSize = true;
			this->passwordLabel->Location = System::Drawing::Point(29, 79);
			this->passwordLabel->Name = L"passwordLabel";
			this->passwordLabel->Size = System::Drawing::Size(78, 20);
			this->passwordLabel->TabIndex = 1;
			this->passwordLabel->Text = L"Password";
			// 
			// accessLevelLabel
			// 
			this->accessLevelLabel->AutoSize = true;
			this->accessLevelLabel->Location = System::Drawing::Point(33, 157);
			this->accessLevelLabel->Name = L"accessLevelLabel";
			this->accessLevelLabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->accessLevelLabel->Size = System::Drawing::Size(102, 20);
			this->accessLevelLabel->TabIndex = 2;
			this->accessLevelLabel->Text = L"Access Level";
			// 
			// backButton
			// 
			this->backButton->Location = System::Drawing::Point(12, 217);
			this->backButton->Name = L"backButton";
			this->backButton->Size = System::Drawing::Size(95, 37);
			this->backButton->TabIndex = 3;
			this->backButton->Text = L"Back";
			this->backButton->UseVisualStyleBackColor = true;
			this->backButton->Click += gcnew System::EventHandler(this, &AddUser::backButton_Click);
			// 
			// usernameTextBox
			// 
			this->usernameTextBox->Location = System::Drawing::Point(130, 24);
			this->usernameTextBox->Name = L"usernameTextBox";
			this->usernameTextBox->Size = System::Drawing::Size(142, 26);
			this->usernameTextBox->TabIndex = 5;
			// 
			// usernamePassword
			// 
			this->usernamePassword->Location = System::Drawing::Point(130, 79);
			this->usernamePassword->Name = L"usernamePassword";
			this->usernamePassword->Size = System::Drawing::Size(142, 26);
			this->usernamePassword->TabIndex = 6;
			// 
			// addUserButton
			// 
			this->addUserButton->Location = System::Drawing::Point(177, 217);
			this->addUserButton->Name = L"addUserButton";
			this->addUserButton->Size = System::Drawing::Size(95, 37);
			this->addUserButton->TabIndex = 7;
			this->addUserButton->Text = L"Add";
			this->addUserButton->UseVisualStyleBackColor = true;
			// 
			// generalUser
			// 
			this->generalUser->AutoSize = true;
			this->generalUser->Checked = true;
			this->generalUser->Location = System::Drawing::Point(140, 135);
			this->generalUser->Name = L"generalUser";
			this->generalUser->Size = System::Drawing::Size(91, 24);
			this->generalUser->TabIndex = 8;
			this->generalUser->TabStop = true;
			this->generalUser->Text = L"General";
			this->generalUser->UseVisualStyleBackColor = true;
			this->generalUser->CheckedChanged += gcnew System::EventHandler(this, &AddUser::radioButton1_CheckedChanged);
			// 
			// adminUser
			// 
			this->adminUser->AutoSize = true;
			this->adminUser->Location = System::Drawing::Point(140, 175);
			this->adminUser->Name = L"adminUser";
			this->adminUser->Size = System::Drawing::Size(79, 24);
			this->adminUser->TabIndex = 9;
			this->adminUser->Text = L"Admin";
			this->adminUser->UseVisualStyleBackColor = true;
			// 
			// AddUser
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 266);
			this->Controls->Add(this->adminUser);
			this->Controls->Add(this->generalUser);
			this->Controls->Add(this->addUserButton);
			this->Controls->Add(this->usernamePassword);
			this->Controls->Add(this->usernameTextBox);
			this->Controls->Add(this->backButton);
			this->Controls->Add(this->accessLevelLabel);
			this->Controls->Add(this->passwordLabel);
			this->Controls->Add(this->usernameLabel);
			this->Name = L"AddUser";
			this->Text = L"AddUser";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void backButton_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
