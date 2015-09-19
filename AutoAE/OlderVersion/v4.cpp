#define WINVER 0x0500
#include <iostream>
#include <windows.h>
#include <string>
#include <direct.h>

using std::string;
int TimeC;
int SleepN;

int declare()
{
	INPUT ip;
    ip.type = INPUT_KEYBOARD;
    ip.ki.wScan = 0;
    ip.ki.time = 0;
    ip.ki.dwExtraInfo = 0;
}

void StartProgram(string filename)
{
	ShellExecute(NULL,"open",filename.c_str(),NULL,NULL,SW_SHOWNORMAL);
}


int main() 
{

	std::cout << " Press 1 for 9 sec wait time. Press 2 for custom time. " << std::endl;
	bool TimeChooser(true);
	if (TimeChooser)
	{
		int SleepN;
		int CustomT;
		std::cin >> CustomT;
		CustomT = SleepN;
	}
	else
	{
		int SleepN = 9000;
	}
	Sleep(SleepN);
if (SleepN == 9000)
{
	StartProgram("AfterFX");
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
 
        // Press the "N" key
        ip.ki.wVk = 'N';
        ip.ki.dwFlags = 0; // 0 for key press
        SendInput(1, &ip, sizeof(INPUT));
 
        // Release the "N" key
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
	Sleep(1000);
	while(1)
    {
        // Press the "Ctrl" key
        ip.ki.wVk = VK_CONTROL;
        ip.ki.dwFlags = 0; // 0 for key press
        SendInput(1, &ip, sizeof(INPUT));
 
        // Press the "V" key
        ip.ki.wVk = 'I';
        ip.ki.dwFlags = 0; // 0 for key press
        SendInput(1, &ip, sizeof(INPUT));
 
        // Release the "V" key
        ip.ki.wVk = 'I';
        ip.ki.dwFlags = KEYEVENTF_KEYUP;
        SendInput(1, &ip, sizeof(INPUT));
 
        // Release the "Ctrl" key
        ip.ki.wVk = VK_CONTROL;
        ip.ki.dwFlags = KEYEVENTF_KEYUP;
        SendInput(1, &ip, sizeof(INPUT));
		break;
    }
	Sleep(1000);	
	while(1)
    {
        // Press the "Ctrl" key
        ip.ki.wVk = VK_CONTROL;
        ip.ki.dwFlags = 0; // 0 for key press
        SendInput(1, &ip, sizeof(INPUT));
 
        // Press the "V" key
        ip.ki.wVk = 'A';
        ip.ki.dwFlags = 0; // 0 for key press
        SendInput(1, &ip, sizeof(INPUT));
 
        // Release the "V" key
        ip.ki.wVk = 'A';
        ip.ki.dwFlags = KEYEVENTF_KEYUP;
        SendInput(1, &ip, sizeof(INPUT));
 
        // Release the "Ctrl" key
        ip.ki.wVk = VK_CONTROL;
        ip.ki.dwFlags = KEYEVENTF_KEYUP;
        SendInput(1, &ip, sizeof(INPUT));
		break;
    }
	Sleep(1000);
	while(1)
    {
        // Press the "Ctrl" key
        ip.ki.wVk = VK_RETURN;
        ip.ki.dwFlags = 0; // 0 for key press
        SendInput(1, &ip, sizeof(INPUT));
 
        // Release the "Ctrl" key
        ip.ki.wVk = VK_RETURN;
        ip.ki.dwFlags = KEYEVENTF_KEYUP;
        SendInput(1, &ip, sizeof(INPUT));
		break;
    }
	system("PAUSE");
	return 0;
	}
}
