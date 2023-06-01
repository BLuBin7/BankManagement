#pragma once
#include "TaiKhoan.h"
#include "Dashboard.h"

namespace BankManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TKtietkiem
	/// </summary>
	public ref class TKtietkiem : public System::Windows::Forms::Form
	{
	private:
		int amountToDeposit;
	public:
		TKtietkiem(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			
		}

		TKtietkiem(int amount)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			amountToDeposit = amount;
		}
		TKtietkiem(TaiKhoan^ taikhoan) {
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			sodulabel->Text = "So du: " + taikhoan->sodu.ToString();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TKtietkiem()
		{
			if (components)
			{
				delete components;
			}
		}
	

	private: System::Windows::Forms::Button^ returnButton;
	protected:
	private: System::Windows::Forms::TextBox^ sotienguiBox;
	private: System::Windows::Forms::Button^ guiButton;
	private: System::Windows::Forms::Label^ sodulabel;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region 
		//Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->returnButton = (gcnew System::Windows::Forms::Button());
			this->sotienguiBox = (gcnew System::Windows::Forms::TextBox());
			this->guiButton = (gcnew System::Windows::Forms::Button());
			this->sodulabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// returnButton
			// 
			this->returnButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->returnButton->Location = System::Drawing::Point(12, 692);
			this->returnButton->Name = L"returnButton";
			this->returnButton->Size = System::Drawing::Size(150, 47);
			this->returnButton->TabIndex = 0;
			this->returnButton->Text = L"Return";
			this->returnButton->UseVisualStyleBackColor = true;
			this->returnButton->Click += gcnew System::EventHandler(this, &TKtietkiem::returnButton_Click);
			// 
			// sotienguiBox
			// 
			this->sotienguiBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sotienguiBox->Location = System::Drawing::Point(484, 265);
			this->sotienguiBox->Name = L"sotienguiBox";
			this->sotienguiBox->Size = System::Drawing::Size(148, 49);
			this->sotienguiBox->TabIndex = 1;
			// 
			// guiButton
			// 
			this->guiButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->guiButton->Location = System::Drawing::Point(499, 376);
			this->guiButton->Name = L"guiButton";
			this->guiButton->Size = System::Drawing::Size(133, 62);
			this->guiButton->TabIndex = 2;
			this->guiButton->Text = L"Gửi";
			this->guiButton->UseVisualStyleBackColor = true;
			this->guiButton->Click += gcnew System::EventHandler(this, &TKtietkiem::guiButton_Click);
			// 
			// sodulabel
			// 
			this->sodulabel->AutoSize = true;
			this->sodulabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sodulabel->Location = System::Drawing::Point(53, 45);
			this->sodulabel->Name = L"sodulabel";
			this->sodulabel->Size = System::Drawing::Size(109, 39);
			this->sodulabel->TabIndex = 3;
			this->sodulabel->Text = L"label1";
			// 
			// TKtietkiem
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1071, 742);
			this->Controls->Add(this->sodulabel);
			this->Controls->Add(this->guiButton);
			this->Controls->Add(this->sotienguiBox);
			this->Controls->Add(this->returnButton);
			this->Name = L"TKtietkiem";
			this->Text = L"TKtietkiem";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//private: System::Void guiButton_Click(System::Object^ sender, System::EventArgs^ e) {
		/*Dashboard^ dashboard = gcnew Dashboard(amountToDeposit);
		dashboard->ShowDialog();

		sotienguiBox->Text = (Int32::Parse(sotienguiBox->Text) - amountToDeposit).ToString();

		MessageBox::Show("Thanh cong", "Thanh cong", MessageBoxButtons::OK);*/
	//}
	private: System::Void guiButton_Click(System::Object^ sender, System::EventArgs^ e);
		
	private: System::Void returnButton_Click(System::Object^ sender, System::EventArgs^ e) {
		/*this->Hide();
		Dashboard^ dashboard = gcnew Dashboard();
		dashboard->ShowDialog();*/
	}
};
}
