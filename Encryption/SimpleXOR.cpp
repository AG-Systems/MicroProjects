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

/*

Line 1-4: Including the generel modules. Fstream and windows are not needed.

Line 13: Starts the for loop.  Runs how big the original string size is.
Line 15: += is a compound which adds to the general string of enc and whatever character the str is at. The ^ symbol makes it so bitwise exclusive or the char key + i divided by 20. 

line 23: make sure the dencrypted string adds and equals to the enc with the interger i equal to OR equal to the char key + i divided by 20;
