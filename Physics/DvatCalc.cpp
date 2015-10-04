#include <iostream>
#include <string>

int distance;
int vo;
int velo;
int acc;
int sec;
int velo2 = velo * velo;
// v = v0 + A*T
// x = x0 + v0*t + 1/2*a*t*t
// v*v = v0 * vo + 2*a(x-x0)

int equation1()
{
    velo = vo + (acc * sec);  
}

int equation2()
{
    distance = 0 + (vo * sec) + (.5 * acc * sec * sec);    
}
int equation3()
{
//    (velo * velo ) = (vo * vo) + 2*acc * distance;   
velo2 = (vo * vo) + 2*acc * distance;   
}

int equation4()
{
    velo = distance / sec;    
}

int main()
{
    int count = 0;
    
    std::cout << " Please enter your distance " << std::endl;
    std::cin >> distance;
    if (std::cin.fail())
    {
        count++;
        std::cin.clear();
    }
    
    std::cout << " Please enter your intial velocity " << std::endl;
    std::cin >> vo;
    if (std::cin.fail()) 
    {
        count++;
        std::cin.clear();
    }
    
    std::cout << "Please enter your velocity " << std::endl;
    std::cin >> velo;
    if (std::cin.fail()) 
    {
        count++;
        std::cin.clear();
    }
    
    std::cout << "Please enter your acceleration " << std::endl;
    std::cin >> acc;
    if (std::cin.fail()) 
    {
        count++;
        std::cin.clear();
    }
    if ( acc = 0)
    {
        
    }
    
    std::cout << "Please enter your time " << std::endl;
    std::cin >> sec;
    if (std::cin.fail()) 
    {
        count++;
        std::cin.clear();
    }
    
    
    if ( count < 2)
    {
        std::cout << "Please enter atleast 3 values " << std::endl;    
    }
    
    equation1();
    equation2();
    equation3();
    equation4();
    
    
    
    std::cout << "Velocity equals : " << velo << std::endl;
    
    std::cout << " The distance equals is: " << distance << std::endl;
    if ( acc != 0)
    {
    std::cout << "The velocity times velocity is "  << (velo * velo) << std::endl;
    }
    if ( acc == 0)
    {
        std::cout << "The average velocity is : " << velo << "\n" << equation4() << std::endl;    
    }
}
