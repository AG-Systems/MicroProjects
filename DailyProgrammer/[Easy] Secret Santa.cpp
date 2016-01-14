#include <iostream>
#include <stdlib.h>
#include <time.h>


int main()
{
  srand ( time(NULL) );
  std::string a[4] = {"Joe", "Jeff", "Jerry", "Johnson"};
  int id[4] = {0,1,1,0};
  int RandIndex = rand() % 4; 
  std::cout << a[RandIndex] << std::endl;

}
