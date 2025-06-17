// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int print_numbers(int n, int a){
    if (n<=0 || a>n){
        return 0;
    } else {
        cout<<a<<endl;
        return print_numbers(n, a+1);
    }
}
int main() {
    int a=1;
    int n;
    cin>>n;
    cout<<print_numbers(n, a);
}
