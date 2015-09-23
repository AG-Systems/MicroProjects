#include <iostream>
#include <string>

/*
Started working on sep 22, 2015

*/

int main()
{
	std::string input;
	std::cout << "Enter a string: " << std::endl;
	std::cin >> input;

	if (input == std::string(input.rbegin(), input.rend())) 
	{
		std::cout << input << " can be read reversed and forwards" ;
	}

	if (input != std::string(input.rbegin(), input.rend()))
	{
		std::cout << input << " cannot be read reversed and forwards";
	}
	system("PAUSE");
}
