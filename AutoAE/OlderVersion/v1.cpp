#define WINVER 0x0500
#include <iostream>
#include <windows.h>
#include <string>
#include <direct.h>

using std::string;

void StartProgram(string filename)
{
	ShellExecute(NULL,"open",filename.c_str(),NULL,NULL,SW_SHOWNORMAL);
}

int main() 
{

 
	StartProgram("AfterFX");
	Sleep(5000);
	INPUT ip;
    ip.type = INPUT_KEYBOARD;
    ip.ki.wScan = 0;
    ip.ki.time = 0;
    ip.ki.dwExtraInfo = 0;
	
    while(1)
    {
        // Press the "Ctrl" key
        ip.ki.wVk = VK_CONTROL;
        ip.ki.dwFlags = 0; // 0 for key press
        SendInput(1, &ip, sizeof(INPUT));
 
        // Press the "V" key
        ip.ki.wVk = 'N';
        ip.ki.dwFlags = 0; // 0 for key press
        SendInput(1, &ip, sizeof(INPUT));
 
        // Release the "V" key
        ip.ki.wVk = 'N';
        ip.ki.dwFlags = KEYEVENTF_KEYUP;
        SendInput(1, &ip, sizeof(INPUT));
 
        // Release the "Ctrl" key
        ip.ki.wVk = VK_CONTROL;
        ip.ki.dwFlags = KEYEVENTF_KEYUP;
        SendInput(1, &ip, sizeof(INPUT));
         
        Sleep(1000); // pause for 1 second
		ip.ki.wVk = VK_RETURN;
        ip.ki.dwFlags = 0; // 0 for key press
        SendInput(1, &ip, sizeof(INPUT));
		ip.ki.wVk = VK_RETURN;
        ip.ki.dwFlags = KEYEVENTF_KEYUP;
        SendInput(1, &ip, sizeof(INPUT));
		break;
    }
	system("PAUSE");
	return 0;
}
    
