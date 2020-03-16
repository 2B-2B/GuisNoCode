#include "Order.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int order(array <String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    ProjectGUIs::Order form;
    Application::Run(% form);
    return 0;
}