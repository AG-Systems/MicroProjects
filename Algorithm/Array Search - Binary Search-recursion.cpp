#include <iostream>
#include <vector>

int binarysearch(std::vector <int> list, int target, int low, int high)
{
    if(high < low)
    {
        return 1;    
    }
    int mid = (low + high) / 2;
    if(list[mid] > target)
    {
        return binarysearch(list,target,low,mid-1);    
    }
    else if(list[mid] < target)
    {
        return binarysearch(list,target,mid+1, high);    
    }
    else
    {
        return mid;    
    }
}
int main()
{
    std::vector <int> mylist;
    for(int x = 0; x < 10; x++)
    {
        mylist.push_back(x);    
    }
    binarysearch(mylist,5,1,10);
}


