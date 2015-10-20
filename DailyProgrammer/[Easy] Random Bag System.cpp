// Example program
#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>


int main()
{
    srand ( time(NULL) ); 
    std::string textArray[7] = {"O", "I", "S", "Z", "L", "J", "T"};
    int RandIndex = rand() % 7; 
    std::cout << textArray[RandIndex];
    
}

