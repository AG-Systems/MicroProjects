#include <iostream>
#include <algorithm>

void bubblesort(int a[])
{
    bool win = true;

    while(win)
    {
        int checker = 0;
        for(int z = 0; z < sizeof(a)/sizeof(a[0]); z++)
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
            if(checker == sizeof(a))
            {
                win = false;
                break;
            }
        }
    }
    std::cout << "\n" << std::endl;
    for(int x = 0; x< sizeof(a)/sizeof(a[0]); x++)
    {
        std::cout << a[x] << " ";    
    }
}

int main()
{
    int array[] = {1,5,6,8,23,5,8,1};
    bubblesort(array);    
}
