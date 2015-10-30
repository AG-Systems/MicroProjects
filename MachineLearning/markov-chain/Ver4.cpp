#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
#include <vector>
#include <stdlib.h>
#include <time.h>

const char AlphabetLower[26] =
{
	'a', 'b', 'c', 'd', 'e', 'f', 'g',
	'h', 'i', 'j', 'k', 'l', 'm', 'n',
	'o', 'p', 'q', 'r', 's', 't', 'u',
	'v', 'w', 'x', 'y', 'z'
};

std::string inputf = "Hello my name is ";
int x = inputf.size();
int y = x -1;
std::string z;

int main()
{
    srand ( time(NULL) );
    for(int zz = 0; 0 < inputf.length(); zz++)
    {
		std::string inputx = inputf.erase (y,x);
		std::vector<char> pool;
		for(int z = 0; z < 26;z++)
		{
			size_t n = std::count(inputx.begin(), inputx.end(), AlphabetLower[z]);
			//std::cout << AlphabetLower[z] << ": " << n << std::endl;
			if (n > 0)
			{
				for(int xx =0; xx < n; xx++)
				{
					pool.push_back (AlphabetLower[z]);	
				}
			}

		}
		std::cout << "The size of the pool is: " << pool.size() << std::endl;
		for (std::vector<char>::const_iterator i = pool.begin(); i != pool.end(); ++i)
		{
			std::cout << *i << ' ';
		}
		int randomIndex = rand() % pool.size();
		std::cout << "\n" << "----------------------------------------------" << "\n" << "Predication: " << "\n" << std::endl;
		for (int zz = 0; zz < 10; zz++)
		{
    		randomIndex = rand() % pool.size();
			std::cout << pool[randomIndex];	
		}
        
        x--;
		y--;
        
    }
    
}


/*

	srand ( time(NULL) );
	std::vector<char> pool;
	for(int z = 0; z < 26;z++)
	{
		size_t n = std::count(input.begin(), input.end(), AlphabetLower[z]);
		std::cout << AlphabetLower[z] << ": " << n << std::endl;
		if (n > 0)
		{
		    for(int xx =0; xx < n; xx++)
		    {
		        pool.push_back (AlphabetLower[z]);	
		    }
		}

	}
    std::cout << "The size of the pool is: " << pool.size() << std::endl;
    for (std::vector<char>::const_iterator i = pool.begin(); i != pool.end(); ++i)
    {
        std::cout << *i << ' ';
    }
    int randomIndex = rand() % pool.size();
    std::cout << "\n" << "----------------------------------------------" << "\n" << "Predication: " << "\n" << std::endl;
	for (int zz = 0; zz < 10; zz++)
	{
    	randomIndex = rand() % pool.size();
		std::cout << pool[randomIndex];	
	}


	*/
