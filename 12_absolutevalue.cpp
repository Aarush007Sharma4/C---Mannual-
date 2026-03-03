// i.e if n =22 print 22 and if n =-22 print 22
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n>=0){
        cout<<n;
    }
    else{
        cout<<-n;
    }
}