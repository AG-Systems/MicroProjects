#include <iostream>
#include <vector>

void insertionsort(std::vector <int> list)
{
	int wall = list[0];
	for(int z = 1; z < list.size(); z++)
	{
		if(list[z] > list[z-1])
		{
			for(int x = z; x > 0; x--)
			{
				if(list[x] > list[x+1])
				{
					list.insert(list.begin()+x, list.begin()+x+1);
				}
			}
		}
	}
}


int main()
{

}
