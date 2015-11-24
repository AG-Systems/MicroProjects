#include <cstdlib>
#include <iostream>
#include <string>

#include "hash.h"

int main(int argc, char** argv)
{
  int index;
  hash hashObj;
  
  index = hashObj.Hash("Auriga");
  
  std::cout << "index = " << index << std::endl;
}
