#pragma once
#include "TKtietkiem.h"


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
		
		Dashboard(String^ loggedInAccount)
		{
			InitializeComponent();

			 //Store the logged-in account for later use
			this->loggedInAccount = loggedInAccount;
		}
		Dashboard(void)
		{
			InitializeComponent();
			
			//TODO: Add the constructor code here
			
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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Button^ chuyenkhoanButton;


	private: System::Windows::Forms::TextBox^ nameUserBox;
	private: System::Windows::Forms::Button^ searchButton;

	private: System::Windows::Forms::TextBox^ soduBox;
	private: System::Windows::Forms::TextBox^ iduserBox;
	private: System::Windows::Forms::TextBox^ accountnameBox;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->chuyenkhoanButton = (gcnew System::Windows::Forms::Button());
			this->soduBox = (gcnew System::Windows::Forms::TextBox());
			this->nameUserBox = (gcnew System::Windows::Forms::TextBox());
			this->searchButton = (gcnew System::Windows::Forms::Button());
			this->iduserBox = (gcnew System::Windows::Forms::TextBox());
			this->accountnameBox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			 
			 //thanhtoanButton
			 
			this->thanhtoanButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->thanhtoanButton->Location = System::Drawing::Point(1, 219);
			this->thanhtoanButton->Name = L"thanhtoanButton";
			this->thanhtoanButton->Size = System::Drawing::Size(346, 63);
			this->thanhtoanButton->TabIndex = 0;
			this->thanhtoanButton->Text = L"Tài khoản thanh toán";
			this->thanhtoanButton->UseVisualStyleBackColor = true;
			 
			 //tietkiemButton
			 
			this->tietkiemButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tietkiemButton->Location = System::Drawing::Point(1, 354);
			this->tietkiemButton->Name = L"tietkiemButton";
			this->tietkiemButton->Size = System::Drawing::Size(346, 63);
			this->tietkiemButton->TabIndex = 1;
			this->tietkiemButton->Text = L"Tài khoản tiết kiệm";
			this->tietkiemButton->UseVisualStyleBackColor = true;
			this->tietkiemButton->Click += gcnew System::EventHandler(this, &Dashboard::tietkiemButton_Click);
			 
			 //vayButton
			 
			this->vayButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->vayButton->Location = System::Drawing::Point(1, 471);
			this->vayButton->Name = L"vayButton";
			this->vayButton->Size = System::Drawing::Size(346, 63);
			this->vayButton->TabIndex = 2;
			this->vayButton->Text = L"Tài khoản vay mượn";
			this->vayButton->UseVisualStyleBackColor = true;
			 
			 //label1
			 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(1018, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(116, 42);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Số dư";
			 
			 //button1
			 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(1, 669);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(146, 63);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Đăng xuất";
			this->button1->UseVisualStyleBackColor = true;
			 
			 //textBox1
			 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(807, 387);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(136, 45);
			this->textBox1->TabIndex = 5;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Dashboard::tienmuonchuyen);
			 
			 //chuyenkhoanButton
			 
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
			 
			 //soduBox
			 
			this->soduBox->Location = System::Drawing::Point(1025, 100);
			this->soduBox->Name = L"soduBox";
			this->soduBox->ReadOnly = true;
			this->soduBox->Size = System::Drawing::Size(100, 22);
			this->soduBox->TabIndex = 9;
			this->soduBox->Text = L"1200";
			this->soduBox->TextChanged += gcnew System::EventHandler(this, &Dashboard::soduBox_TextChanged);
			 
			 //nameUserBox
			 
			this->nameUserBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nameUserBox->Location = System::Drawing::Point(807, 261);
			this->nameUserBox->Name = L"nameUserBox";
			this->nameUserBox->Size = System::Drawing::Size(136, 45);
			this->nameUserBox->TabIndex = 10;
			 
			 //searchButton
			 
			this->searchButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->searchButton->Location = System::Drawing::Point(949, 268);
			this->searchButton->Name = L"searchButton";
			this->searchButton->Size = System::Drawing::Size(104, 38);
			this->searchButton->TabIndex = 11;
			this->searchButton->Text = L"Find";
			this->searchButton->UseVisualStyleBackColor = true;
			this->searchButton->Click += gcnew System::EventHandler(this, &Dashboard::searchButton_Click);
			 
			 //iduserBox
			 
			this->iduserBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->iduserBox->Location = System::Drawing::Point(47, 68);
			this->iduserBox->Name = L"iduserBox";
			this->iduserBox->Size = System::Drawing::Size(100, 45);
			this->iduserBox->TabIndex = 12;
			this->iduserBox->TextChanged += gcnew System::EventHandler(this, &Dashboard::iduserBox_TextChanged);
			 
			 //accountnameBox
			 
			this->accountnameBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->accountnameBox->Location = System::Drawing::Point(47, 152);
			this->accountnameBox->Name = L"accountnameBox";
			this->accountnameBox->Size = System::Drawing::Size(100, 45);
			this->accountnameBox->TabIndex = 13;
			this->accountnameBox->TextChanged += gcnew System::EventHandler(this, &Dashboard::accountnameBox_TextChanged);
			 
			 //Dashboard
			 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1182, 768);
			this->Controls->Add(this->accountnameBox);
			this->Controls->Add(this->iduserBox);
			this->Controls->Add(this->searchButton);
			this->Controls->Add(this->nameUserBox);
			this->Controls->Add(this->soduBox);
			this->Controls->Add(this->chuyenkhoanButton);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->vayButton);
			this->Controls->Add(this->tietkiemButton);
			this->Controls->Add(this->thanhtoanButton);
			this->Name = L"Dashboard";
			this->Text = L"Dashboard";
			this->AutoSizeChanged += gcnew System::EventHandler(this, &Dashboard::button2_Click);
			this->Load += gcnew System::EventHandler(this, &Dashboard::Dashboard_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	 //connect database
	String^ connectionString = "Data Source=LAPTOP-SH8ICRDB\\SQLEXPRESS;Initial Catalog=Bank;Integrated Security=True";
	
	//private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	//	int bsodu = Int32::Parse(sodu->Text);
	//	int btienmuonchuyen = Int32::Parse(textBox1->Text);
	//	

	//	try {
	//		/*SqlConnection^ connection = gcnew SqlConnection(connectionString);
	//		connection->Open();

	//		String^ updateQuery = "UPDATE accounts SET balance = balance + " + sodu + ";";
	//		SqlCommand^ command = gcnew SqlCommand(updateQuery, connection);
	//		command->ExecuteNonQuery();*/

	//		if (bsodu > btienmuonchuyen) {
	//			MessageBox::Show("thanh cong");
	//		}

	//		 //disconnect
	//		connection->Close();


	//	}catch (Exception^ ex)
	//	{
	//		MessageBox::Show("Failed to add book", "Register Failure", MessageBoxButtons::OK);
	//	}

	//}
//		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
//		int bsodu = 0;
//		int btienmuonchuyen = 0;
//
//		 //Parse the text into integers
//		if (Int32::TryParse(textBox2->Text, bsodu) && Int32::TryParse(textBox1->Text, btienmuonchuyen))
//		{
//			 //The parsing was successful, proceed with the transfer logic
//			if (bsodu > btienmuonchuyen)
//			{
//				 /*Perform the transfer operation
//
//				 Update the balance in the database*/
//
//				 //Update the balance label with the new balance
//				textBox2->Text = (bsodu - btienmuonchuyen).ToString();
//
//				 //Display a success message
//				MessageBox::Show("Transfer successful!", "Success", MessageBoxButtons::OK);
//			}
//			else
//			{
//				 //Display an error message indicating insufficient balance
//				MessageBox::Show("Insufficient balance.", "Error", MessageBoxButtons::OK);
//			}
//		}
//		else
//		{
//			 //Show an error message indicating invalid input
//			MessageBox::Show("Invalid input. Please enter valid numeric values.", "Input Error", MessageBoxButtons::OK);
//		}
//}

	//connect database
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		int bsodu = 0;
		int btienmuonchuyen = 0;

		 //Parse the text into integers
		if (Int32::TryParse(soduBox->Text, bsodu) && Int32::TryParse(textBox1->Text, btienmuonchuyen))
		{
			 //The parsing was successful, proceed with the transfer logic
			if (bsodu > btienmuonchuyen)
			{
				/* Perform the transfer operation

				 Update the balance in the database*/
				try
				{
					SqlConnection^ connection = gcnew SqlConnection(connectionString);
					connection->Open();

					 //Assuming you have an 'accounts' table with columns 'id', 'ten', and 'sodu'
					String^ updateQuery = "UPDATE TaiKhoan SET sodu = sodu - " + btienmuonchuyen + " WHERE id = '" + iduserBox->Text + "';";
					SqlCommand^ command = gcnew SqlCommand(updateQuery, connection);
					command->ExecuteNonQuery();

					 //disconnect
					connection->Close();

					 //Update the balance label with the new balance
					soduBox->Text = (bsodu - btienmuonchuyen).ToString();

					 //Display a success message
					MessageBox::Show("Transfer successful!", "Success", MessageBoxButtons::OK);
				}
				catch (Exception^ ex)
				{
					MessageBox::Show("Failed to update balance in the database", "Error", MessageBoxButtons::OK);
				}
			}
			else
			{
				 //Display an error message indicating insufficient balance
				MessageBox::Show("Insufficient balance.", "Error", MessageBoxButtons::OK);
			}
		}
		else
		{
			 //Show an error message indicating invalid input
			MessageBox::Show("Invalid input. Please enter valid numeric values.", "Input Error", MessageBoxButtons::OK);
		}
	}





private: System::Void Dashboard_Load(System::Object^ sender, System::EventArgs^ e) {
	
}

private: System::Void tienmuonchuyen(System::Object^ sender, System::EventArgs^ e) {
	
}
	

private: System::Void tietkiemButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	TKtietkiem^ tktk = gcnew TKtietkiem();
	tktk->ShowDialog();
}

// search ten de chuyen khoan
private: System::Void searchButton_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ searchTen = nameUserBox->Text;

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
			nameUserBox->Text = name;

			// Display a success message
			MessageBox::Show("Name found: " + name, "Success", MessageBoxButtons::OK);
		}
		else {
			// No matching record found
			// Clear the result label and display an error message
			nameUserBox->Text = "";
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

	public: System::Void SetAccountDetails(String^ accountName){
		try
		{
			accountName = "admin";
			SqlConnection^ connection = gcnew SqlConnection(connectionString);
			connection->Open();

			 //Assuming 'TaiKhoan' table has columns 'id', 'ten', and 'sodu'
			String^ selectQuery = "SELECT id, ten, sodu FROM TaiKhoan WHERE ten = '" + accountName + "';";
			SqlCommand^ command = gcnew SqlCommand(selectQuery, connection);
			SqlDataReader^ reader = command->ExecuteReader();

			 //Check if there is a matching record
			if (reader->Read())
			{
				 //Retrieve the values
				String^ id = reader->GetString(reader->GetOrdinal("id"));
				String^ ten = reader->GetString(reader->GetOrdinal("ten"));
				String^ sodu = reader->GetDecimal(reader->GetOrdinal("sodu")).ToString();

				 //Set the values in the text boxes
				iduserBox->Text = id;
				accountnameBox->Text = ten;
				soduBox->Text = sodu;
			}

			 //Close the reader and disconnect
			reader->Close();
			connection->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Failed to retrieve account details from the database", "Error", MessageBoxButtons::OK);
		}
	}
	
	

	
private: System::Void iduserBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ accountName = iduserBox->Text;

	 //Connect to the database and retrieve the id for the given account name
	SqlConnection^ connection = gcnew SqlConnection(connectionString);
	connection->Open();

	String^ selectQuery = "SELECT id FROM TaiKhoan WHERE ten = admin;";
	SqlCommand^ command = gcnew SqlCommand(selectQuery, connection);
	command->Parameters->AddWithValue("admin", accountName);

	SqlDataReader^ reader = command->ExecuteReader();

	if (reader->Read()) {
		String^ id = reader->GetString(0);
		iduserBox->Text = id;
	}

	reader->Close();
	connection->Close();
}

private: System::Void soduBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ accountId = iduserBox->Text;

	 //Connect to the database and retrieve the balance for the given account ID
	SqlConnection^ connection = gcnew SqlConnection(connectionString);
	connection->Open();

	String^ selectQuery = "SELECT sodu FROM TaiKhoan WHERE id = @accountId;";
	SqlCommand^ command = gcnew SqlCommand(selectQuery, connection);
	command->Parameters->AddWithValue("@accountId", accountId);

	SqlDataReader^ reader = command->ExecuteReader();

	if (reader->Read()) {
		double balance = reader->GetDouble(0);
		soduBox->Text = balance.ToString();
	}

	reader->Close();
	connection->Close();
}

private: System::Void accountnameBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ accountId = iduserBox->Text;

	 //Connect to the database and retrieve the account name for the given account ID
	SqlConnection^ connection = gcnew SqlConnection(connectionString);
	connection->Open();

	String^ selectQuery = "SELECT ten FROM TaiKhoan WHERE id = @accountId;";
	SqlCommand^ command = gcnew SqlCommand(selectQuery, connection);
	command->Parameters->AddWithValue("@accountId", accountId);

	SqlDataReader^ reader = command->ExecuteReader();

	if (reader->Read()) {
		String^ accountName = reader->GetString(0);
		accountnameBox->Text = accountName;
	}

	reader->Close();
	connection->Close();
}

};
}
