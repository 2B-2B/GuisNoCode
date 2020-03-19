#include "AdminConsole.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int adminConsole(array <String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    ProjectGUIs::AdminConsole adminConsole;
    Application::Run(% adminConsole);
    return 0;
}