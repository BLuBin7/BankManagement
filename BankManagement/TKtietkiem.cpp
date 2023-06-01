#include "TKtietkiem.h"



System::Void guiButton_Click(System::Object^ sender, System::EventArgs^ e) {
	Dashboard^ dashboard = gcnew Dashboard(t);
	dashboard->ShowDialog();

	sotienguiBox->Text = (Int32::Parse(sotienguiBox->Text) - amountToDeposit).ToString();

	MessageBox::Show("Thanh cong", "Thanh cong", MessageBoxButtons::OK);
}

