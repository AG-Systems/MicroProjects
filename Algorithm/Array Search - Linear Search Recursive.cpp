#include <iostream>
#include <vector>

std::vector <int> linearsearch(std::vector <int> list, int target, int counter)
{
    if(list[counter] == target)
    {
        std::cout << "Found in: " << counter << std::endl; 
        return list;
    }
    if(counter == list.size())
    {
        std::cout << "Could not find number" << std::endl;
        return list;
    }
    counter++;
    linearsearch(list,target,counter);
}


int main()
{
    std::vector<int> myvector;
    for (int i=1; i<=10; i++) myvector.push_back(i);   
    
    linearsearch(myvector,5,0);
}
