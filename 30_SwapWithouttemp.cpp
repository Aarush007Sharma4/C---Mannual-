#include<iostream>
using namespace std;
int main(){
    int x=4;
    int y=2;
    cout<<x<<" "<<y<<endl;
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<x<<" "<<y;
    return 0;
}