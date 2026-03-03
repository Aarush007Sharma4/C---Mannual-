#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter a number to find its HCF";
    cin>>n;
    int storage=1;// to store the highest common factor
    for(int i=1;i<=n/2;i++){ // n/2 because no number can be divided by a number greater than its half except itself and this saves memory and time
        if(n%i==0 && i%storage==0){ // i%storage==0 to check if the current factor is a common factor of the previous factors
            storage=i;
        }
    }
    cout<<storage;
}