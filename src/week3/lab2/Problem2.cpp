// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void addToSum(int x){
    static int sum=0;
    sum+=x;
    cout<<sum<<endl;
}
int main() {
    addToSum(5);
    addToSum(18);
    addToSum(17);

    return 0;
}
