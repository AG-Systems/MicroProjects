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
    size_t size = sizeof(array)/sizeof(int);
    for(int c = 0; c < sizeof(array)+ 1; c++)
    {
        for(int z = 0; z < 26;z++)
	    {
		    size_t n = std::count(array[c].begin(), array[c].end(), Alpha[z]);
		    if (n > 0)
		    {
			tracker[z] += n;
		    }
	    }
    }
    for(int x = 0; x < 26; x++)
    {
		std::cout << Alpha[x] << ": " << tracker[x] << std::endl;
    }
}

int main()
{
    std::string array[] = {"hello","my","name","is","auriga", "ffffff"};
	std::cout << sizeof(array) << std::endl;
    counter(array);
	std::cin.get();
}
