#include<iostream>
using namespace std;
int main() {
    int i=1;
    while(i<=20){
        if(i==3 || i==8) {
            i++;
            continue;
        }
        cout<<i<<" ";
        i++;
    }
}