#include<iostream>

// started on sep 23 2015

int main() 
{
int number, reverse = 0;
//std::cout<< "Input a Number to Reverse and press Enter: ";
// std::cin>> number;
int n = 5432;
std::cout << n << std::endl;
number = n;

   for( ; number!= 0 ; )
   {
      reverse = reverse * 10;
      reverse = reverse + number%10;
      number = number/10;
   }
std::cout<< "Reversed Number is:  "<<reverse;
   for( int z = 0; z < 20; z++)
   {
	std:: cout << number << reverse;
	   if ( number % 7)
		{
			std:: cout << number << reverse;
			if ( reverse % 7)
			{
			std::cout << number << reverse;
			}
		}
   }

 
   return 0;
   system("PAUSE");
}
