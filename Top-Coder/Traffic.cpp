#include <iostream>

class traffic
{
public:
	int time(int[], int);
};

int traffic::time(int lights[], int speed)
{
	// each light is 150 meters.
	int timecounter = 0;
	int distance = 0;
	int iter = 0;
	while(true)
	{
		timecounter++;
		distance += speed;
		if(distance >= 150 && timecounter < lights[iter])
		{
	
		}

	}
}
int main()
{
	
}
