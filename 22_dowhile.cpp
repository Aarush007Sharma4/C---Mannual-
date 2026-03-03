#include<iostream>
using namespace std;
int main(){
    int i=11;
    do{
        cout<<i<<" "<<endl;
        i++;}
    while(i<=10);
}
// Even if i is bigger than 10 it would still print 11 because do while loops always runs at least one time.