#include <iostream>
#include <vector>

void heapify(std::vector <int> list, int nodesize, int node)
{
    int largest = node;
    int left = 2*node + 1;
    int right = 2*node + 2;
    
    if(left < nodesize && list[left] > list[largest])
    {
        largest = left;    
    }
    
    if(right < nodesize && list[right] > list[largest])
    {
        largest = right;    
    }
    
    if (largest != node)
    {
        std::swap(list[node], list[largest]);
        heapify(list,nodesize,largest);
    }
}
