// Dhrumit Savaliya
// Class (CECS 325-02)
// Project Name (Prog 1 – Fibonacci Solitaire)
// Due Date (09/26/2-23)
//
// I certify that this program is my own original work. I did not copy any part of this program from
// any other source. I further certify that I typed each and every line of code in this program.


#ifndef DECK_H

#define DECK_H

#include"Card.h"

#include <iostream>

using namespace std;

class Deck
{
    private:
        Card arr[52];
        int card;
        //int counter = 0;
    public:
        Deck( ); 
        void newDeck(); 
        Card deal( ); 
        void shuffle( );
        bool isEmpty( ); 
        void show( ); 
};
#endif