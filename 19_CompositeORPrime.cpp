#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number to check if it is composite or prime";
    cin>>n;
    bool flag=true; // true means prime
    for(int i=2;i<=n/2;i++){ // here i=2 because 1 is a factor of every number and it does not make a number composite and n/2 because no number can be divided by a number greater than its half except itself and this saves memory and time
        if(n%i==0){
            flag=false; // false means composite
            break;
        }
    }
    if(flag==true){
        cout<<"The number is prime";
    }
    else{
        cout<<"The number is composite";
    }
}