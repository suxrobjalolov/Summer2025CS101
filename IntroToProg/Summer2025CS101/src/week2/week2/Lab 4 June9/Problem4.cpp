#include <complex>
#include <iostream>
using namespace std;

int main()
{
    double a, b, c, x, D;
    cin>>a>>b>>c;
    D=b*b-4*a*c;
    if (D<0) {
        cout<<"No solution";
    } else if (D=0) {
        x=(-b-sqrt(D))/(2*a);
        cout<< x;
    } else {
        double x1=(-b-sqrt(D))/(2*a);
        cout<< x1<<endl;
        double x2=(-b+sqrt(D))/(2*a);
        cout<< x2;
    }
}//
// Created by suxrobjalolov on 6/9/25.
//
