#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"The remainder when "<<a<<" is divided by "<<b<<" is: "<<a%b;
}
// IMPORTANT RULES :
// 1) a%b = a [if a<b]
// 2) a%a = 0 
// 3) a%(a+1) = a
// 4) a%(a-1) = 1
// 5) a%(-b) = a%b
// 6) (-a)%b = -(a%b)