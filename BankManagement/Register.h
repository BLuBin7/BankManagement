#pragma once
#include "LoginForm.h"
#include "Dashboard.h"

namespace BankManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Register
	/// </summary>
	public ref class Register : public System::Windows::Forms::Form
	{
	public:
		Register(void)
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
		~Register()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ userBox;
	private: System::Windows::Forms::TextBox^ passBox;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ UserName;
	private: System::Windows::Forms::TextBox^ CMND;
	private: System::Windows::Forms::TextBox^ Phone;
	private: System::Windows::Forms::TextBox^ Pass;





	private: System::Windows::Forms::Button^ registerButton;
	private: System::Windows::Forms::Button^ returnButton;




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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->UserName = (gcnew System::Windows::Forms::TextBox());
			this->CMND = (gcnew System::Windows::Forms::TextBox());
			this->Phone = (gcnew System::Windows::Forms::TextBox());
			this->Pass = (gcnew System::Windows::Forms::TextBox());
			this->registerButton = (gcnew System::Windows::Forms::Button());
			this->returnButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(165, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(157, 42);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Register";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(45, 141);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(196, 42);
			this->label2->TabIndex = 1;
			this->label2->Text = L"UserName";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(45, 359);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(127, 42);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Phone";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(45, 238);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(130, 42);
			this->label4->TabIndex = 3;
			this->label4->Text = L"CMND";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(45, 480);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(183, 42);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Password";
			// 
			// UserName
			// 
			this->UserName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UserName->Location = System::Drawing::Point(52, 186);
			this->UserName->Name = L"UserName";
			this->UserName->Size = System::Drawing::Size(398, 49);
			this->UserName->TabIndex = 5;
			// 
			// CMND
			// 
			this->CMND->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CMND->Location = System::Drawing::Point(52, 283);
			this->CMND->Name = L"CMND";
			this->CMND->Size = System::Drawing::Size(398, 49);
			this->CMND->TabIndex = 6;
			// 
			// Phone
			// 
			this->Phone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Phone->Location = System::Drawing::Point(52, 418);
			this->Phone->Name = L"Phone";
			this->Phone->Size = System::Drawing::Size(398, 49);
			this->Phone->TabIndex = 7;
			// 
			// Pass
			// 
			this->Pass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Pass->Location = System::Drawing::Point(52, 537);
			this->Pass->Name = L"Pass";
			this->Pass->Size = System::Drawing::Size(398, 49);
			this->Pass->TabIndex = 8;
			// 
			// registerButton
			// 
			this->registerButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->registerButton->Location = System::Drawing::Point(295, 643);
			this->registerButton->Name = L"registerButton";
			this->registerButton->Size = System::Drawing::Size(155, 52);
			this->registerButton->TabIndex = 9;
			this->registerButton->Text = L"Register";
			this->registerButton->UseVisualStyleBackColor = true;
			this->registerButton->Click += gcnew System::EventHandler(this, &Register::registerButton_Click);
			// 
			// returnButton
			// 
			this->returnButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->returnButton->Location = System::Drawing::Point(30, 643);
			this->returnButton->Name = L"returnButton";
			this->returnButton->Size = System::Drawing::Size(155, 52);
			this->returnButton->TabIndex = 13;
			this->returnButton->Text = L"Return";
			this->returnButton->UseVisualStyleBackColor = true;
			this->returnButton->Click += gcnew System::EventHandler(this, &Register::returnButton_Click);
			// 
			// Register
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSteelBlue;
			this->ClientSize = System::Drawing::Size(497, 707);
			this->Controls->Add(this->returnButton);
			this->Controls->Add(this->registerButton);
			this->Controls->Add(this->Pass);
			this->Controls->Add(this->Phone);
			this->Controls->Add(this->CMND);
			this->Controls->Add(this->UserName);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Name = L"Register";
			this->Text = L"Register";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void registerButton_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ name = UserName->Text;
	String^ cmnd = CMND->Text;
	String^ phone = Phone->Text;
	String^ pass = Pass->Text;


	if (name->Length == 0 || cmnd->Length == 0 || phone->Length == 0 || pass->Length == 0) {
		MessageBox::Show("Please enter all the fields", "On or more empty fields", MessageBoxButtons::OK);
		return;
	}

	try {
		//insert to database
	}
	catch (Exception^ e) {
		MessageBox::Show("Failed to register new User", "Register Failed", MessageBoxButtons::OK);
	}

}
	   private: System::Void returnButton_Click(System::Object^ sender, System::EventArgs^ e) {
		   /*this->Hide();
		   LoginForm^ loginform = gcnew LoginForm();
		   loginform->ShowDialog();
		   this->Close();*/
	   }

};
}
