#include<iostream>
using namespace std;
int main(){
    int arr[]={12,6,7,34,9,23,2,8,3,6,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<n<<"\n";
    int maxx=arr[0];
    for(int i=1;i<n;i++){
        // if(arr[i]>maxx)
        //     maxx=arr[i];
        maxx=max(maxx,arr[i]);
    }
    cout<<maxx<<endl;
    return 0;
}