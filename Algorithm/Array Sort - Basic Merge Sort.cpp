#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector <int> list {1,2,3,4,5,6,7,8};
	if(list.size() / 2 )
	{
		std::size_t const half_size = list.size() / 2;
		std::vector<int> split_lo(list.begin(), list.begin() + half_size);
		std::vector<int> split_hi(list.begin() + half_size, list.end());
		
		
	}
}
