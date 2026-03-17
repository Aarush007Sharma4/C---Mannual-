#include<iostream>
using namespace std;
int main(){
    int a[]={12,6,7,34,9,100,2,8};
    int n=sizeof(a)/4;
    //We will use two pointers i and j that will c]scan the index and move the elements in the array back and fourth
    int i=0;
    int j=n-1;
    while(i<j){
        int temp = a[i];
        a[i] = a[j];
        a[j]= temp;
        i++;
        j--;
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}