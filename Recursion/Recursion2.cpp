#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector>

const char arrayNum[11] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '10', '10'};
int arrayfiller(std::vector <int> list,int x)
{
    
    if(x < 1)
    {
        return 0;    
    }
    else
    {
        int RandIndex = rand() % 11; 
        list.push_back (arrayNum[RandIndex]);
        std::cout << "Inserting: " << arrayNum[RandIndex] << std::endl;  
        arrayfiller(list,x-1);
    }
    
}
int main()
{
    srand ( time(NULL) );
    int RandIndex = rand() % 11; 
    std::vector <int> list;
    arrayfiller(list,5);
}
