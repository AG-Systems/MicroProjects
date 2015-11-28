#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <vector>

template <class T> class func
{
    public:
    T number;
    T length;
    
};

int lower,upper,digi,marks,sim,length;
const char LOWER_CASE[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
const char UPPER_CASE[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
//LOWER_CASE.toUpperCase();
const char DIGITS[] = {'0','1','2','3','4','5','6','7','8','9'};
// const char PUNCT_MARKS[] = {'!',',','.',':',';','@','#','$','%','^','*','(',')','_','-','+','=','{','}','\','<','>',''?,'\','№'};
const char SIMILAR_CHARACTERS[] = {'L','l','1','i','o','O','0'};
int main()
{
    srand ( time(NULL) );
    std::vector <char> list;
    std::vector <char> password;
    std::cout << "Please type 1 for yes or 0 for no on the following: Lowercase : Uppercase : Digits : Puncation marks : Similar characters : Length ";
    //std::cin >> lower >> upper >> digi >> marks >> sim >> length;
    // test
    
    
    lower = 1;
    upper = 1;
    digi = 1;
    marks = 1;
    sim = 1;
    length = 5;
    
    
    for (int z = 0; 0 < length; z++)
    {
        if (lower == 1)
        {
            int RandIndex = rand() % 25;
            list.push_back (LOWER_CASE[RandIndex]);
        }
        if (upper == 1)
        {
            int RandIndex = rand() % 25;
            list.push_back (UPPER_CASE[RandIndex]);    
        }
        if (digi == 1)
        {
            int RandIndex = rand() % 9;
            list.push_back (DIGITS[RandIndex]);     
        }
        if (marks == 1)
        {
            
        }
        if (sim == 1)
        {
            int RandIndex = rand() % 6;
            list.push_back (SIMILAR_CHARACTERS[RandIndex]);    
        }
        int randomVector = rand() % list.size();
        password.push_back (list[randomVector]);
        //list.clear();
    }
    for (std::vector<char>::const_iterator i = password.begin(); i != password.end(); ++i)
    std::cout << *i << ' ';
    
}
