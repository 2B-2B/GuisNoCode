#include "AddWarehouse.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int addWarehouse(array <String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    ProjectGUIs::AddWarehouse form;
    Application::Run(% form);
    return 0;
}