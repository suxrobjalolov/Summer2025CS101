#include <iostream>
using namespace std;
double fun (double x, double y) {
    double perimeter = 2*(x+y);
    double area = x * y;
    cout<< perimeter<<" "<<area<<endl;
    return 0;
}
int main() {
    double a, b;
    cin >> a>>b;
    fun(a, b) ;
}
//
// Created by suxrobjalolov on 6/16/25.
//
