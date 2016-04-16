#include <iostream>
#include <algorithm>
#include <vector>

void bubblesort(int a[], int size)
{
	bool win = true;
    while(win)
    {
        int checker = 0;
		std::cout << "\n";
        for(int z = 0; z < size; z++)
        {
            std::cout << a[z] << " ";
			if(a[z] < a[z+1] && a[z] != a[size])
            {
                checker++;        
            }
			if(a[z] > a[z+1] && a[z] != a[size])
            {
                std::swap(a[z],a[z+1]);
                std::cout << a[z] << " ";
            }
            if(checker == size)
            {
                win = false;
                break;
            }
        }
    }
    std::cout << "\n" << std::endl;
    for(int x = 0; x < size+1; x++)
    {
        std::cout << a[x] << " ";    
    }
}

int main()
{
    int a[] = {8,1,5,4,3,6,7,2};
    bubblesort(a,7); 
	std::cin.get();
}
