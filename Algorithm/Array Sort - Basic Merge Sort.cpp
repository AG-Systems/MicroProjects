#include <iostream>
#include <algorithm>
#include <vector>

std::vector <int> mergesort(std::vector <int> list)
{
    int n = list.size();
    if(n == 1)
    {
        return list;    
    }
    
}

std::vector <int> merge(std::vector <int> list1, std::vector <int> list2)
{
    std::vector <int> list3; 
    while(list1.size() > 0 && list2.size() > 0)
    {
        if(list1[0] > list2[0])
        {
            list3.push_back (list2[0]);
            list2.erase (list2.begin());
        }
        else
        {
            list3.push_back (list1[0]);
            list1.erase (list1.begin());
        }
    }
    while(list1.size() > 0)
    {
        list3.push_back (list1[0]);
        list1.erase (list1.begin());
    }
    while(list2.size() > 0)
    {
        list3.push_back (list2[0]);   
        list2.erase (list2.begin());     
    }
    return list3;
}
int main()
{
        
}
