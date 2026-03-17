#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int mx=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>mx){
            mx=arr[i];
        }
    }
    int secondmx=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>secondmx && arr[i]<mx){
            secondmx=arr[i];
        }
    }
    cout<<secondmx<<endl; 
    return 0;
}