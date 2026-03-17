#include<iostream>
using namespace std;
int fact(int n){
    if(n==1 || n==0) return 1;
    return n*fact(n-1); // This uses tree diagram type first it goes from 5 4 3 2 1 then 1! 2x1=2  3x2=6  4x6=24 5x24....
}
int main(){
    int n;
    cout<<" Enter n : ";
    cin>>n;
    cout<<fact(n);
}