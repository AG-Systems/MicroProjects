#include <iostream>
#include <vector>
#include <Windows.h>

int dealer = 5;
int a[] = {1,2,3,4,5,6,7,8,9};
int numcards;
int total;
int input;
int arr[7][9] =
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
    if(a <= 11)
    {
        return arr[1][dealer];
    }
    else if (a == 12)
    {
        return arr[2][dealer];
    }
    else if (a == 13)
    {
        return arr[3][dealer];
    }
    else if (a == 14)
    {
        return arr[4][dealer];
    }
    else if (a == 15)
    {
        return arr[5][dealer];
    }
    else if (a == 16)
    {
        return arr[6][dealer];
    }
    else if (a >= 17)
    {
        return 0;    
    }
}


int main()
{
  std::cout << "Do you want to input the total or each card?: " << std::endl;
  std::cin >> input;
  if (input == 1)
  {
    std::cout << "How many cards is there:  " << std::endl;
    std::cin >> numcards;
    std::cout << "What are the cards: " << std::endl;
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
  if (input == 0)
  {
     std::cout << "Input your total amount: " << std::endl;
     std::cin >> total;
     std::cout << "What is your dealer amount: " << std::endl;
     std::cin >> dealer;
     
  }
  int z = playerhand(total);
  std::cout << z << std::endl;
  if(z == 0)
  {
    std::cout << "fold" << std::endl;    
  }
  else if (z == 1)
  {
    std::cout << "hitme " << std::endl;    
  }
  system("PAUSE");
}

/*

bool yesno(char const* prompt, bool default_yes=true) {
  using namespace std;
  if (prompt && cin.tie()) {
    *cin.tie() << prompt << (default_yes ? " [Yn] " : " [yN] ");
  }
  string line;
  if (!getline(cin, line)) {
    throw std::runtime_error("yesno: unexpected input error");
  }
  else if (line.size() == 0) {
    return default_yes;
  }
  else {
    return line[0] == 'Y' || line[0] == 'y';
  }
}

*/
