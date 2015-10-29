#include <iostream>

template<class auriga>
auriga addstuff(auriga a, auriga b)
{
return a+b;    
}

int main()
{
    int x = 5, y = 5, z;
    z=addstuff(x,y);
    std::cout << z << std::endl;
    
}
