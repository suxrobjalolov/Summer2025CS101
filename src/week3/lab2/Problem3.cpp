// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void uodateMax(int x){
    static int max=0;
    if (max<=x){
        max=x;
    }
    cout<<max<<endl;
}
int main() {
    uodateMax(5);
    uodateMax(18);
    uodateMax(12);

    return 0;
}
