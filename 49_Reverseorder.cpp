#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    int b[n];
    for(int i=0;i<n;i++){
        b[i]=a[n-1-i];
    }
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
    return 0;
}