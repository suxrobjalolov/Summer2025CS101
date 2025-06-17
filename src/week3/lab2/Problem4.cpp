// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void swap(int &a, int &b){
    a+=b;
    b=a-b;
    a=a-b;
}
int main() {
    int a=10, b=4;
    swap(a, b);
    cout<<"a: "<<a<<"\nb: "<<b;
}
