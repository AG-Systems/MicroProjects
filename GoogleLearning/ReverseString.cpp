#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

std::vector <char> list;

int main()
{
    std::string input = "hello";
    for(int x = 0; x < input.size(); x++)
    {
        list.push_back (input[x]);
    }
    std::reverse(list.begin(),list.end());
    for(std::vector<char>::const_iterator i = list.begin(); i != list.end(); i++)
    {
        std::cout << *i << ' ';    
    }
}
