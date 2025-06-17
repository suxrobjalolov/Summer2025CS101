// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void reverseDigits(int &x){
    int r=0;
    for (int a=x; a>0; a/=10){
        r=r*10+a%10;
    }
    cout<<r<<endl;
}
int main() {
    int x=123;
    reverseDigits(x);
}
