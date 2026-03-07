#include<iostream>
using namespace std;
void swap(int &x, int &y){ //// pass by refrence
    int temp = x;
    x = y;
    y = temp;
}
int main(){
    int x=4;
    int y=2;
    cout<<x<<" "<<y<<endl;
    swap(x,y); // // pass by value
    cout<<x<<" "<<y<<endl;
    return 0;
}