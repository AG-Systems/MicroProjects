#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
int main ()
{
  srand ( time(NULL) ); //initialize the random seed
  

  const char arrayNum[11] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '10', '10'};
  int RandIndex = rand() % 11; 
  int Rand2 = rand() % 11; 
  if (int RandIndex = 0 )
  {
	RandIndex = rand() % 11; 
  }
  std::cout << "Card 1: " << RandIndex << "\n" << "Card 2: " << Rand2 << std::endl;
  int RandCard2 = Rand2 + RandIndex;
  std::cout << "Your total is " << RandCard2 << std::endl;
  std::string input;
  std::cout << "Do you want to hit some more or fold? " << std::endl;
  std::cin >> input;
  if(input == "hitme")
  {
    int RandFinal = rand() % 11 + RandIndex + RandCard2;
	std::cout << RandFinal << std::endl;
	if ( RandFinal > 21)
	{
		std::cout << "You lost n00b" << std::endl;
	}
	if ( RandFinal < 21)
	{
		std::cout << "We can keep on going? Hitme or fold?" << std::endl;
		if(input == "hitme2")
		{
			int RandFinal2 = rand() % 11 + RandIndex + RandCard2 + RandFinal;
			if ( RandFinal2 > 21)
			{
				std::cout << RandFinal2;
				std::cout << "you lost" << std::endl;
			}
			else if( RandFinal <= 21)
			{
			std::cout << RandFinal2 << std::endl;
			std::cout << "Good job for getting this close" << std::endl;
			}


		}
		else if (input == "fold")
		{
			std::cout << RandFinal << std::endl;
			std::cout << "Congrats " << std::endl;
		}
	}
  }
  else if(input == "fold")
  {
	std::cout << RandCard2 << std::endl;
	std::cout << "gg" << std::endl;
  }

  // std::cout << arrayNum[RandIndex] << std::endl;
  system("PAUSE");
}




	
