// Dhrumit Savaliya
// Class (CECS 325-02)
// Project Name (Prog 1 – Fibonacci Solitaire)
// Due Date (09/26/2-23)
//
// I certify that this program is my own original work. I did not copy any part of this program from
// any other source. I further certify that I typed each and every line of code in this program.

#include "Card.h"
#include "Deck.h"
#include "deck.cpp"
#include "card.cpp"
#include <ctime>
#include <iostream>
using namespace std;

void game();
void winGame();
bool isFibo(int sum);

Deck deck;


int main() {
    bool t = true;

    while (t == true) {
        cout << "\nWelcome to Fibonacci Solitaire!" << endl;
        cout << "1) Create New Deck" << endl;
        cout << "2) Display Deck" << endl;
        cout << "3) Shuffle Deck" << endl;
        cout << "4) Play Fibo Solitaire" << endl;
        cout << "5) Win Fibo Solitaire" << endl;
        cout << "6) Exit" << endl;
        cout << "Before start game Don't Forget to shuffle"<<endl;
        
        string x;
        cout << "Enter Your Choice: ";
        cin >> x;
        
        if (x == "1") {
            deck.newDeck();
        } else if (x == "2") {
            deck.show();
        } else if (x == "3") {
            deck.shuffle();   
        } else if (x == "4") {
            game();
        } else if (x == "5") {
            winGame();
        } else if (x == "6") {
            t = false;
        } else {
            cout << "Invalid Input" << endl;
        }
    }

    return 0;
}

void game() {
    cout << "\nPlay Game (Hit Enter!! to reveal another card)" << endl;
    int sum = 0;
    int piles = 1;
    
    while (!deck.isEmpty()){
        Card c = deck.deal();
        sum+= c.getValue();
        cin.ignore();
        c.show();
        if (isFibo(sum) == 1){
            cout<<"Fibo: "<<sum<<endl;
            sum = 0;
            piles++;  
            if(deck.isEmpty()==1){
                cout << "you Win"<< endl;
                cout << "Piles:" << piles;
            }
        }
        if (deck.isEmpty()==1 & isFibo(sum) == 0){
        cout << "You Loose" << endl;
        cout << "Piles:" << piles;
        }
    }
} 

void winGame() {
    int gamecount = 0;
    cout << "\nPlay Game (Hit Enter!! to reveal another card)" << endl;
    int sum = 0;
    int piles = 1;
    bool game = true;
    while (!deck.isEmpty() & game == true){;
        cin.ignore();
        Card c = deck.deal();
        sum+= c.getValue();
        c.show();
        if (isFibo(sum) == 1){
            cout<<"Fibo: "<<sum<<endl;
            sum = 0;
            piles++;  
            if(deck.isEmpty()==1){
                cout << "you Win"<< endl;
                cout << "Piles:" << piles;
                cout<<"You Win after"<< gamecount << "game.";
            }
        }
        if (deck.isEmpty()==1 & isFibo(sum) == 0){
        cout << "You Loose" << endl;
        cout << "Piles:" << piles<<endl;
        piles = 0;
        gamecount++;
        cout<<"GAME NO. "<<gamecount <<" completed."<<endl;
        deck.newDeck();
        deck.shuffle();
        } else if (deck.isEmpty()==0 & isFibo(sum) == 1) {
            cout << "you Win"<< endl;
            cout << "Piles:" << piles;
            cout<<"You Win after"<< gamecount << "game.";
            game = false;
        }

    }
}




bool isFibo(int sum) {
    int fiboSeries[] = {1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946};

    bool found = false;

    for (int i : fiboSeries) {
        if (i == sum) {
            found = true;
            break;
        } 
    }

    if (found) {
        return true;
    } else {
        return false;
    }

}

