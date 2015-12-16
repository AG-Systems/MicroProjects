#include <iostream>

int main()
{
    int var = 100;
    int * var1 = &var;
    int var2 = var;
    std::cout << var1 << "\n" << var2 << std::endl;
}
