#include <iostream>
#include <algorithm>
#include <vector>

const char AlphabetLower[26] =
{
	'a', 'b', 'c', 'd', 'e', 'f', 'g',
	'h', 'i', 'j', 'k', 'l', 'm', 'n',
	'o', 'p', 'q', 'r', 's', 't', 'u',
	'v', 'w', 'x', 'y', 'z'
};

class Istr
{
public:
	int count(std::string,int);
};
int Istr::count(std::string str, int x)
{
	std::vector <int> list;
	for(int z = 0; z < 26;z++)
	{
		size_t n = std::count(str.begin(), str.end(), AlphabetLower[z]);
		std::cout << AlphabetLower[z] << ": " << n << std::endl;
		int zz = n * n;
		list.push_back (zz);
	}
	if(x == 0)
	{
	    int counter = 0;
	    for(int i = 0; i < 26; i++)
	    {
	        int counter += list[i];        
	    }
	    return counter;
	}
	
}
int main()
{
	std::string str = "aba"; 
	Istr a;
	a.count(str, 0);
}
