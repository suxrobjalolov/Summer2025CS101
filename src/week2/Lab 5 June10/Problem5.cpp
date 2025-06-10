#include <iostream>
using namespace std;

int main() {
    srand(time(0)); 
    int r=1+rand()%100;
    string guess;
    cin>> guess;
    if(r%2==0 && guess=="even") {
        cout << "You won!" << endl;
    } else if (r%2!=0 && guess=="odd") {
        cout << "You guessed it right!" << endl;
    } else {
        cout << "You guessed it wrong! The number was " << r << endl;
    }
}
//
// Created by suxrobjalolov on 6/10/25.
//
