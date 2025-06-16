#include <iostream>
using namespace std;
double fun (double radius, double pi=3.14f) {
    double circumference = 2 * pi *radius;
    double area = pi *radius *radius;
    cout<< circumference<<" "<<area<<endl;
    return 0;
}
int main() {
    double r;
    cin >> r;
    fun(r) ;
}
//
// Created by suxrobjalolov on 6/16/25.
//
