#include <iostream>
#include <time.h>
#include <stdlib.h>

const char arrayNum[11] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '10', '10'};
int CardDeal()
{
	int Rand1 = rand() % 11; 
	int Rand2 = rand() % 11; 
}

int YouLose()
{
	std::cout << "You lose. Your total was: " << std::endl;
}

int main()
{
	int CardDeal();
	int Rand1 = rand() % 11; 
	int Rand2 = rand() % 11; 

	std::cout << "Welcome to blackjack meeps " << std::endl;
	std::cout << "Press any key to start " << std::endl;
	std::cin.get();
	std::cout << "Card 1 is : " << Rand1 << "\n " << "Card 2 is : " << Rand2 << std::endl;
	std::cout << "Here is your total: " << CardDeal() << std::endl;
	

}
