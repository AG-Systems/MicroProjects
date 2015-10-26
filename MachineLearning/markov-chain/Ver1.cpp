#include <sstream>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>

int main()
{
    srand ( time(NULL) );
    std::string input = "test one two three.";	
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
    while (ssin.good() && i < n)
    {
        ssin >> arr[i];
        ++i;
    }
    for(i = 0; i < n; i++)
    {
        std::cout << arr[i] << std::endl;
    }
    int RandIndex = rand() % n; 
    std::cout << arr[RandIndex];
}
