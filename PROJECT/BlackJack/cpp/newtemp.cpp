#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>


int HitMe()
{
    rand() % 11;   
}

int Total = 21;

void YouLost()
{
    std::cout << "You lost bro gg wp " << std::endl;   

}
void YouFold()
{
    std::cout << "You folded " << std::endl; 

}

void YouWon()
{
    std::cout << " You won the game. You hit 21 " << std::endl; 
}


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
  
  
  
  int HitMeInt = 0;
  
  int RandFinal = RandIndex + Rand2;
  
for (int loops = -1; loops < HitMeInt;)
{
  if ( RandFinal < Total)
    {
    std::cin >> input;
            int NewCard = ( rand() % 11 ) * 1;
            int NewCard2 = NewCard + (rand() % 11);
            int NewCard3 = NewCard2 + NewCard + (rand() % 11);
            int NewCard4 = NewCard3 + NewCard2 + NewCard + (rand() % 11);
    if ( RandFinal < 21)
    {
    
    if(input == "hitme")
        {
            HitMeInt++;

            if( HitMeInt == 2)
            {
                 // int NewCard2 = NewCard + (rand() % 11);
                RandFinal = NewCard2 + RandIndex + Rand2;
                std::cout << "Your new Card is: " << NewCard2 << std::endl;
                int RandyFinal = NewCard2 + RandCard2;
                 std::cout << "Your New total is: " << RandyFinal << std::endl;
            }
            
            // std::cout << HitMeInt << std::endl;
            // This works perfectly
            if ( HitMeInt == 1)
                {
            RandFinal = NewCard + RandIndex + Rand2;
            
            std::cout << "Your new Card is: " << NewCard << std::endl;
            std::cout << "Your New total is: " << RandFinal << std::endl;
                }
            if ( HitMeInt == 3)
            {
               // int NewCard3 = NewCard + (rand() % 11) + NewCard;
                //RandFinal = NewCard3 + RandIndex + Rand2;
                std::cout << "Your new Card is: " << NewCard3 << std::endl; 
                //std::cout << "Your New total is: " << RandFinal << std::endl;                
            }

            if ( RandFinal > 21)
            {
                std::cout << "Your final is: " << RandFinal << std::endl;
                YouLost(); 
                break;
            }

        }
    }
    if ( RandFinal > 21)
    {
        std::cout << "Your final is: " << RandFinal << std::endl;
        YouLost(); 
        break;
    }
    
    if ( RandFinal == 21)
    {
        YouWon();
        break;
    }

    }
        if(input == "fold")
        {
          int RandFinal = RandIndex + Rand2;
          std::cout << RandFinal << std::endl;  
            YouFold();
        }



  // std::cout << arrayNum[RandIndex] << std::endl;
  system("PAUSE");
}
}



	
