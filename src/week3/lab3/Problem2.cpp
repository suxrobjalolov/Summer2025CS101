// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
float series(float n, float i, float r){
    if (n<=0){
        return 0;
    } else if (n==1){
        return 1;
    } else if(i<=n){
        r=r+1/(i*i);
        return series(n, i+1, r);
    }
    return r;
}
int main() {
    float i=1;
    float n;
    cin>>n;
    float r=0;
    cout<<series(n, i, r);
}
