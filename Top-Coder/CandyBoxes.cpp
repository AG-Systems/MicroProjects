#include <iostream>

int main()
{
    int boxes [] = {'7', '21', '14'};
    int smallest = boxes[0] ;
        for ( int i=1;  i < sizeof(boxes)/sizeof(boxes[0]);  ++i )
        {
            if ( boxes[i] < smallest )
            {
                smallest = boxes[i] ;
            }
        }
    std::cout << "min: " << smallest << '\n' ;           
    }
}
