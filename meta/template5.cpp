#include <iostream>}
template <class T> 
class project
{
    public:
    T a;
    T b;
    T add(T a, T b)
    {
        return a + b;    
    }
};


int main()
{
    project <int> project1; 
    project1.a = 1;
    project1.b = 2;
    
    std::cout << project1.add(project1.a,project1.b) << std::endl;
}
