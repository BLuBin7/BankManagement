#include "LoginForm.h"
#include "Register.h"
#include "Dashboard.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

void main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	BankManagement::LoginForm myFrm;
	Application::Run(% myFrm);
}