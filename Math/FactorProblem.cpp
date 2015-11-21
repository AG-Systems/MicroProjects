#include <iostream>
#include <cmath>

int main()
{
    // 2^2x + 2^x + 2 = 16
    double y;
    double z;

    
    for(int x = 0; x < 100; x++)
    {
        int ff = 2 * x;
        int zz = x + 2;
        y = std::pow(2, ff);
        z = std::pow(2, zz);
        if(z + y == 12)
        {
            std::cout << "The x value is: " << x << std::endl;
            break;
            return 0;
        }
        if ( z + y > 12)
        {
            for (int i = -20; i <= 100 ; ++i) // a = -0.2 to 0.2 step 0.01
            {
                const double a = i / 100.0;
                int ff = 2 * a;
                int zz = a + 2;
                y = std::pow(2, ff);
                z = std::pow(2, zz);
            if(z + y == 12)
            {
                std::cout << "The x value is: " << a << std::endl;
                break;
                return 0;
            }
                
            }    
        }
        
    }   
}

// for andrew
