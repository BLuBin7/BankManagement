#include "LoginForm.h"
#include "Register.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

void main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	BankManagement::LoginForm myFrm;

	myFrm.ShowDialog();
	TaiKhoan^ taikhoan = myFrm.taikhoan;

	if (taikhoan != nullptr) {
		myFrm.Close();
		MessageBox::Show("Successful " + taikhoan->ten, "Login.cpp", MessageBoxButtons::OK);
		BankManagement::Dashboard dashboard(taikhoan);

		Application::Run(% dashboard);
	}
	else {
		MessageBox::Show("Fail");
	}
}