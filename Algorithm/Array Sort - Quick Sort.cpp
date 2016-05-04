#include <iostream>
#include <vector>
#include <algorithm>

void quicksort(std::vector <int> list,std::vector <int> emptylist)
{
    int pivot = list[list.size()];
    list.pop_back();
    std::vector <int> low;
    std::vector <int> high;
    int checker = 0;
    for(int z = 0; z < list.size(); z++)
    {
        if(list[z] <= pivot)
        {
            low.push_back(list[z]);    
        }
        else
        {
            high.push_back(list[z]);    
        }
    }
    for(int z = 0; z < low.size(); z++)
    {
        std::cout << low[z] << " ";
		if(low[z] < low[z+1] && low[z] != low[low.size()])
        {
            checker++;        
        }
		if(low[z] > low[z+1] && low[z] != low[low.size()])
        {
            std::swap(low[z],low[z+1]);
            std::cout << low[z] << " ";
        }
        if(checker == low.size())
        {
            break;
        }
    }
    for(int z = 0; z < high.size(); z++)
    {
        std::cout << high[z] << " ";
		if(high[z] < high[z+1] && high[z] != high[high.size()])
        {
            checker++;        
        }
		if(high[z] > high[z+1] && high[z] != high[high.size()])
        {
            std::swap(high[z],high[z+1]);
            std::cout << high[z] << " ";
        }
        if(checker == low.size())
        {
            break;
        }
    }
    for(int z = 0; z < low.size(); z++)
    {
        emptylist.push_back(low[z]);    
    }
    emptylist.push_back(pivot);
    for(int z = 0; z < high.size(); z++)
    {
        emptylist.push_back(high[z]);    
    }
    
}

int main()
{
    
}
