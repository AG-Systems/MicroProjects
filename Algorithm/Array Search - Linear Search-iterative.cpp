#include <iostream>
#include <iterator>
#include <type_traits>

void linearsearch(int key, int a[],int arraysize)
{
	// int size = std::extent<decltype(a)>::value;
	for(int z = 0; z < arraysize; z++)
	{
		if(key == a[z])
		{
			std::cout << "Found. The position is: " << z << std::endl;
			break;
		}
	}
}

int main()
{
	int array[] = {1,2,3,4,5,6,7,8};
	linearsearch(5,array, 8);
	std::cin.get();
}
