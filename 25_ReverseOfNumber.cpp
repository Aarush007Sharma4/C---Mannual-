// WAP to print reverse of a given number.
#include <iostream>
using namespace std;
int main(){
    int n, r=0;
    cout<<"Enter a number: ";
    cin>>n;
    while(n!=0){
        int last_digit=n%10; // we did this to get the last digit of the number
        n=n/10; // we did this to remove the last digit from the number
        r=r*10+last_digit; // we did this to add the last digit to the reverse number
    }
    cout<<"Reverse of the number: "<<r;
    return 0;
}

// steps are last digit nikalo, number ko last digit se divide karke remove karo, reverse number ko 10 se multiply karke last digit add karo and repeat.
