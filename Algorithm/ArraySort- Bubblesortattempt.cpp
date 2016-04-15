#include <iostream>
#include <vector>
#include <algorithm>

int bubblesort(int a[])
{
    int size = sizeof(a);
    while(true)
    {
        int checker = 0;
        for(int z = 0; z < size; z++)
        {
			if(a[z+1] < a[z])
            {
                if(z < size )
                {
                    std::cout << a[z] << " ";
                    std::swap(a[z], a[z+1]);
                    checker++;
                }
            }
            if(checker = 0)
            {
                break;
            }
        }
    }
   //  return a[];
}

int main()
{
    int array[] = {5,6,3,2,1,6,8,9,0,1};
    bubblesort(array);        
}
