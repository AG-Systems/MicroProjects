#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>

// The libarys. stdlib and time ment for the random and the string for string manipulation.

int HitMe()
{
    rand() % 11;   
}
// HitMe() is barely used as I had no use for it.
int Total = 21;

void YouLost()
{
    std::cout << "You lost bro gg wp " << std::endl;   
    // This means you lost and it outputs to the console.
}
void YouFold()
{
    std::cout << "You folded " << std::endl; 
    // Just says you folded to the console.

}

void YouWon()
{
    std::cout << " You won the game. You hit 21 " << std::endl; 
    // You won.
}


int main ()
{
  srand ( time(NULL) ); //initialize the random seed
  std::cout << "Welcome to blackjack the crappy version that you should not be playing" << std::endl;
  std::cout << "-------------------------------------------------------------" << std::endl;
  std::cout << "The commands are: hitme & fold. No captiols or space. If you do not do those proper commands it will break" << std::endl;
	// The standard introduction of the game
  const char arrayNum[11] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '10', '10'};
  // The "deck". Not a true deck as it does not have 4 of each card but it will due. The 1 card is a ace. The extra 10 is a face card.
 // Randindex is the first card and the rand 2 is the 2nd card.
  int RandIndex = rand() % 11; 
  int Rand2 = rand() % 11; 
  if (int RandIndex = 0 )
  {
	RandIndex = rand() % 11; 
	//for some reason sometimes I get a 0 from my array so i fixed it by making it random again.
  }
  std::cout << "Card 1: " << RandIndex << "\n" << "Card 2: " << Rand2 << std::endl;
  
  int RandCard2 = Rand2 + RandIndex;
  // RandCard2 is the totla of the both starting cards.
  
  std::cout << "Your total is " << RandCard2 << std::endl;
  
  std::string input;
  
  std::cout << "Do you want to hit some more or fold? " << std::endl;
  
  // The first cin.
  
  int HitMeInt = 0;
  // This is used for the for loop. I am prety proud of this alg that I came up with.
  
  int RandFinal = RandIndex + Rand2;
            int NewCard = ( rand() % 11 ) * 1;
            int NewCard2 = NewCard + (rand() % 11);
            int NewCard3 = NewCard2 + NewCard + (rand() % 11);
            int NewCard4 = NewCard3 + NewCard2 + NewCard + (rand() % 11);
            // I "get" my cards early. I just do not show it to the player until they call hit.
for (int loops = -1; loops < HitMeInt;)
{
  if ( RandFinal < Total)
    {
    std::cin >> input;

    if ( RandFinal < 21)
    {
    
    if(input == "hitme")
        {
            HitMeInt++;
            // if you called hit twice it shows you the 2nd random called up there.

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
                // ugly code I know but it werks.
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
        // for some reason these 2 randfinal > 21 does not work. Will fix it later if im not lazy.
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
  // This is just used for visual studio so It does not close my console.
}
}



	
