#include <iostream>
#include <vector>
int dealer;
int a[] = {1,2,3,4,5,6,7,8,9}
int numcards;
int total;

int arr[10][7] =
{
    {true,true,true,true,true,true,true,true,true,true},
    {true,true,false,false,false,true,true,true,true},
    {false,false,false,false,false,true,true,true,true},
    {false,false,false,false,false,true,true,true,true},
    {false,false,false,false,false,true,true,true,true},
    {false,false,false,false,false,true,true,true,true},
    {false,false,false,false,false,false,false,false,false}
};

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
    
  }
  if (input == "no")
  {
     std::cout << "Input your total amount: " << std::endl;
     std::cin >> total;
     std::cout << "What is your dealer amount: " << std::endl;
     std::cin >> dealer;
     
  }
  

}
