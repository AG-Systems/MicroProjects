#include <iostream>
#include <string>

std::cout << "What is your password: " << std::endl;
std::string password;
std::cin >> password;
std::cout << "Please enter the data you wish to encrypt " << std::endl;
char data[];
std::cin >> data;


int main()
{
  
 	for (int i = 0; i < 20; i++)
 	{
 		char c = data[i];
 		if (c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o')
 		{
 		  data[i] = '@';
 		}
 	  if (c == 'A' || c == 'E' || c == 'I' || c== 'U' || c == 'O')
 	  {
 	    data[i] = '&';
 	  }
 	  if (c == '#' || c == '$' || c == '%' || c== '^' || c == '*')
 	  {
 	    data[i] = '$';
 	  }
 	  
 	}	
}
