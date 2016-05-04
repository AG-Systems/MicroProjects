#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <iterator>

std::vector <int> quicksort(std::vector <int> list,int counter)
{
	int pivot = list[list.size()-1];
	bool checker = false;
	for(int z = counter; z < list.size(); z++)
	{
		if(list[z] < pivot)
		{
			std::swap (list[counter], list[z]);
			std::cout << pivot << " ";
			checker = true;
			break;
		}
	}
	std::swap (list[counter+1], pivot);
	pivot = list[counter+1];
	if(counter == list.size())
	{
		return list;
	}
	counter++;
	quicksort(list,counter);
}

int main()
{
	std::vector <int> myvector;
	int a[8] = {0, 1, 2, 3, 4, 5, 6, 7};
	std::srand(unsigned(time(0)));

    std::random_shuffle(a, a + 8);
    for (int i=0; i<8; i++)
    {
        std::cout << a[i] << " ";
        myvector.push_back (a[i]);
    }
    std::cout << "\n";
	quicksort(myvector,0);
}
