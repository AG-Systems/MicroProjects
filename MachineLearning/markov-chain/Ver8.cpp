#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
#include <vector>
#include <stdlib.h>
#include <time.h>

std::string input = "Hello my name is ";
char choose;
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
	std::cout << "Please choose a character:  " << std::endl;
	std::cin >> choose;
	std::cout << "The setence that will be used: " << input << std::endl;
	//std::cin >> input;
	//std::ofstream myfile;
	//myfile.open ("MachineLearning.txt");
	std::vector<char> pool;
	std::vector<char> chain;
	char picker;
	for(int z = 0; z < 26;z++)
	{
		size_t n = std::count(input.begin(), input.end(), AlphabetLower[z]);
		std::cout << AlphabetLower[z] << ": " << n << std::endl;
		//myfile << AlphabetLower[z] << ": " << n << std::endl;
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
    std::cout << "\n" << "----------------------------------------------" << "\n" << "Predication: " << std::endl;
	for (int zz = 0; zz < 1; zz++)
	    {
    	    randomIndex = rand() % pool.size();
		    std::cout << "Next character will be: " <<pool[randomIndex] << std::endl;
		    picker = pool[randomIndex];
	    }
		input.erase(remove_if(input.begin(), input.end(), isspace), input.end());
        for ( int i = 0 ; i < input.length(); i++)
        {
                if ( input[i] == picker)
                {
                    i++;
                    chain.push_back ( input[i] );
                    std::cout << "This character got pushed:  " << "\n" << input[i] << std::endl;
                }
        }
    
    for (std::vector<char>::const_iterator xx = chain.begin(); xx != chain.end(); ++xx)
    {
        std::cout << "Chain total: " << "\n " << *xx << ' ';
    }
    
    int ri = rand() % chain.size();
    std::cout << "\n " << "The machine learning predict will be:  " << chain[ri];
    std::cout << "\n " << "---------------------------------------------------" << "\n" << "CUSTOM CHARACTER: " << std::endl;
    std::cout << "The character that you choosed is: " << choose << std::endl;
	chain.clear();
	for ( int i = 0 ; i < input.length(); i++)
        {
                if ( input[i] == choose)
                {
                    i++;
                    chain.push_back ( input[i] );
                    //std::cout << "This character got pushed: " << "\n" << input[i] << std::endl;
                }
        }
      int rf = rand() % chain.size();
      std::cout << "The machine learning predict while using the character you have choosen will be:  " << chain[rf];        
	  	std::cin.get();
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
