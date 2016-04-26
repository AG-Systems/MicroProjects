#include <iostream>
#include <algorithm>


void quicksort(int l, int u) 
{
	int i, m;
	if (l >= u)	return;
	std::swap(l, std::randint(l, u));
	m = l;
	for (i = l+1; i <= u; i++) 
		if (x[i] < x[l])
			swap(++m, i);
	std::swap(l, m);
	quicksort(l, m-1);
	quicksort(m+1, u);
}

int main()
{
    
}
