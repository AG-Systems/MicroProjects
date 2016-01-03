#include <string>
#include <vector>
#include <functional>
#include <iostream>
#include <algorithm>

void split(const std::string& s, char c,
           std::vector<std::string>& v) 
{
   std::string::size_type i = 0;
   std::string::size_type j = s.find(c);

   while (j != std::string::npos) 
   {
      v.push_back(s.substr(i, j-i));
      i = ++j;
      j = s.find(c, j);

      if (j == std::string::npos)
         v.push_back(s.substr(i, s.length()));
   }
}

int main() 
{
   std::vector<std::string> v;
   std::string s = "hello my name is";

   split(s, ' ', v);
   std::reverse(v.begin(),v.end());  
   for (int i = 0; i < v.size(); ++i) 
   {
      std::cout << v[i] << " ";
   }
}
