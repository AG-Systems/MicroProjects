#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	std::string str = "Auriga ";
	std::string enc;
	std::string dnc;
	char key = 'x';
	srand ( time(NULL) );
	const char arrayNum[10] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '10'};
	int MOD = rand() % 11; 

	for (int i = 0; i < str.size(); i++)
	{
		enc += str[i] ^ (int(key) + i) % MOD;

	}
	std::cout << "Encrypted: " << enc << std::endl;
	

	for (int i = 0; i < enc.size(); i++)
	{
		dnc += enc[i] ^ (int(key) + i) % MOD;

	}

	std::cout << "Decrypted: " << dnc << std::endl;
	system("PAUSE");
	return 0;
	
}


