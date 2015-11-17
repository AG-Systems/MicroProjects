#include <stdlib.h>
#include <time.h>

int main()
{
  srand ( time(NULL) );
  const char arrayNum[11] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '10', '10'};
  int RandIndex = rand() % 11; 
  std::cout << arrayNum[RandIndex] << std::endl;
}
