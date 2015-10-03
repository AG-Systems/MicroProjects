#include<windows.h>
#include<iostream>

int main(void)
{
    HWND hwnd_win = GetForegroundWindow();
    ShowWindow(hwnd_win,SW_HIDE);
    _sleep(4000);
    system("pause >nul");
    return 0;
}
