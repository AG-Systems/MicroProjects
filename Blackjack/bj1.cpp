#include <iostream>
#include <algorithm>
#include <ctime>


// names of ranks.
static const char *ranks[] =
{
    "Ace", "Two", "Three", "Four", "Five", "Six", "Seven",
    "Eight", "Nine", "Ten", "Jack", "Queen", "King"
};

// name of suites
static const char *suits[] =
{
    "Spades", "Clubs", "Diamonds", "Hearts"
};

void print_card(int n)
{
    std::cout << ranks[n % 13] << " of " << suits[n / 13] << std::endl;
}

int main()
{
    srand((unsigned int)time(NULL));

    int deck[52];

    // Prime, shuffle, dump
    for (int i=0;i<52;deck[i++]=i);
    std::random_shuffle(deck, deck+52);
    std::for_each(deck, deck+52, print_card);

    return 0;
}
