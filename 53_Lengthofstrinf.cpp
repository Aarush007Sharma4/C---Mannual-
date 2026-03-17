#include<iostream>
using namespace std;
int main(){
    string s = "Aarush Sharma or Mom Stealer"; // Size is 29 because + extra character \0 null character ASCII value = 0
    cout<<s.length()<<endl;
    cout<<s.size()<<endl;
}