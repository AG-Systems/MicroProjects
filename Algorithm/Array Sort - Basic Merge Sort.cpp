#include <iostream>
#include <vector>
#include <algorithm> 
#include <iterator>

void merge(std::vector <int> v1,std::vector <int> v2, std::vector <int> v3)
{
	std::vector <int> finallist;
	std::vector<int> v2(v1.begin(), v1.begin() + v1.size()/2),
					 v3(v1.begin() + v1.size()/2, v1.end());
	if(v2.size() == 0 || v3.size() == 0)
	{
		if(v2[0] < v3[0])
		{
			finallist.push_back (v2[0]);
			finallist.push_back (v3[0]);
		}
		else
		{
			finallist.push_back (v3[0]);
			finallist.push_back (v2[0]);	
		}
		return;
	}
	else
	{
		merge(v2, v3, v3);
	}
}

int main()
{


}
