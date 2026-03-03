//Program to create a calculator that performs basic arithematic operations(add, subtract, multiply and divide) using switch case. The calculator should input two numbers and an operator from user.
// This one without switch case
// #include<iostream>
// using namespace std;
// int main() {
//     int n1;
//     cin>>n1;
//     char op;
//     cin>>op;
//     int n2;
//     cin>>n2;
//     if(op=='+')
//     cout<<n1+n2;
//     if(op=='-')
//     cout<<n1*n2;
//     if(op=='*')
//     cout<<n1*n2;
//     if(op=='/')
//     cout<<n1/n2;
// }
// WITH SWITCH CASE
#include<iostream>
using namespace std;
 int main() {
    int n1;
    cin>>n1;
    char op;
    cin>>op;
    int n2;
    cin>>n2;
    switch(op) {
        case '+':
        cout<<n1+n2;
        break;
        case '-':
        cout<<n1-n2;
        break;
        case '*':
        cout<<n1*n2;
        break;
        case '/':
        cout<<n1/n2;
        break;
        default:
        cout<<"Invalid operator";
    }
}