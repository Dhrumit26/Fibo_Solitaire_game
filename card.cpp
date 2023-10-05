// Dhrumit Savaliya
// Class (CECS 325-02)
// Project Name (Prog 1 – Fibonacci Solitaire)
// Due Date (09/26/2-23)
//
// I certify that this program is my own original work. I did not copy any part of this program from
// any other source. I further certify that I typed each and every line of code in this program.



#include "Card.h"

#include "Deck.h"

using namespace std;

Card :: Card()
{
    rank = '0';
    suit = '0'; 
}
Card :: Card(char r, char s)
{
    rank = r;
    suit = s;
};

void Card :: show()
{
    cout << rank << suit << ",";
};
void Card :: setCard(char r, char s)
{
    rank = r;
    suit = s;
};

int Card :: getValue()
{
    int value;
    if(rank == 'A')
    {
        value = 1;
    } else if (rank == '2') {
        value = 2;
    } else if (rank == '3') {
        value = 3;
    } else if (rank == '4') {
        value = 4;
    } else if (rank == '5') {
        value = 5;
    } else if (rank == '6') {
        value = 6;
    } else if (rank == '7') {
        value = 7;
    } else if (rank == '8') {
        value = 8;
    } else if (rank == '9') {
        value = 9;
    } else if(rank == 'T' || rank == 'J' || rank == 'Q' || rank == 'K')
    {
        value = 10;
    }
    else
        value = ((int) rank - 48);
    return value;
};