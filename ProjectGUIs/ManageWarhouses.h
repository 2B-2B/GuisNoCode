#pragma once

namespace ProjectGUIs {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ManageWarhouses
	/// </summary>
	public ref class ManageWarhouses : public System::Windows::Forms::Form
	{
	public:
		ManageWarhouses(void)
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
		~ManageWarhouses()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ backButton;
	private: System::Windows::Forms::Button^ removeWarHouseButton;
	protected:

	private: System::Windows::Forms::Button^ addWarHouseButton;
	private: System::Windows::Forms::ListBox^ listOfWarHouses;



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
			this->backButton = (gcnew System::Windows::Forms::Button());
			this->removeWarHouseButton = (gcnew System::Windows::Forms::Button());
			this->addWarHouseButton = (gcnew System::Windows::Forms::Button());
			this->listOfWarHouses = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// backButton
			// 
			this->backButton->Location = System::Drawing::Point(277, 339);
			this->backButton->Name = L"backButton";
			this->backButton->Size = System::Drawing::Size(115, 57);
			this->backButton->TabIndex = 7;
			this->backButton->Text = L"Back";
			this->backButton->UseVisualStyleBackColor = true;
			// 
			// removeWarHouseButton
			// 
			this->removeWarHouseButton->Location = System::Drawing::Point(277, 127);
			this->removeWarHouseButton->Name = L"removeWarHouseButton";
			this->removeWarHouseButton->Size = System::Drawing::Size(115, 57);
			this->removeWarHouseButton->TabIndex = 6;
			this->removeWarHouseButton->Text = L"Remove";
			this->removeWarHouseButton->UseVisualStyleBackColor = true;
			// 
			// addWarHouseButton
			// 
			this->addWarHouseButton->Location = System::Drawing::Point(277, 24);
			this->addWarHouseButton->Name = L"addWarHouseButton";
			this->addWarHouseButton->Size = System::Drawing::Size(115, 57);
			this->addWarHouseButton->TabIndex = 5;
			this->addWarHouseButton->Text = L"Add";
			this->addWarHouseButton->UseVisualStyleBackColor = true;
			// 
			// listOfWarHouses
			// 
			this->listOfWarHouses->FormattingEnabled = true;
			this->listOfWarHouses->ItemHeight = 20;
			this->listOfWarHouses->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Test 1", L"Test 2", L"Test 3" });
			this->listOfWarHouses->Location = System::Drawing::Point(12, 12);
			this->listOfWarHouses->Name = L"listOfWarHouses";
			this->listOfWarHouses->ScrollAlwaysVisible = true;
			this->listOfWarHouses->Size = System::Drawing::Size(246, 384);
			this->listOfWarHouses->TabIndex = 4;
			// 
			// ManageWarhouses
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(405, 405);
			this->Controls->Add(this->backButton);
			this->Controls->Add(this->removeWarHouseButton);
			this->Controls->Add(this->addWarHouseButton);
			this->Controls->Add(this->listOfWarHouses);
			this->Name = L"ManageWarhouses";
			this->Text = L"ManageWarhouses";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
