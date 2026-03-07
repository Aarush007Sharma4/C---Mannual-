#include<iostream>
using namespace std;
int main(){
    int x =12;
    int*ptr=&x;
    cout<<x<<endl; // value of x
    *ptr=23; // update value of x using pointer
    cout<<x<<endl;
    return 0;
}