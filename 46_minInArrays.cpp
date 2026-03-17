#include<iostream>
using namespace std;
int main(){
    int arr[] = {-10,-2,-3,-4,-5};
    int n = sizeof(arr)/4;
    // int mx=-1 if we use -1 as biggest number it would still give -1 as the maximun but in array -2 is max 
    int mx= INT_MIN; // so we use this the smallest value in the integer datatype
    for(int i=0;i<n;i++){
        mx=max(mx,arr[i]);
    }
    cout<<mx;
}