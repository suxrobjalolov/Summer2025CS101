#include <iostream>
using namespace std;

int main() {
    int weight;
    cin >> weight;
    switch(weight) {
        case 0:
            cout << "Weight cannot be negative!" << endl;
            break;
        case 1:
        case 2:
            cout<<"3500 som";
            break;
        case 3:
            cout<<"5500 som";
            break;
        case 4:
        case 5:
            cout<<"8500 som";
            break;
        case 6:
        case 7:
        case 8:
            cout<<"10500 som";
            break;
        default:
            cout << "Overweight! Cannot be shipped!" << endl;
    }
}
//
// Created by suxrobjalolov on 6/10/25.
//
