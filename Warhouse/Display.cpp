#include "Display.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int display(array <String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Warhouse::Display display;
    Application::Run(% display);
    return 0;
}
