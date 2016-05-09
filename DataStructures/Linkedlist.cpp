struct node {
  int x;
  node *next;
};

int main()
{
  node *root;      // This will be the unchanging first node

  root = new node; // Now root points to a node struct
  root->next = 0;  // The node root points to has its next pointer
                   //  set equal to a null pointer
  root->x = 5;     // By using the -> operator, you can modify the node
                   //  a pointer (root in this case) points to.
}
