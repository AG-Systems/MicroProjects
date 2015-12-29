#include <iostream>

int main()
{
    for(int x = 0; x < 100; x++)
    {
        if(x % 3 == 0 && x % 5 == 0)
        {
            std::cout << "Fizzbuzz" << std::endl;    
        }
        else if(x % 3 == 0)
        {
            std::cout << "Fizz" << std::endl;    
        }
        else if(x % 5 == 0)
        {
            std::cout << "Buzz" << std::endl;    
        }
        else
        {
            std::cout << x << std::endl;    
        }
    }
}
