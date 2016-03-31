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
int Istr::count(std::string str, int xx)
{
	std::vector <int> list;
	std::vector <int> finallist;
	char max = ' ';
	int maxvalue = 0;
	int xcount = 0;
	bool letter = false;
	for(int z = 0; z < 26;z++)
	{
		size_t n = std::count(str.begin(), str.end(), AlphabetLower[z]);
		std::cout << AlphabetLower[z] << ": " << n << std::endl;
		if(n > maxvalue)
		{
		    maxvalue = n; 

		}
		int zz = n * n;
		list.push_back (zz);
	}
	if(xx == 0)
	{
	    int counter = 0;
	    for(int i = 0; i < 26; i++)
	    {
	        counter += list[i];        
	    }
	     std::cout << "Value of the string is: " << counter << std::endl;
	     return counter;
	}
	if(xx != 0)
	{
		for(int z = 0; z < 26; z++)
		{
		    size_t n = std::count(str.begin(), str.end(), AlphabetLower[z]);
			std::cout << AlphabetLower[z] << ": " << n << std::endl;
		    if(n == maxvalue || n > maxvalue && letter == false)
		    {
				letter == true;        
		    }
			if(n == maxvalue || n > maxvalue && letter == true)
		    {
				int zz = n * n;
		        finallist.push_back (zz);	       
		    }		 
		    if(n < maxvalue)
		    {
                int zz = n * n;
		        finallist.push_back (zz);
		    }
	    }
	    int finalcounter = 0;
	    for(int i = 0; i < 26; i++)
	    {
	        finalcounter += finallist[i];        
	    }
	    std::cout << "Value of the string is: " << finalcounter << std::endl;
	    return finalcounter;
	}
}
int main()
{
	std::string str = "aba"; 
	Istr a;
	a.count(str, 1);
	std::cin.get();
}
