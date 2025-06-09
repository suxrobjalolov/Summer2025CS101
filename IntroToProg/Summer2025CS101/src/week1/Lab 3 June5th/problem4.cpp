#include <iostream>
using namespace std;
int main() {
    double v0, v1, t;
    cout << "Initial velocity in m/s"<<endl;
     cin>> v0;
    cout << "Final velocity in m/s"<<endl;
     cin>> v1;
    cout << "Time accumulated in s"<<endl;
     cin>> t;
    cout<<"Calculating acceleration a=(v1-v0)/t..."<<endl;
    double a=(v1-v0)/t;
    cout<<"a="<<a<<"m^2/s"<<endl;
    return 0;
}
//
// Created by suxrobjalolov on 6/5/25.
//
