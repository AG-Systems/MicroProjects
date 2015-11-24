#include <iostream>
#include <string>
#include <cstdlib>

#include "hash.h"

int hash::Hash(std::string key)
{
  int hash = 0;
  int index;
  
  index = key.length();
  
  for(int z = 0; z < key.length(); z++)
  {
    hash = hash + (int)key[z];
    std::cout << "hash = " << hash << std::endl;
  }
  
  std::cout << "key[0] = " << (int)key[0] << std::endl;
  std::cout << "key[1] = " << (int)key[1] << std::endl;
  std::cout << "key[2] = " << (int)key[2] << std::endl;
  std::cout << "key[3] = " << (int)key[3] << std::endl;
  index = hash % tableSize;
  return index;
}
