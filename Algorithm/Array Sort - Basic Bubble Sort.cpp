#include <iostream>
#include <algorithm>
#include <vector>

void bubblesort(std::vector <int> a)
{
    bool win = true;
    while(win)
    {
        int checker = 0;
        for(int z = 0; z < a.size(); z++)
        {
            if(a[z] > a[z+1])
            {
                std::swap(a[z],a[z+1]);
                std::cout << a[z] << " ";
            }
            if(a[z] < a[z+1])
            {
                checker++;        
            }
            if(checker == a.size())
            {
                win = false;
                break;
            }
        }
    }
    std::cout << "\n" << std::endl;
    for(int x = 0; x< a.size(); x++)
    {
        std::cout << a[x] << " ";    
    }
}

int main()
{
    std::vector <int> array = {2,1,5,4,3,6,7,8};
    bubblesort(array);    
}
