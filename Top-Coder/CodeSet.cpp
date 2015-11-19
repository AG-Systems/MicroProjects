#include <iostream>
#include <string>
#include <vector>

class codeSet
{
   public:
        int n;
        std::string str;
        std::string favorite;
};
std::vector<std::string> getBitStrings(unsigned int n)
{
    std::vector<std::string> result;

    if (n <= 1)
    {
        result.push_back("0");
        result.push_back("1");
    }
    else
    {   // recurse, then add extra bit chars
        std::vector<std::string> sub = getBitStrings(n-1);
        for (std::vector<std::string>::const_iterator it = sub.cbegin();
             it != sub.cend(); ++it)
        {
            result.push_back(*it+'0');
            result.push_back(*it+'1');
        }
    }
    return result;
}

int main()
{
    std::string favorite;
    int n;
    
    std::cin >> n;
    std::cin >> favorite;
    if (n > 0)
    {
        for ( int z = 0; z < n; z++)
        {
                
        }
    }
   std::vector<std::string> bs = getBitStrings(5);
    std::copy(bs.begin(), bs.end(), 
         std::ostream_iterator<std::string>(std::cout, "\n"));
   return 0;
}
