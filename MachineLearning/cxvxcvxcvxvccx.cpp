#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
#include <vector>
#include <stdlib.h>
#include <time.h>

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
		if (n == 2)
		{
		    pool.push_back (AlphabetLower[z]);
		    pool.push_back (AlphabetLower[z]);		    
		}
        if (n ==1)
        {
            pool.push_back (AlphabetLower[z]);  
        }

	}
    std::cout << "The size of the pool is: " << pool.size() << std::endl;
    for (std::vector<char>::const_iterator i = pool.begin(); i != pool.end(); ++i)
    {
        std::cout << *i << ' ';
    }
    int randomIndex = rand() % pool.size();
	std::cout << randomIndex << std::endl;
}


/*
1. Counts each specific letter
2. Assigns a value to each letter
3. Remove all of the zeros in the "pool". So you end up having all of the letters counted above 0 to be in a list.
4. Get the percents of each letter.
5. Use the computer to predict what letter will go next.
6. Output to console so the user sees what the computer is predicating.

*/

/*
Explaintions def:
Total = Counts the total amount of characters in a string. This will be responsible of making the vector/array with that size
input = String that the user inputted
Alphabet[z] = Goes through the array of the alphabet. 

Things need to be fixed::
Fix and figure out whats wrong with the switch statements.

*/