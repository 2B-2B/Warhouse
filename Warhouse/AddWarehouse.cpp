#include "AddWarehouse.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int addWarehouse(array <String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Warhouse::AddWarehouse addWarehouse;
    Application::Run(% addWarehouse);
    return 0;
}