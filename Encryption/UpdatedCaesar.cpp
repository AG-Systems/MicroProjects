#include <iostream>
#include <string>
#include <vector>
std::string text;

int main()
{
    std::cout << "Write the sentence that you want encrypt: " << std::endl;
    std::cin >> text;
	std::vector <char> list;
        for (int i = 0; i < text.size(); i++)
        {
        //std::cout << text[i];
        text.at(i);
        char add = text.at(i);
        add++;
            if (int i = text.size() )
            {
                std::cout << "The new encrypted character is: " << add << std::endl;  
				list.push_back (add);
            }
        
        // std::cout << static_cast<char>(text[0] + 1);
        }
    for(int z = 0; z < list.size(); z++)
	{
		std::cout << list[z];
	}
}

/*  Comments
1-2: Standard Lib
3: Make a variable string called text. Has no value
5: Come on. INT MAIN. I dont know how to explain it besides if you know c++ then you know what it is
7-8: Output and input
9: For loop for looping the easy algorithm
12: text.at(i) Bassically depends on the int I where the current position of a character will be
13:  Take out a character from the current position of I
14: Add++ bassically makes the character go up by one.
15: if i equals to the string size
17: Output the new character with the variable Add

Author: AG-Systems
Finsihed: April 30 2016 12:08 pm
Problems: None

*/
