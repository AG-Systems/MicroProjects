#include <iostream>
#include <string>
#include <sstream>
#include <vector>

std::vector<std::string> list;

int main()
{
    std::string cases;
    std::cin >> cases;
    std::cout << cases;
    std::string input;
    std::cin >> input;
    std::cout << input;
    std::istringstream ss(input);
    std::string final;
    
    while(std::getline(ss, final, ' '))
    {
        std::cout << final << std::endl; 
        list.push_back (final);
        
    }
    vector<std::string> v2 (list.rbegin(), v1.rend());
    for(
    
}
