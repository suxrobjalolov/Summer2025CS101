#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;

    if (x%3==0) {
        if (x%5==0) {
            cout << "FizzBuzz\n" << endl;
        } else {
            cout << "Fizz\n" << endl;
        }
    } else if (x%5==0) {
        cout << "Buzz\n" << endl;
    } else {
        cout << "not divisible by 3 or 5\n" << endl;
    }
}
//
// Created by suxrobjalolov on 6/9/25.
//
