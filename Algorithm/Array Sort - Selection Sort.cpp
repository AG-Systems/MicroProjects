#include <iostream>
#include <vector>

std::vector <int> selectionsort(std::vector <int> a, std::vector <int> b)
{
    int low;
    for(int z = 0; z < a.size(); z++)
    {
        if(a[z] < low)
        {
            int low = a[z];    
        }
    }
    std::cout << low << " ";
    b.push_back (low);
    a.erase(a.begin() + (low-1));
    selectionsort(a,b);
}

int main()
{
    std::vector<int> myvector;
    std::vector<int> sortedvector;
    for (int i=1; i<=10; i++) myvector.push_back(i); 
    
    selectionsort(myvector,sortedvector);
}
