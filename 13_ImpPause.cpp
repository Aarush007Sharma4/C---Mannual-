//Take positive integer input and tellm if it is a three digit number or not.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    if(n>99 and n<1000){   // Can use or operator too
        cout<<n<<" is a 3 digit number";
    }
    else{
        cout<<"The number is not a 3 digit number";
    }
}