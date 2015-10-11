#include <Windows.h>
#include <iostream>
#include <string>
#include <time.h>

std::string input;
std::string intro;
std::string lock = "meepoisgay";
int mode;
int customtime;

int main()
{
	std::cout << "Welcome to the Auriga MonitorSleep program. Type \"help\" or \"start\" " << std::endl;
	std::cin >> intro;
	if (intro == "help")
	{
		std::cout << "Read the instructions you dumby " << std::endl;
		std::cout << "The password is admin if you want to have some fun ;) " << std::endl;
	}
	else if (intro =="start")
	{
		
	}
	std::cout << "Please choose how long you want to put your montior to be sleeping for " << std::endl;
	std::cout << "1 = 5 minutes " << "\n" << "2 = 10 minutes " << "\n" << "3 = 30 minutes " << std::endl;
	std::cin >> mode;
	switch (mode)
	{
	case 1:
		customtime = 50000;
	case 2:
		customtime = 100000;
	case 3:
		customtime = 30000;
	}
	std::cout << "Please enter \"meepoisgay\" to start the program " << std::endl;
	std::cin >> input;
	if (input == "meepoisgay")
	{
		std::cout << " Sleep mode is activated " << std::endl;
		Sleep(1000);
		SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, (LPARAM)2);
		Sleep(customtime);
		SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, (LPARAM)-1);
	}
	else if (input != "meepoisgay" || input == "admin")
	{
		std::cout << "Welcome to the admin section " << std::endl;
		Sleep(1000);
		std::cout << "Nothing is here. Go away you dummy." << std::endl;
		
	}
	if (input != "meepoisgay" || input != "admin" )
	{
		std::cout << "Learn how to type and read " << std::endl;
		std::cout << "Please run this program again " << std::endl;
		syste("PAUSE");
		return 0;
	}
	
}
