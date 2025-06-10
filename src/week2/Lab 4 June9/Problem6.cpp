#include <complex>
#include <iostream>
using namespace std;

int main()
{
    char a;
    cin>>a;

    if (a>= 'a' && a<='z') {
        cout << "Lowercase" << endl;
    } else if (a>='A'&&a<='Z') {
        cout << "Uppercase" << endl;
    } else {
        cout << "Not a letter from the English alphabet" << endl;
    }
}
//
// Created by suxrobjalolov on 6/9/25.
//
