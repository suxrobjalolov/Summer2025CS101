// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int value=10;
void fun(){
    int value=5;
    cout<<"Fun: "<<value<<endl;
}
int main() {
    int value=3;
    cout<<value<<endl;
    fun();
    cout<<(::value)<<endl;
}
