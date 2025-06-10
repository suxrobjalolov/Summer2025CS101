#include <complex>
#include <iostream>
using namespace std;

int main()
{
    int x, a, b, c, d;
    cin>>x;
    a=x/1000, b=(x%1000)/100, c=(x%100)/10, d=x%10;
    int e=0;
    if (a%2==0) {
        e++;
    }
    if (b%2==0) {
        e++;
    }
    if (c%2==0) {
        e++;
    }
    if (d%2==0) {
        e++;
    }
    if (e>2) {
        cout<<"More even numbers";
    } else if (e<2) {
        cout<<"More odd numbers";
    } else {
        cout<<"Equal even and odd digits";
    }
}
//
// Created by suxrobjalolov on 6/9/25.
//
