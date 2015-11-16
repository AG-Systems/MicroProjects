#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <algorithm>

std::vector<int> list;

int main()
{
    int a[8] = {0, 1, 2, 3, 4, 5, 6, 7};
    std::srand(unsigned(time(0)));

    std::random_shuffle(a, a + 8);

    for (int i=0; i<8; i++)
    {
        std::cout << a[i] << " ";
        list.push_back (a[i]);
    }
    
    bool running = true;
    while(running)
    {
        if (is_sorted(list.begin(), list.end()) )
        {
            running = false;
            break;
        }
       std::random_shuffle(list.begin(), list.end()); 
    }
if (is_sorted(list.begin(), list.end()) )
    {
        for (int z = 0; z < 8; z++)
        {
            std::cout << list[z] << " ";    
        }
        std::cout << "\n";
        std::cout << "Finished " << std::endl;
    }
}
