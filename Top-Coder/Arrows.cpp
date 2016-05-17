#include <iostream>

class Arrows
{
public:
	int longestArrow(std::string);
	int loopsearch(char,char,std::string,int,int);
	int loopsearchrev(char,char,std::string,int,int);
};
char ar1 = '<';
char ar2 = '>';
char ar3 = '-';
char ar4 = '=';
int Arrows::loopsearch(char c, char b,std::string str,int counter, int max)
{
	for(int z = 0; z < str.size(); z++)
	{
		if(str[z] == c && str[z] != str[str.size()-2])
		{
            z++;
            if(str[z] == b && str[z-1] == str[z])
            {
                counter++;    
            }
            if(str[z] == b && str[z-1] != str[z])
            {
                counter = 1;
            }
		}
		if(max < counter)
		{
			max = counter;
		}
	}
	return max;
}
int Arrows::loopsearchrev(char c, char b, std::string str, int counter, int max)
{
    for(int x = str.size(); x > 0; x--)
    {
        if(str[x] == c && str[x] != str[2])
        {
            x--;
            if(str[x] == b && str[x+1] == str[x])
            {
                counter++;    
            }
            if(str[z] == b && str[z+1] != str[z])
            {
                counter = 1;    
            }
        }
        if(max < counter)
        {
            max = counter;    
        }
    }
}
int Arrows::longestArrow(std::string str)
{
    int max = 0;
    int counter = 0;
    Arrows::loopsearch(ar1,ar3,str,counter,max);
    Arrows::loopsearch(ar1,ar4,str,counter,max);   
    Arrows::loopsearch(ar2,ar3,str,counter,max);
    Arrows::loopsearch(ar2,ar4,str,counter,max);
	std::cout << max << std::endl;
	return max;
}

int main()
{
	std::string str = "<----=====>";
	Arrows a;
	a.longestArrow(str);
}
