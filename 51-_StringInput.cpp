#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string : ";
    //cin>>s; Takes only first input
    getline(cin,s);
    cout<<s;
}