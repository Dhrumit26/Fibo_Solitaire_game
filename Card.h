// Dhrumit Savaliya
// Class (CECS 325-02)
// Project Name (Prog 1 – Fibonacci Solitaire)
// Due Date (09/26/2-23)
//
// I certify that this program is my own original work. I did not copy any part of this program from
// any other source. I further certify that I typed each and every line of code in this program.



#ifndef CARD_H

#define CARD_H

#include <iostream>

using namespace std;

class Card
{
    private:
        char suit;
        char rank;
    public:
        Card(); 
        Card(char r, char s); 
        void setCard( char r, char s);
        int getValue(); 
        void show(); 
};
#endif