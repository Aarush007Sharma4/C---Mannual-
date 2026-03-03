// Question: Take integer 'x" as input and print half of it. (Use typecasting to convert the integer to float before dividing by 2)
#include<iostream>
using namespace std;
int main(){
    int x;
    cout <<"Enter a number: ";
    cin>>x;
    float y=(float)x; // Typecasting the integer x to float before dividing by 2
    cout<<"Half of the number is: "<<y/2;
}