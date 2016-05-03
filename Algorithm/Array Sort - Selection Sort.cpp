#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>
#include <ctime>

std::vector <int> selectionsort(std::vector <int> a, std::vector <int> b)
{
    int low = a[0];
    for(int z = 0; z < a.size(); z++)
    {
        if(a[z] < low)
        {
            low = a[z];    
        }
    }
    std::cout << low << " ";
    b.push_back (low);
	for(int x = 0; x < a.size(); x++)
	{
		if(a[x] == low)
		{
			a.erase(a.begin() + (x));				
		}

	}
	if(a.size() < 1)
	{
		return a;
	}
    selectionsort(a,b);
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
	std::cout << "\n";
    selectionsort(myvector,sortedvector);
}
