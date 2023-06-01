#pragma once
#include "TKtietkiem.h"
#include "TaiKhoan.h"


namespace BankManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;


	/*/ <summary>
	/ Summary for Dashboard
	/ </summary>*/
	public ref class Dashboard : public System::Windows::Forms::Form 
	{
		//connect form login
	private:
		String^ loggedInAccount;

	public:
		
		Dashboard(void)
		{
			InitializeComponent();
			
			//TODO: Add the constructor code here
			
		}


		 //test 1
		Dashboard(TaiKhoan^ taikhoan)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			idlabel->Text = "Id = " + taikhoan->id;
			tenlabel->Text = "Tên = " + taikhoan->ten;
			sodulabel->Text = "So du: " + taikhoan->sodu.ToString();
		}





		 //gui tiet kiem

		/*Dashboard(int amount)
		{
			InitializeComponent();

			soduBox->Text = (Int32::Parse(soduBox->Text) - amount).ToString();
		}*/

	protected:
		/*/ <summary>
		/ Clean up any resources being used.
		/ </summary>*/
		~Dashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ thanhtoanButton;
	protected:
	private: System::Windows::Forms::Button^ tietkiemButton;
	private: System::Windows::Forms::Button^ vayButton;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ sotienchuyen;


	private: System::Windows::Forms::Button^ chuyenkhoanButton;

	private: System::Windows::Forms::Button^ searchButton;


	private: System::Windows::Forms::Label^ idlabel;
	private: System::Windows::Forms::Label^ tenlabel;
	private: System::Windows::Forms::Label^ sodulabel;
	private: System::Windows::Forms::TextBox^ findnameuser;






	private:
		/*/ <summary>
		/ Required designer variable.
		/ </summary>*/
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/*/ <summary>
		/ Required method for Designer support - do not modify
		/ the contents of this method with the code editor.
		/ </summary>*/
		void InitializeComponent(void)
		{
			this->thanhtoanButton = (gcnew System::Windows::Forms::Button());
			this->tietkiemButton = (gcnew System::Windows::Forms::Button());
			this->vayButton = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->sotienchuyen = (gcnew System::Windows::Forms::TextBox());
			this->chuyenkhoanButton = (gcnew System::Windows::Forms::Button());
			this->searchButton = (gcnew System::Windows::Forms::Button());
			this->idlabel = (gcnew System::Windows::Forms::Label());
			this->tenlabel = (gcnew System::Windows::Forms::Label());
			this->sodulabel = (gcnew System::Windows::Forms::Label());
			this->findnameuser = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// thanhtoanButton
			// 
			this->thanhtoanButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->thanhtoanButton->Location = System::Drawing::Point(1, 219);
			this->thanhtoanButton->Name = L"thanhtoanButton";
			this->thanhtoanButton->Size = System::Drawing::Size(346, 63);
			this->thanhtoanButton->TabIndex = 0;
			this->thanhtoanButton->Text = L"Tài khoản thanh toán";
			this->thanhtoanButton->UseVisualStyleBackColor = true;
			// 
			// tietkiemButton
			// 
			this->tietkiemButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tietkiemButton->Location = System::Drawing::Point(1, 354);
			this->tietkiemButton->Name = L"tietkiemButton";
			this->tietkiemButton->Size = System::Drawing::Size(346, 63);
			this->tietkiemButton->TabIndex = 1;
			this->tietkiemButton->Text = L"Tài khoản tiết kiệm";
			this->tietkiemButton->UseVisualStyleBackColor = true;
			this->tietkiemButton->Click += gcnew System::EventHandler(this, &Dashboard::tietkiemButton_Click);
			// 
			// vayButton
			// 
			this->vayButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->vayButton->Location = System::Drawing::Point(1, 471);
			this->vayButton->Name = L"vayButton";
			this->vayButton->Size = System::Drawing::Size(346, 63);
			this->vayButton->TabIndex = 2;
			this->vayButton->Text = L"Tài khoản vay mượn";
			this->vayButton->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(1, 669);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(146, 63);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Đăng xuất";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// sotienchuyen
			// 
			this->sotienchuyen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sotienchuyen->Location = System::Drawing::Point(807, 387);
			this->sotienchuyen->Name = L"sotienchuyen";
			this->sotienchuyen->Size = System::Drawing::Size(136, 45);
			this->sotienchuyen->TabIndex = 5;
			// 
			// chuyenkhoanButton
			// 
			this->chuyenkhoanButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chuyenkhoanButton->Location = System::Drawing::Point(807, 497);
			this->chuyenkhoanButton->Name = L"chuyenkhoanButton";
			this->chuyenkhoanButton->Size = System::Drawing::Size(112, 49);
			this->chuyenkhoanButton->TabIndex = 7;
			this->chuyenkhoanButton->Text = L"Bank";
			this->chuyenkhoanButton->UseVisualStyleBackColor = true;
			this->chuyenkhoanButton->AutoSizeChanged += gcnew System::EventHandler(this, &Dashboard::button2_Click);
			this->chuyenkhoanButton->Click += gcnew System::EventHandler(this, &Dashboard::button2_Click);
			// 
			// searchButton
			// 
			this->searchButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->searchButton->Location = System::Drawing::Point(949, 268);
			this->searchButton->Name = L"searchButton";
			this->searchButton->Size = System::Drawing::Size(104, 38);
			this->searchButton->TabIndex = 11;
			this->searchButton->Text = L"Find";
			this->searchButton->UseVisualStyleBackColor = true;
			this->searchButton->Click += gcnew System::EventHandler(this, &Dashboard::searchButton_Click);
			// 
			// idlabel
			// 
			this->idlabel->AutoSize = true;
			this->idlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->idlabel->Location = System::Drawing::Point(38, 58);
			this->idlabel->Name = L"idlabel";
			this->idlabel->Size = System::Drawing::Size(90, 38);
			this->idlabel->TabIndex = 14;
			this->idlabel->Text = L"STK:";
			// 
			// tenlabel
			// 
			this->tenlabel->AutoSize = true;
			this->tenlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tenlabel->Location = System::Drawing::Point(38, 136);
			this->tenlabel->Name = L"tenlabel";
			this->tenlabel->Size = System::Drawing::Size(73, 38);
			this->tenlabel->TabIndex = 15;
			this->tenlabel->Text = L"Ten";
			// 
			// sodulabel
			// 
			this->sodulabel->AutoSize = true;
			this->sodulabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sodulabel->Location = System::Drawing::Point(956, 89);
			this->sodulabel->Name = L"sodulabel";
			this->sodulabel->Size = System::Drawing::Size(120, 38);
			this->sodulabel->TabIndex = 16;
			this->sodulabel->Text = L"Số dư :";
			// 
			// findnameuser
			// 
			this->findnameuser->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->findnameuser->Location = System::Drawing::Point(807, 268);
			this->findnameuser->Name = L"findnameuser";
			this->findnameuser->Size = System::Drawing::Size(136, 45);
			this->findnameuser->TabIndex = 18;
			// 
			// Dashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1182, 768);
			this->Controls->Add(this->findnameuser);
			this->Controls->Add(this->sodulabel);
			this->Controls->Add(this->tenlabel);
			this->Controls->Add(this->idlabel);
			this->Controls->Add(this->searchButton);
			this->Controls->Add(this->chuyenkhoanButton);
			this->Controls->Add(this->sotienchuyen);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->vayButton);
			this->Controls->Add(this->tietkiemButton);
			this->Controls->Add(this->thanhtoanButton);
			this->Name = L"Dashboard";
			this->Text = L"Dashboard";
			this->AutoSizeChanged += gcnew System::EventHandler(this, &Dashboard::button2_Click);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	 //connect database
	String^ connectionString = "Data Source=LAPTOP-SH8ICRDB;Initial Catalog=Bank;Integrated Security=True";
	
// chuc nang chuyen khoan
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ sodu = sodulabel->Text;
	double bsodu = Double::Parse(sodu);

	String^ tienmuonchuyen = sotienchuyen->Text;
	double btienmuonchuyen = Double::Parse(tienmuonchuyen);

	if (bsodu >= btienmuonchuyen)
	{
		try
		{
			SqlConnection^ connection = gcnew SqlConnection(connectionString);
			connection->Open();

			// Assuming you have an 'users' table with columns 'id', 'ten', and 'sodu'
			String^ updateQuerychuyen = "UPDATE users SET sodu = sodu - " + btienmuonchuyen + " WHERE id = '" + idlabel->Text + "';";
			String^ updateQuerynhan = "UPDATE users SET sodu = sodu + " + btienmuonchuyen + " WHERE id = '" + findnameuser->Text + "';";

			SqlCommand^ commandchuyen = gcnew SqlCommand(updateQuerychuyen, connection);
			SqlCommand^ commandnhan = gcnew SqlCommand(updateQuerynhan, connection);

			commandchuyen->ExecuteNonQuery();
			commandnhan->ExecuteNonQuery();

			// Disconnect
			connection->Close();

			// Update the balance label with the new balance
			bsodu -= btienmuonchuyen;
			sodulabel->Text = bsodu.ToString();

			// Display a success message
			MessageBox::Show("Transfer successful!", "Success", MessageBoxButtons::OK);
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Failed to update balance in the database", "Error", MessageBoxButtons::OK);
		}
	}
	else
	{
		// Display an error message indicating insufficient balance
		MessageBox::Show("Insufficient balance.", "Error", MessageBoxButtons::OK);
	}
}



//chuyen trang tiet kiem
private: System::Void tietkiemButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	TaiKhoan^ tk = gcnew TaiKhoan();
	TKtietkiem^ tktk = gcnew TKtietkiem(sodulabel->Text,tenlabel->Text);
	tktk->ShowDialog();
}

// search ten de chuyen khoan
private: System::Void searchButton_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ searchTen = findnameuser->Text;

	try {
		SqlConnection^ connection = gcnew SqlConnection(connectionString);
		connection->Open();

		// Assuming 'TaiKhoan' table has columns 'id', 'ten', and 'sodu'
		String^ selectQuery = "SELECT * FROM TaiKhoan WHERE ten = @searchTen;";
		SqlCommand^ command = gcnew SqlCommand(selectQuery, connection);
		command->Parameters->AddWithValue("@searchTen", searchTen);

		SqlDataReader^ reader = command->ExecuteReader();

		// Check if there are any matching records
		if (reader->Read()) {
			// Retrieve the 'ten' value
			String^ name = reader->GetString(reader->GetOrdinal("ten"));

			// Do something with the 'ten' value (e.g., display it in a label)
			findnameuser->Text = name;

			// Display a success message
			MessageBox::Show("Name found: " + name, "Success", MessageBoxButtons::OK);
		}
		else {
			// No matching record found
			// Clear the result label and display an error message
			findnameuser->Text = "";
			MessageBox::Show("Name not found.", "Error", MessageBoxButtons::OK);
		}

		// Close the reader and disconnect
		reader->Close();
		connection->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error: " + ex->Message, "Exception", MessageBoxButtons::OK);
	}

}


};
}
