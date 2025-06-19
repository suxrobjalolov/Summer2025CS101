// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int sumDigits(int n){
    if (0==n){
        return 0;
    } else {
        return n%10+sumDigits(n/10);
    }
}
int main() {
    int n;
    cin>>n;
    cout<<sumDigits(n);
}
