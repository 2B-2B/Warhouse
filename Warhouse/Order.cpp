#include "Order.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int order(array <String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Warhouse::Order order;
    Application::Run(% order);
    return 0;
}
