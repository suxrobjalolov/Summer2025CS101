#include <iostream> 
using namespace std; 
int displayEven (int x) {
    int f = x; 
    if (f == 0) {
        cout << 0; 
        return 0; 
    }
    
    while (f > 0) {
        int remainder = f % 10;
        if (remainder % 2 == 0) {
            cout << remainder << " ";
        }
        f = f / 10;
    }
    return 0;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "The even digits in " << num << " are: ";
    displayEven(num); 
    cout << endl;
    return 0;
}
//
// Created by suxrobjalolov on 6/16/25.
//
