#include <iostream>
#include <string>

template<typename T> int hash (T t);
int main()
{
    std::string str = "Hello!!";
    std::hash <std::string> fn;
    std::size_t hashedstr = fn(str);
    
    std::cout << hashedstr << std::endl;
}
