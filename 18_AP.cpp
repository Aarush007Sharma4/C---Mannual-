// METHOD 1 :-
// nth term formula
// an=a+(n-1)d
// a=1 d=2
// an=1+(n-1)*2
// an=2n-1
#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"Enter Number of terms"<<endl;
    cin>>n; 
    //1 3 5 7 9
    for(int i=1;i<=2*n-1;i+=2){  //Write 2*n as computer doesn't recognice 2n as 2 x n.
        cout<<i<<" ";
    }
}
// METHOD 2 :-
// for(int i=1;i<=n;i++){
//     cout<<2*i-1<<" ";
// }


// METHOD 3 :-(using extra variable)
// int main() {
//    int n;
//    cout<<"Enter Number of terms"<<endl;
//     cin>>n;
//     // 4 7 10 13 16 
//     int a=4;
//     for(int i=1;i<=n;i++){
//         cout<<a<<" ";
//         a=a+3; // For GP just do a=a*r; r=common ratio
//     }
// }