#define WINVER 0x0500
#include <windows.h>
// Change the cordinates to your resolution and screen. There is tools that tell you this.
int main()
{
    int mouseX = -1070, mouseY = 1182;
	ShellExecute(0, "open",
                  "C:\\progra~1\\intern~1\\iexplore.exe",
                  " ",
                  // ^^ Insert of your group message link or the person you want to message.
                  "",
                  SW_MAXIMIZE); 
SetCursorPos(mouseX, mouseY);
Sleep(5000);
mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP,-1070,1182,0,0);
mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP,-1674,332,0,0);
mouseX = -1674, mouseY = 332;
//SetCursorPos(mouseX, mouseY);
INPUT ip;    
ip.type = INPUT_KEYBOARD;
    ip.ki.wScan = 0;
    ip.ki.time = 0;
    ip.ki.dwExtraInfo = 0;		
ip.ki.wVk = VK_RETURN;
        ip.ki.dwFlags = 0; // 0 for key press
        SendInput(1, &ip, sizeof(INPUT));
		ip.ki.wVk = VK_RETURN;
        ip.ki.dwFlags = KEYEVENTF_KEYUP;
        SendInput(1, &ip, sizeof(INPUT));
Sleep(1000);		
ip.ki.wVk = VK_RETURN;
        ip.ki.dwFlags = 0; // 0 for key press
        SendInput(1, &ip, sizeof(INPUT));
		ip.ki.wVk = VK_RETURN;
        ip.ki.dwFlags = KEYEVENTF_KEYUP;
        SendInput(1, &ip, sizeof(INPUT));
Sleep(1000);
		ip.ki.wVk = 'P';
        ip.ki.dwFlags = 0; // 0 for key press
        SendInput(1, &ip, sizeof(INPUT));
        ip.ki.wVk = 'I';
        ip.ki.dwFlags = KEYEVENTF_KEYUP;
        SendInput(1, &ip, sizeof(INPUT));
Sleep(1000);
		ip.ki.wVk = VK_DOWN;
        ip.ki.dwFlags = 0; // 0 for key press
        SendInput(1, &ip, sizeof(INPUT));
		ip.ki.wVk = VK_DOWN;
        ip.ki.dwFlags = KEYEVENTF_KEYUP;
        SendInput(1, &ip, sizeof(INPUT));	
Sleep(3000);
ip.ki.wVk = VK_RETURN;
        ip.ki.dwFlags = 0; // 0 for key press
        SendInput(1, &ip, sizeof(INPUT));
		ip.ki.wVk = VK_RETURN;
        ip.ki.dwFlags = KEYEVENTF_KEYUP;
        SendInput(1, &ip, sizeof(INPUT));		
ip.ki.wVk = VK_RETURN;
        ip.ki.dwFlags = 0; // 0 for key press
        SendInput(1, &ip, sizeof(INPUT));
		ip.ki.wVk = VK_RETURN;
        ip.ki.dwFlags = KEYEVENTF_KEYUP;
        SendInput(1, &ip, sizeof(INPUT));
Sleep(7000);
ip.ki.wVk = VK_RETURN;
        ip.ki.dwFlags = 0; // 0 for key press
        SendInput(1, &ip, sizeof(INPUT));
		ip.ki.wVk = VK_RETURN;
        ip.ki.dwFlags = KEYEVENTF_KEYUP;
        SendInput(1, &ip, sizeof(INPUT));
Sleep(1000);		
ip.ki.wVk = VK_RETURN;
        ip.ki.dwFlags = 0; // 0 for key press
        SendInput(1, &ip, sizeof(INPUT));
		ip.ki.wVk = VK_RETURN;
        ip.ki.dwFlags = KEYEVENTF_KEYUP;
        SendInput(1, &ip, sizeof(INPUT));
system("PAUSE");
}
