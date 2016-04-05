#include <iostream>

int repeat(int z)
{
    std::cout << z << std::endl;
    z++;
    if(z < 10)
    {
        repeat(z);    
    }
}

int main()
{
    int z = 0;
    repeat(z);
}
