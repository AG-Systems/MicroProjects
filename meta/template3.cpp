#include <iostream>


template< typename T >
T add( T a, T b )
    { return a + b; }
int main()
{
    
    std::cout << add( 5, 6 ) << std::endl;
    std::cout << add( 3.14, 3.14 ) << std::endl;
    std::cout << add( std::string ("Auriga"), std::string (" is cool")) << std::endl;
    
}
