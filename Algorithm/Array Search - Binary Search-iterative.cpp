#include <iostream>
#include <vector>

int binarysearch(std::vector <int> a, int target)
{
    int low = 1;
    int high = a.size();
    while(low <= high)
    {
        int mid = low + (high-low)/2;
        if(a[mid] == target)
        {
            return mid; 
        }
        else if(a[mid] < target)
        {
            low = mid+1;
        }
        else
        {
            high = mid-1;    
        }
    }
}


int main()
{
    std::vector<int> myvector;
    for (int i=1; i<=10; i++) myvector.push_back(i);
    binarysearch(myvector,5);
}
