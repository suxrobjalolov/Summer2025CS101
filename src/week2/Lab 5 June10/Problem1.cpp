#include <iostream>
using namespace std;

int main() {
    char light;
    cin >> light;
    switch(light) {
        case 'g':
            cout << "Go" << endl;
            break;
        case 'y':
            cout << "Get Ready!" << endl;
            break;
        case 'r':
            cout << "Stop!" << endl;
            break;
        default:
            cout << "No such light!" << endl;
    }
}
//
// Created by suxrobjalolov on 6/10/25.
//
