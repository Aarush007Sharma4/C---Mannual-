#include<iostream>
using namespace std;
int main(){
    int x = 3;
    int*p=&x;
    cout<<&x<<endl; // address of x
    cout<<p<<endl; // address stored in p
    cout<<*p<<endl; // value stored at the address stored in p
    cout<<&p<<endl; // address of pointer p
    cout<<sizeof(p)<<endl; // size of pointer p 
    cout<<sizeof(*p)<<endl; // size of value stored at the address stored in p
    return 0;

}