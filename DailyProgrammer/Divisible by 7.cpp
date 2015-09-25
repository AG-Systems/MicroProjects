#include<iostream>
// started on sep 23 2015

int main() 
{
int number, reverse = 0;

number = 1234; 
int dv1 = number / 7;
std::cout <<  dv1 << std::endl;

   for( ; number!= 0 ; )
   {
      reverse = reverse * 10;
      reverse = reverse + number%10;
      number = number/10;
   }
   int dv2 = reverse / 7;
   std::cout <<  dv2 << std::endl;
   return 0;

}
