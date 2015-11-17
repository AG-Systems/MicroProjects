#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <vector>
int main()
{
    srand ( time(NULL) );
    std::vector <int> list;
    const int  arrayNum[46] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45};
    int picks[7] = {42, 26, 33, 2, 13, 14};    
    for (int z = 0; z < 6; z++)
    {
        int randIndex = rand() % 46;
        list.push_back (arrayNum[randIndex]);
    }
    std::cout << "Drawing: ";
    for (std::vector<int>::const_iterator xx = list.begin(); xx != list.end(); ++xx)
    {
        std::cout << *xx << ' ';
    }
    
}
