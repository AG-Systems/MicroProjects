#include <iostream>
#include <vector>

std::vector <int> selectionsort(std::vector <int> a, std::vector <int> b)
{
    int low = a[0];
    for(int z = 0; z < a.size(); z++)
    {
        if(a[z] < low)
        {
            int low = a[z];    
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
    for (int i=1; i<=10; i++) myvector.push_back(i); 
    
    selectionsort(myvector,sortedvector);
}
