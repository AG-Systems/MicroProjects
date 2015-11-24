#include <iostream>
#include <string>
#include <cstdlib>

#include "hash.h"

int hash::Hash(std::string key)
{
  int hash = 0;
  int index;
  
  index = key.length();
  
  std::cout << "key[0] = " << key[0] << std::endl;
  std::cout << "key[1] = " << key[1] << std::endl;
  std::cout << "key[2] = " << key[2] << std::endl;
  std::cout << "key[3] = " << key[3] << std::endl;
  return index;
}
