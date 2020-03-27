#include "ManageWarehouses.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int manageWarehouses(array <String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Warhouse::ManageWarehouses manageWarehouses;
    Application::Run(% manageWarehouses);
    return 0;
}
