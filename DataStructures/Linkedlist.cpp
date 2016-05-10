#include <iostream>

template <typename T> 
struct node 
{ 
  T data; 
  struct node* next; 
}; 

node *head = NULL;
struct node *searchNode(int n) 
{
	if(head == NULL) 
	{
	    return head;
	}
	node *cur = head;
	node *prev = head;
	while(cur) 
	{
		if(cur->data == n) return cur;
		if(cur->data > n) return prev;
		prev = cur;
		cur = cur->next;
	}
}
int main()
{
        
}
