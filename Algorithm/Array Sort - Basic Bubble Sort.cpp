#include <iostream>
#include <cstdlib>

int main()
{
  int hold = -1;
  int end = 10;
  int length = 10;
  
  int List[] = { 44, 7, 23 };
  // A basic list
for(int counter = length - 1; counter > 0; counter--)
{
  for (int index = 0; index < end; index++)
  {
    if (List[index] > List[index+1])
    {
      hold = List[index+1];
      List[index + 1] = List{index];
      List[index] = hold;
    }
  }
  end--;
}

  for (int index = 0; index < 10; index++)
  {
    std::cout << List[index] << ", ";
  }
  std::cout << endl;
}
