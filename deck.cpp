// Dhrumit Savaliya
// Class (CECS 325-02)
// Project Name (Prog 1 – Fibonacci Solitaire)
// Due Date (09/26/2-23)
//
// I certify that this program is my own original work. I did not copy any part of this program from
// any other source. I further certify that I typed each and every line of code in this program.


#include "Deck.h"
#include "Card.h"
#include <vector>
#include <ctime>
#include <cstdlib>
#include <iostream> // You need to include this for cout.

using namespace std;

Deck::Deck()
{
    int position = 0;
    char suit[4] = {'S', 'H', 'D', 'C'};
    char rank[13] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K'};
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 13; j++)
        {
            arr[position] = Card(rank[j], suit[i]);
            position++;
        }
    }
    card = 52;
}

void Deck::newDeck()
{
    int position = 0;
    char suit[4] = {'S', 'H', 'D', 'C'};
    char rank[13] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K'};
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 13; j++)
        {
            arr[position] = Card(rank[j], suit[i]);
            position++;
        }
    }
    card = 52;
}

Card Deck::deal()
{
    Card c = arr[card - 1];
    card--;
    return c;
}

void Deck::shuffle()
{
    srand(time(0));
    Card temp;
    for(int i = 0; i < 52; i++)
    {
        int ran = i + (rand() % (52 - i)); 
        temp = arr[i];
        arr[i] = arr[ran];
        arr[ran] = temp;
    }
    card = 52; 
}

bool Deck::isEmpty()
{
    if(card == 0) {
        return true;
    }
    return false;
}

void Deck::show()
{
    int p = 0;
    for (int i = 0; i < 13; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            arr[p].show();
            p++;
        }
        cout << "\n";
    }
}

