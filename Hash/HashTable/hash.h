// hash.h

#include <iostream>
#include <string>
#include <cstdlib>

#ifndef HASH_H
#define HASH_H

class hash
{
  public:
  int Hash(std::string key);
  hash();
  private:
  int tablesize;
};

#endif 
