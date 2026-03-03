//WAP to print sum of digits of a given number.
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int sum=0;
    while(n!=0){
        int last_digit=n%10; // we did this to get the last digit of the number
        n=n/10; // we did this to remove the last digit from the number
        sum+=last_digit; // we did this to add the last digit to the sum
    }
    cout<<"Sum of digits: "<<sum;
    return 0;
}    