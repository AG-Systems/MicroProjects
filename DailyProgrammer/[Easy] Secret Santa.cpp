#include <iostream>
#include <stdlib.h>
#include <time.h>

int main()
{
  srand ( time(NULL) );
  std::string a[4] = {"Joe", "Jeff", "Jerry", "Johnson"};
  int id[4] = {0,1,1,0};
  int RandIndex = rand() % 4; 
  std::string secret_santa = a[RandIndex];
  int secret_santa_id = id[RandIndex];
  std::cout << secret_santa << std::endl;
  std::cout << secret_santa_id << std::endl;

  for(int x = 0; x < 4; x++)
  {
      if(secret_santa != a[x] && secret_santa != a[x+1])
      {
        
      }
  }    

}
