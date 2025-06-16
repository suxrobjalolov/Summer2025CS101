#include <iostream>
using namespace std;
double acceleration(double V1, double V2, double T) {
    return (V2-V1)/T;
}
int main() {
    double v1, v2,t;
    cin >> v1 >> v2 >> t;
    cout << "The acceleration is " << acceleration(v1, v2, t) << " m/s^2" << endl;
    return 0;
}
//
// Created by suxrobjalolov on 6/16/25.
//
