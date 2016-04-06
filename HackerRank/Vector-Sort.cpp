#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>


int main() 
{
    int size;
    int temp;
    std::cin >> size;
    std::vector <int> list;
    for(int z = 0; z < size; z++)
    {
        std::cout << "Please input the numbers you want: " << std::endl;
        std::cin >> temp;
        list.push_back (temp);
    }
    sort(list.begin(),list.end());
    return 0;
}
