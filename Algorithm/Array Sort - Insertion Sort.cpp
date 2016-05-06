#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <algorithm>

void insertionsort(std::vector <int> a)
{
	for(int z = 0; z < a.size()-1; z++)
	{
		int next = z + 1;
		int temp = a[next];
		while(next > 0 && temp > a[next-1])
		{
			a[next] = a[next-1];
			next--;
		}
		a[next] = temp;
	}
	for(int c = 0; c < a.size();c++)
	{
	    std::cout << a[c] << " ";        
	}
    
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
    insertionsort(myvector);
}
