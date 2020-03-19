#include "login.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int login(array <String^>^ args) {
    std::cout << "Login run";
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    ProjectGUIs::Login login;
    Application::Run(% login);
    return 0;
}