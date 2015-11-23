#include <iostream>
#include <string>
#include <array>
#include <algorithm>
#include <sstream>

int main()
{
    char input;
    std::string xtr;
    int counter;
    std::string words[] = {"CAT", "DOG", "ANT"};
    std::cin >> input;
    std::stringstream ss;
    ss << input;
    ss >> xtr;
    for(int z = 0; z < sizeof(words); z++)
    {
        for(int x = 0; x <sizeof( words[z] ); x++)
        {
            if (xtr != words[x])
            {
                //std::replace( words[z].begin(), words[z].end(), 'x', 'y');
                std::cout << "hello " << std::endl;
            }
        }
    }

    
}
