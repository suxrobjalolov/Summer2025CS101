// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int product(int a, int b){
    if (a==0 || b==0){
        return 0;
    } else {
        return a + product(a, b-1);
    }
}
int main() {
    int a, b;
    cin>>a>>b;
    cout<<product(a, b);
}
