#include "ManageWarhouses.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int manageWarhouses(array <String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    ProjectGUIs::ManageWarhouses manageWarhouses;
    Application::Run(% manageWarhouses);
    return 0;
}