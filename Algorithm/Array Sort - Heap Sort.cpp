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

void heap_sort(std::vector <int> list, int nodesize)
{
    for(int z = nodesize / 2 - 1; z >= 0; z--)
    {
        heapify(list,nodesize,z);    
    }
    for(int z = nodesize-1; z >= 0; z--)
    {
        std::swap(list[0], list[z]);
        heapify(list,z,0);
    }
}
void convertvector(int a[], int size,std::vector <int> newlist)
{
    for(int x = 0; x < size; x++)
    {
        newlist.push_back (a[x]);    
    }
}
int main()
{
    std::vector <int> newlist;
    int a[] = {12, 11, 13, 5, 6, 7};  
    convertvector(a,6,newlist);
    
    heap_sort(newlist,newlist.size());
}
