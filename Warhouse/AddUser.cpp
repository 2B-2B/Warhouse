#include "AddUser.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int addUser(array <String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Warhouse::AddUser addUser;
    Application::Run(% addUser);
    return 0;
}