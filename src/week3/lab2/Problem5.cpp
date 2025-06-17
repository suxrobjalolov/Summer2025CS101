// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void power_two(int &x){
    x*=x;
}
int main() {
    int x=2;
    power_two(x);
    cout<<x<<endl;
    power_two(x);
    cout<<x<<endl;
    
}
