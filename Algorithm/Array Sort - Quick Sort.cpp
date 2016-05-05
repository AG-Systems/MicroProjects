#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>

void minisort(std::vector <int> minilist, std::vector <int> emptylist)
{
	bool checker = true;
	while(checker)
	{
		int tracker = 0;
		for(int z = 0; z <= minilist.size()-1; z++)
		{
			if(minilist[z] != minilist[minilist.size()-1])
			{
				if(minilist[z] > minilist[z+1])
				{
					std::iter_swap(minilist.begin()+z,minilist.begin()+z+1);								
				}
				else
				{
					tracker++;	
				}
			}
			else if(minilist.size() < 2)
			{
				return;
			}
		}
		if(tracker >= minilist.size()-2)
		{
			checker = false;
			break;
		}
	}
	for(int x = 0; x < minilist.size(); x++)
	{
		std::cout << minilist[x] << " ";
		emptylist.push_back(minilist[x]);
	}
}

void quicksort(std::vector <int> list,std::vector <int> emptylist)
{
    int pivot = list[list.size()-1];
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
	minisort(low,emptylist);
	emptylist.push_back(pivot);
	minisort(high,emptylist);

}

int main()
{
    std::vector<int> myvector;
    std::vector<int> sortedvector;
	int a[8] = {0, 1, 2, 3, 4, 5, 6, 7};
    std::srand(unsigned(time(0)));
    std::random_shuffle(a, a + 8);
	for (int i=0; i<8; i++)
    {
        std::cout << a[i] << " ";
        myvector.push_back (a[i]);
    }   
    std::cout << "\n" << std::endl;
    quicksort(myvector,sortedvector);
	std::cin.get();
}
