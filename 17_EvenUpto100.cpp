#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<=100;i++){
        if(i%2==0)
        cout<<i<<endl;
    }
}
// one better method to skip if condition
// for(int i=0;i<=100;i+=2){
//     cout<<i<<endl;
// }