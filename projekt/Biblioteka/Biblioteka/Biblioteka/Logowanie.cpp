#include "Logowanie.h"
#include "Program.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Biblioteka::Logowanie formularz;
	Application::Run(%formularz);


	return 0;
}
