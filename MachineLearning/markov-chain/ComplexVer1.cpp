#include <sstream>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>

int main()
{
    srand ( time(NULL) );
    std::string input;
    std::cin >> input;
	int words = 0; // Holds number of words
	
	for(int i = 0; input[i] != '\0'; i++)
	{
		if (input[i] == ' ') //Checking for spaces
		{
			words++;
		} 		
	}
    
	std::cout << "The number of words = " << words+1 << std::endl;
	int n = words+1;
    std::string arr[n];
    int i = 0;
    std::stringstream ssin(input);
    while (ssin.good() && i < 4)
    {
        ssin >> arr[i];
        i++;
    }
    std::cout << "The list of the total words are: " << std::endl;
    for(i = 0; i < 4; i++)
    {
        std::cout << arr[i] << std::endl;
    }
    int RandIndex = rand() % n; 
    std::cout << "---------------------------------------" << std::endl;
    for(int zz = 0; zz < 10; zz++)
    {
    
        RandIndex = rand() % n; 
        std::cout << arr[RandIndex];
    }
}
