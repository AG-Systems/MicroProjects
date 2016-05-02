#include <iostream>
#include <string>

// someString.insert(somePosition, 1, myChar);
int main()
{
    std::string key = "FFFFFFFFFFFF"; 
    std::string newkey = "";
    // "\xFF\xFF\xFF\xFF\xFF\xFF"
    int slash = 0;
    int x = 0;
    int counter = 0;
    for(int z = 0; z < key.size(); z++)
    {
        slash++;
        x++;
        counter++;
        if(slash == 0 || slash == 4 || slash == 8 || slash == 16 || slash == 20)
        {
            newkey.insert(z,1,'\');               
        }
        if(x == 1 || x == 5 || x == 9 || x == 17 || x == 21)
        {
            newkey.insert(z,1,'x');               
        }
        else
        {
            newkey.insert(z,1,'F');         
        }
    }        
    std::cout << newkey << std::endl;
}
