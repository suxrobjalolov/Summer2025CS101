#include <complex>
#include <iostream>
using namespace std;

int main()
{
    double a, b, c;
    cin>>a>>b>>c;

    if (a+b>c && a+c>b && b+c>a) {
        if (a==b && b==c) {
            cout<<"Equilateral"<<endl;
        } else if (a==b || b==c || a=c) {
            cout<<"Isosceles"<<endl;
        } else {
            cout<<"Scalene"<<endl;
        }
    } else {
        cout<<"Not a triangle"<<endl;
    }
}
//
// Created by suxrobjalolov on 6/9/25.
//
