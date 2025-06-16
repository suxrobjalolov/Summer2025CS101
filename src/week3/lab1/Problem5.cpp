#include <iostream>
using namespace std;
double Factorial (double x=0) {
    double f=1;
    for (double i=1; i<=x; i++){
        f=f*i;
    }
    return f;
}
int main() {
    double num;
    cin>>num;
    cout<<Factorial(num) << endl;
}
//
// Created by suxrobjalolov on 6/16/25.
//
