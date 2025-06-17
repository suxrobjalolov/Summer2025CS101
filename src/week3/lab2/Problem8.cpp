// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int sum_numbers(int n){
    if (n<=0){
        return 0;
    } else {
        return n+sum_numbers(n-1);
    }
}
int main() {
    int n;
    cin>>n;
    cout<<sum_numbers(n);
}
