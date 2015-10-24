#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

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
	srand ( time(NULL) );
	std::cout << "Please start typing: " << std::endl;
	std::cin >> input;
	std::ofstream myfile;
	myfile.open ("MachineLearning.txt");
	std::vector<char> pool;
	for(int z = 0; z < 26;z++)
	{
		size_t n = std::count(input.begin(), input.end(), AlphabetLower[z]);
		std::cout << AlphabetLower[z] << ": " << n << std::endl;
		myfile << AlphabetLower[z] << ": " << n << std::endl;
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
	system("PAUSE");
}


/*
1. Counts each specific letter
2. Pushs the amount of letters into a array/vector
3, Pulls a random letter from the pool

*/

/*
Explaintions def:
Total = Counts the total amount of characters in a string. This will be responsible of making the vector/array with that size
input = String that the user inputted
Alphabet[z] = Goes through the array of the alphabet. 


*/
