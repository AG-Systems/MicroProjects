#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
#include <vector>
#include <stdlib.h>
#include <time.h>

int x;
int y;

const char AlphabetLower[26] =
{
	'a', 'b', 'c', 'd', 'e', 'f', 'g',
	'h', 'i', 'j', 'k', 'l', 'm', 'n',
	'o', 'p', 'q', 'r', 's', 't', 'u',
	'v', 'w', 'x', 'y', 'z'
};


std::vector< char > list(AlphabetLower, AlphabetLower + sizeof(AlphabetLower) / sizeof(int));

int main()
{
    int x = 0;
    int y = x + 1;
    std::string str = "Hello my name is ";
    str.erase(remove_if(str.begin(), str.end(), isspace), str.end()); 
    for(int zz = 0; 0 < str.size(); zz++)
    {
       str.find (x, y); 
       list.push_back(str.find(y));
       y++;
       std::cout <<  list << std::endl; 
       
    }
}
