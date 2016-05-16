#include <iostream>

class Arrows
{
public:
	int longestArrow(std::string);
};

int Arrows::longestArrow(std::string str)
{
	int max = 0;
	for(int z = 0; z < str.size(); z++)
	{
		int counter = 0;
		if(str[z] == '<')
		{
			if(str[z+1] == '-' || str[z+1] == '=')
			{
				counter++;
			}
		}
	}
}

int main()
{

}
