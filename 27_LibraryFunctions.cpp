#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double num; // we used double because the square root of a number can be a decimal number
    cout<<"Enter a number: ";
    cin>>num;
    // cout<<sqrt(16)<<endl; // this is used to find the square root of a number
    // cout<<pow(2,3)<<endl; // this is used to find the power of a number, in this case 2 raised to the power of 3
    // cout<<abs(-5)<<endl; // this is used to find the absolute value of a number
    // cout<<round(3.14)<<endl; // this is used to round a
    // cout<<max(5,10)<<endl; // this is used to find the maximum of two numbers
    // cout<<min(5,10)<<endl; // this is used to find the minimum of two numbers
    cout<<sqrt(num)<<endl;
    return 0;
}