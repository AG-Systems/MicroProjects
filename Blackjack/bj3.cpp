#include <iostream>
#include <vector>
int dealer;
int a[] = {1,2,3,4,5,6,7,8,9}
int numcards;
int total;
int arr[9][6] =
{
    {1,1,1,1,1,1,1,1,1},
    {1,1,0,0,0,1,1,1,1},
    {0,0,0,0,0,1,1,1,1},
    {0,0,0,0,0,1,1,1,1},
    {0,0,0,0,0,1,1,1,1},
    {0,0,0,0,0,1,1,1,1},
    {0,0,0,0,0,0,0,0,0}
};

int playerhand(int a)
{
    if(total =< 11)
    {
        return a[dealer][0];    
    }
    else if (total == 12)
    {
        return a[dealer][1]   
    }
    else if (total == 13)
    {
        return a[dealer][2]    
    }
    else if (total == 14)
    {
        return a[dealer][3]    
    }
    else if (total == 15)
    {
        return a[dealer][4]    
    }
    else if (total == 16)
    {
            
    }
}


int main()
{
  std::cout << "Do you want to input the total or each card?: " << std::endl;
  std::cin >> input;
  if (input == "yes")
  {
    std::cout << "How many cards is there:  " << std::endl;
    std::cin >> numcards;
    std::cout << "What are the cards: "
    for(int z = 0; z < numcards; z++)
    {
        std::cin >> a[numcards];
    }
    std::vector <int> totalamount; 
    for(int x = 0; x < numcards; x++)
    {
        totalamount.push_back (a[x]);    
    }
    std::cout << "What is your dealer amount? " << std::endl;
    std::cin >> dealer;
    total = totalamount.size();
  }
  if (input == "no")
  {
     std::cout << "Input your total amount: " << std::endl;
     std::cin >> total;
     std::cout << "What is your dealer amount: " << std::endl;
     std::cin >> dealer;
     
  }
  

}
