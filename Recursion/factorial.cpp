#include <iostream>

int factorial(int n)
{
    if(n < 1)
    {
        return 1;    
    }
    else
    {
        int temp = n * (factorial(n-1));
        return temp;
    }
}

int main()
{
    std::cout << factorial(5) << std::endl;    
}
