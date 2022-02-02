#include "Login.h"
#include "Mainmenu.h"
#include "Studlist.h"
#include "Gradsys.h"
#include "Pendlist.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project::Login form;
	Application::Run(%form);

	return 0;
}