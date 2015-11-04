#include <sstream>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <vector>

std::string choose;

int main()
{
    srand ( time(NULL) );
    std::string input = "test one test three.";
    std::string copy = "test one test three."; 
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
    
    std::vector<std::string> final; 
    int counter = 0;
    for(int ff = 0; 0 < 100; ff++)
    {
        int RandIndex = rand() % n; 
        //std::cout << arr[RandIndex] << std::endl;
    
        std::string choose = arr[RandIndex];
        std::cout << "The random word is: " << choose << std::endl;
        for(int x = 0; x < copy.size(); x++)
        {
            if (arr[x].find(choose, 0) != std::string::npos)
            {
                counter++;
                final.push_back (arr[x+1]);
            
            }
        int rf = rand() % counter;
        std::cout << "The predict word is: " << final[rf] << std::endl;
        ff--;
        final.clear();
        }
    
    }

    
    
  std::cout << "Return " << std::endl;  
    
    
}
