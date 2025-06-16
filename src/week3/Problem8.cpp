#include <iostream> 
using namespace std;
int cube (int x) {
    return x * x * x;
} 
int cubeOfDigits (int x) {
    int f = x; 
    if (f == 0) {
        cout << 0; 
        return 0; 
    }
    int sum = 0;
    while (f > 0) {
        int lastDigit = f % 10;
        f = f / 10;
        sum = sum + cube(lastDigit);
    }
    return sum;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "The sum of the cubes of the digits in " << num << " is: "<<cubeOfDigits(num) << endl;
    return 0;
}
//
// Created by suxrobjalolov on 6/16/25.
//
