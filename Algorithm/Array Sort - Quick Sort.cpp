#include <iostream>
#include <vector>

void quickstart(std::vector <int> list,std::vector <int> sortedvector,int counter)
{
	int pivot = list[list.size()];
	std::vector <int> lesser;
	std::vector <int> greater;
	std::vector <int> mid;
	bool checker = false;
	for(int z = counter; z < list.size(); z++)
	{
		if(list[z] < pivot)
		{
			lesser.push_back(list[z]);
			checker = true;
		}
		if(list[z] > pivot)
		{
			greater.push_back(list[z]);
		}
	}
	if(checker == false)
	{
		lesser.push_back(pivot);
	}
	if(checker == true)
	{
		mid.push_back(pivot);
	}
	sort(lesser,greater,counter);
}
void sort(std::vector <int> list1, std::vector <int> list2, int counter)
{
	int lowest = list1[0];
	for(int z = 0; z < list1.size(); z++)
    {
        if(list1[z] < lowest)
        {
            lowest = list1[z];    
        }
    }
	list1.push_back(lowest);

}
int main()
{

}
