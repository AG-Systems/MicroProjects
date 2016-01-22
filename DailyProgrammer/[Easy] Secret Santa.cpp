#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector>

int main()
{
  srand ( time(NULL) );
  std::string a[4] = {"Joe", "Jeff", "Jerry", "Johnson"};
  int id[4] = {0,1,1,0};
  int order[4] = {1,2,3,4};
  int RandIndex = rand() % 4; 
  int counter = 0;
  std::string secret_santa = a[RandIndex];
  int secret_santa_id = id[RandIndex];
  int RandomOrder = order[RandIndex];
  std::cout << secret_santa << std::endl;
  std::cout << secret_santa_id << std::endl;
  
for(int x = 0; x < 4; x++)
{
    if(secret_santa == "Joe")
    {
        if(id[x] == 0)
        {
            std::cout << a[x] << "-->" << a[x+1] << std::endl;
            id[x] == 2;
        }
        
        if(id[x] == 1)
        {
            if(id[x+1] != 1)
            {
                std::cout << a[x] << "-->" << a[x-1] << std::endl;    
            }
        }
        if(id[x] == 2)
        {
            std::cout << "relooping" << std::endl;    
        }
        
    }
    if(secret_santa != "Joe")
    {
            if(RandomOrder == 2)
            {
                if(id[x] == 0)
                {
                    std::cout << a[x+1] << "-->" <<a[x+2] << std::endl;
                }
                if(id[x] == 1)
                {
                    if(id[x+1] == 0)
                    {
                        std::cout << a[x+1] << "-->" <<a[x+2] << std::endl;                    
                    }
                    if(id[x+1] == 1)
                    {
                        x++;    
                    }
                }
            }
            if(RandomOrder == 3)
            {
                if(id[x] == 0)
                {
                    
                    std::cout << a[x+2] << "-->" <<a[x+3] << std::endl;
                }
                if(id[x] == 1)
                {
                    if(id[x+2] == 0)
                    {
                        std::cout << a[x+2] << "-->" <<a[x+3] << std::endl;                    
                    }
                    if(id[x+1] == 1)
                    {
                        x++;    
                    }        
            }
    }
}
