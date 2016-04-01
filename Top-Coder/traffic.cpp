#include <iostream>

class traffic
{
public:
	int time(int[], int);
};

int traffic::time(int lights[], int speed)
{
	// each light is 150 meters.
	int totaldistance = sizeof(lights) * 150;
	int timecounter = 0;
	int distance = 0;
	while(true)
	{
		timecounter++;
		distance += speed;
	}
}
int main()
{
	int array[] = {10,10,10};
	int speed = 10;
	traffic main;
	main.time(array,speed);
}
