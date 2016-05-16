#include <iostream>

class Arrows
{
public:
	int longestArrow(std::string);
};

int Arrows::longestArrow(std::string str)
{
	int max = 0;
	int counter = 0;
	for(int z = 0; z < str.size(); z++)
	{
		if(str[z] == '<' && str[z] != str[str.size()])
		{
			if(str[z+1] == '<' || str[z+1] == '>')
			{
				counter = 0;
			}
			else if(str[z+1] ==  str[z+2])
			{
				counter += 2;				
			}
		}
		if(max < counter)
		{
			max = counter;
		}
	}
}

int main()
{

}
