#include "ServerForm.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ContentsServer::ServerForm form;
	Application::Run(% form);
}
