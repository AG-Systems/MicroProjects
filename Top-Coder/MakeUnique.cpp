#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

std::vector <char> list;
std::vector <char> auriga;
const char slash = ".";
const char AlphabetLower[26] =
{
	'a', 'b', 'c', 'd', 'e', 'f', 'g',
	'h', 'i', 'j', 'k', 'l', 'm', 'n',
	'o', 'p', 'q', 'r', 's', 't', 'u',
	'v', 'w', 'x', 'y', 'z'
};

int main()
{
    std::string orignal = "ABBBXCXABCX";
    for(int z = 0; z < 26;z++)
	{
	    size_t n = std::count(orignal.begin(), orignal.end(), AlphabetLower[z]);
		std::cout << AlphabetLower[z] << ": " << n << std::endl;
		if (n > 0)
		{
		    for(int xx =0; xx < n; xx++)
		    {
		        list.push_back (AlphabetLower[z]);	
		    }
		}
	}
	
for(int g = 0; g < orignal.size(); g++)
{
    for(int z = 0; z < orignal.size(); z++)
    {
        if(list[g] != list[z])
        {
            auriga.push_back (slash);
        }
        else if(list[g] == list[z])
        {
            auriga.push_back (list[g]);    
        }
    }
}
}
