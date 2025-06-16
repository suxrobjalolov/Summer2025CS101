#include <iostream>
using namespace std;
double max (double a, double b, double c) {
    return (a > b && a > c) ? a : (b > c) ? b : c;
}
double min (double a, double b, double c) {
    return (a < b && a < c) ? a : (b < c) ? b : c;
}

int main() {
    double x, y, z;
    cin >> x >> y >> z;
    cout << "The maximum of " << x << ", " << y << ", and " << z << " is " << max(x, y, z) << endl;
    cout << "The minimum of " << x << ", " << y << ", and " << z << " is " << min(x, y, z) << endl;
    return 0;

}
//
// Created by suxrobjalolov on 6/16/25.
//
