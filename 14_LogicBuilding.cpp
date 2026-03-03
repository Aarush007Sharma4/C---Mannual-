// Take positve integer input and tell if it is divisible by 5 or 3 but not divisible by 15
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    if((n%5==0 or n%3==0)and n%15!=0){   // Can use or operator too
        cout<<n<<" is a 3 digit number";
    }
    else{
        cout<<"The number is not a 3 digit number";
    }
}