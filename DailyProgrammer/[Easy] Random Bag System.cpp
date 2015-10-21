#include <Windows.h>
#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>


int main()
{
    srand ( time(NULL) ); 
    std::string textArray[7] = {"O", "I", "S", "Z", "L", "J", "T"};
    for(int z = 0; z < 50; z++)
	{
		int RandIndex = rand() % 7; 
		
		std::cout << textArray[RandIndex];
	}
std::cout << std::endl;
system("PAUSE");
}
