//Given an integer n. Create an array containing squares of all natural numbers till n and print the elements of the array
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++){
        arr[i]=i*i;
        cout<<arr[i]<<" ";
    }
    return 0;
}