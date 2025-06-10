#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a>b&&a>c) {
        cout << "a is the largest" <<endl;
    } else if (b>a&&b>c) {
        cout << "b is the largest" <<endl;
    } else if (c>a&&c>b) {
        cout << "c is the largest" <<endl;
    }

    return 0;
}
//
// Created by suxrobjalolov on 6/9/25.
//
