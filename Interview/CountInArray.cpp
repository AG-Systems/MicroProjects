#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

const char Alpha[26] =
{
	'a', 'b', 'c', 'd', 'e', 'f', 'g',
	'h', 'i', 'j', 'k', 'l', 'm', 'n',
	'o', 'p', 'q', 'r', 's', 't', 'u',
	'v', 'w', 'x', 'y', 'z'
};
std::vector <int> tracker (26, 0);
void counter(std::string array[])
{
    std::vector <char> counter;
	size_t size = sizeof(array)/sizeof(int);
    for(int c = 0; c < sizeof(array); c++)
    {
        for(int z = 0; z < 26;z++)
	    {
		    size_t n = std::count(array[c].begin(), array[c].end(), Alpha[z]);
		    if (n > 0)
		    {
		        for(int xx =0; xx < n; xx++)
		        {
		            counter.push_back (Alpha[z]);	
		        }
		    }

	    }
    }
    for(int z = 0; z < size; z++)
    {

        if(Alpha[z] == counter[z])
        {
            tracker[z]++;        
        }
    }
    for(int z = 0; z < size; z++)
    {
        std::cout << Alpha[z] << ": "<< tracker[z] << std::endl;
    }   
}

int main()
{
    std::string array[] = {"a","b","c","a","b"};
    counter(array);
}
