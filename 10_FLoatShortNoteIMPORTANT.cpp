// #include<iostream>
// using namespace std;
// int main(){
//     float x=5/2;
//     cout<<x;
// }
// This will give output as 2 not 2.5 because compiler thinks 5/2 as int/int first then saves the value in x.
#include<iostream>
using namespace std;
int main(){
    cout<<5/2<<endl; // 2
    cout<<5/2.0<<endl; // 2.5
    cout<<5.0/2<<endl; // 2.5
    cout<<5.0/2.0<<endl; // 2.5 
}