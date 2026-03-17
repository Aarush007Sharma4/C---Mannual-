#include<iostream>
using namespace std;
int change(int arr[]){
    arr[0]=9; // The value at 0 index will change to 9 as arrays are pass by refrence
}
int main(){
    int arr[3]={1,2,3};
    for(int i=0;i<=2;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    change(arr);
    for(int i=0;i<=2;i++){
        cout<<arr[i]<<" ";
    }
}