#include <iostream>
#include <Windows.h>
#include <string>
#include <algorithm>


std::string input;

const char AlphabetLower[26] =
{
	'a', 'b', 'c', 'd', 'e', 'f', 'g',
	'h', 'i', 'j', 'k', 'l', 'm', 'n',
	'o', 'p', 'q', 'r', 's', 't', 'u',
	'v', 'w', 'x', 'y', 'z'
};


int main()
{
	std::cout << "Please start typing: " << std::endl;
	std::cin >> input;
	for(int z = 0; z < 26;z++)
	{
		size_t n = std::count(input.begin(), input.end(), AlphabetLower[z]);
		std::cout << AlphabetLower[z] << n << std::endl;
	}
	system("PAUSE");


}
