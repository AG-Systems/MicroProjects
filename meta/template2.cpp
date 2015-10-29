#include <iostream>
using namespace std;
template <class t>
class mini
{
    public:
        mini(t x)
        {
           std::cout << x << " is not a character!"  << std::endl;   
        }
};

template<>
class mini<char>
{
    public:
        mini(char x)
        {
            std::cout << x << " :is indeed a character!" << std::endl;    
        }
};

int main()
{
    mini<int> obj1(7);
    mini<double> obj2(3.1);
    mini<char> obj3('z');
}
