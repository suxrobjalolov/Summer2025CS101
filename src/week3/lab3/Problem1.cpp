// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int power(int n, int a, int i, int r){
    if (n==0 && a!=0){
        return 0;
    } else if (a==0){
      return 1;
    }  else if (a==1){
        return r;
    }else if (i<a){
        r*=n;
        return power(n, a, i+1, r);
        }
    return r;
}
int main() {
    int i=1;
    int n, a;
    cin>>n>>a;
    int r=n;
    cout<<power(n, a, i, r);
}
