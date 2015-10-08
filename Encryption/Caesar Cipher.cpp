#include <iostream>
#include <string>
std::string text;

int main()
{
    std::cout << "Write the sentence that you want encrypt: " << std::endl;
    std::cin >> text;
        for (int i = 0; i < text.size(); i++)
        {
        //std::cout << text[i];
        text.at(i);
        char add = text.at(i);
        add++;
            if (int i = text.size() )
            {
                std::cout << "The encrypted sentence is: " << add << std::endl;  
            }
        
        // std::cout << static_cast<char>(text[0] + 1);
        }

}
