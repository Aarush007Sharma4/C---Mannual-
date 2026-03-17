#include<iostream>
using namespace std;
// Manually input array and print it
void inputArray(int n ){
    int array[n];
    for(int i=0;i<n;i++){
        cout<<"Enter element "<<i+1<<" : ";
        cin>>array[i];
    }
    cout<<"The elements in the array are : "<<endl;
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
}
// normal input
int main(){
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    int n;
    cout<<"\n"<<"Enter size of array : "<<endl;
    cin>>n;
    inputArray(n);
    return 0;
}