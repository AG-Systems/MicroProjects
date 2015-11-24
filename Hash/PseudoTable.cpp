#include <iostream>
#include <string>
#include <vector>

std::vector <std::string> table;
int main()
{
    
    std::string passwords[] = {"123456", "password", "master", "root"};
    std::hash <std::string> fn;
    for(int z = 0; z < sizeof(passwords); z++)
    {
        std::size_t finalstr = fn(passwords[z]);
        table.push_back (finalstr);
    }
    
    for (std::vector<std::string>::const_iterator i = table.begin(); i != table.end(); ++i)
    std::cout << *i << ' ';
    
}
