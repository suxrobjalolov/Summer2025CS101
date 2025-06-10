#include <iostream>
using namespace std;

int main() {
    int score;
    cin >> score;
    int grade=score/10;
    switch(grade) {
        case 10:
        case 9:
            cout<<"A"<<endl;
            break;
        case 8:
            cout<<"B"<<endl;
            break;
        case 7:
            cout<<"C"<<endl;
            break;
        case 6:
            cout<<"D"<<endl;
            break;
        default:
            cout << "F" << endl;
    }
}
//
// Created by suxrobjalolov on 6/10/25.
//
