#include "AddUser.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int addUser(array <String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    ProjectGUIs::AddUser addUser;
    Application::Run(% addUser);
    return 0;
}