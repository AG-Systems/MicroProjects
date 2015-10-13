#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>

int main()
{
	std::string str = "Auriga ";
	std::string enc;
	std::string deenc;
	char key = 'x';

	for (int i = 0; i < str.size(); i++)
	{
		enc += str[i] ^ (int(key) + i) % 20;

	}
	std::cout << "Encrypted: " << enc << std::endl;
	

	for (int i = 0; i < enc.size(); i++)
	{
		deenc += enc[i] ^ (int(key) + i) % 20;

	}

	std::cout << "Decrypted: " << deenc << std::endl;
	system("PAUSE");
	return 0;
	
}
