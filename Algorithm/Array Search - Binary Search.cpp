#include <iostream>
#include <vector>

std::vector <int> binarysearch(std::vector <int> list,int target)
{
    int half = list.size() / 2;
    if (list.size() <= 2)
    {
        for(int c = 0; c < 2; c++)
        {
            if(list[c] == target)
            {
                std::cout << "Found" << std::endl;
                return list;    
            }
        }
    }
    if(list.size() % 2 == 0 && list.size() > 2)
    {
        if(target == list[half])
        {
            std::cout << "Found number in this position: " << half << std::endl;
            return list;
        }
        else if(list[half] > target)
        {
            for(int z = 0; z < target; z++)
            {
               list.erase(list.begin());
            }
        }
        else if (list[half] < target)
        {
            int half = list.size() / 2;
            for(int z = list.size(); z > target; z--)
            {
                 list.pop_back();                    
            }
        }
    }
	else if(list.size() > 2)
	{
	    if(target == list[half])
        {
            std::cout << "Found number in this position: " << half << std::endl;
            return list;
        }
        else if(list[half+1] > target || list[half-1] > target)
        {
            for(int z = 0; z < target; z++)
            {
               list.erase(list.begin());
            }
        }
        else if (list[half+1] < target || list[half-1] < target)
        {
            int half = list.size() / 2;
            for(int z = list.size(); z > target; z--)
            {
                 list.pop_back();                    
            }
        }		
	}
    binarysearch(list,target);
}

int main()
{
    std::vector<int> myvector;
    for (int i=1; i<=10; i++) myvector.push_back(i);  
    
    binarysearch(myvector,5);
}
