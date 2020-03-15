#include "ManageUsers.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int manageUsers(array <String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    ProjectGUIs::ManageUsers form;
    Application::Run(% form);
    return 0;
}