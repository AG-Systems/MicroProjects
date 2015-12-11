#include <iostream>

template <typename B> 

B add(B a, B b)
{
    return a + b;    
}

template <class T> 
class project
{
    public:
    T a;
    T b;
    
};


int main()
{
    project <int> project1; 
    project1.a = 1;
    project1.b = 2;
    
    std::cout << add(project1.a,project1.b) << std::endl;
}
