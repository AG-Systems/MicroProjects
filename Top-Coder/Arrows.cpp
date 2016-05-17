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
	bool checker = false;
	for(int z = 0; z < str.size(); z++)
	{
		if(str[z] == '<' && str[z] != str[str.size()-1])
		{
			if(str[z+1] == '<' || str[z+1] == '>')
			{
				counter = 0;
			}
			else if(str[z+1] ==  str[z+2])
			{
				counter += 2;				
			}
			else if(str[z+1] !=  str[z+2])
			{
				counter += 1;				
			} 
		}
		if(max < counter)
		{
			max = counter;
		}
	}
	for(int x = str.size(); x > 0; x--)
	{
		if(str[x] == '>' && str[x] != str[0])
		{
			if(str[x-1] == '<' || str[x-1] == '>')
			{
				counter = 0;
			}
			else if(str[x-1] ==  str[x-2])
			{
				counter += 2;				
			}
			else if(str[x-1] !=  str[x-2])
			{
				counter += 1;				
			} 
		}		
	}
	std::cout << max << std::endl;
	return max;
}

int main()
{
	std::string str = "<----=====>";
	Arrows a;
	a.longestArrow(str);
}
