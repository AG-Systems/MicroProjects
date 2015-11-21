#include <iostream>
using namespace std;

int main ()
{
    int array []= {7,21,14};

    int smallest = array[0] ;
    for ( int i=1;  i < sizeof(array)/sizeof(array[0]);  ++i )
    {
        if ( array[i] < smallest )
        {
             smallest = array[i];
        }
    }
    std::cout << "Min: "<< smallest << std::endl;
    

    return 0;
}
