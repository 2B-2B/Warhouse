#include "Login.h"


using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int login(array <String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Warhouse::Login login;
    Application::Run(% login);
    return 0;
}
