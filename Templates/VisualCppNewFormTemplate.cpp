#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project1::MyForm form;
	Application::Run(%form);
}

/*
  Go to project Properties --> Linker --> System and make sure  SubSystem is set to Windows (/SUBSYSTEM:WINDOWS)
  
  Go to project properties --> Linker --> Advance and make sure Entry point is set to main.
*/
