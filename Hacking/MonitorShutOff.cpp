#include<Windows.h>

int main()
{

SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, (LPARAM)2);
// ^ this turns off the monitor
Sleep(5000);
// The bottom part turns it back on
SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, (LPARAM)-1);

}
