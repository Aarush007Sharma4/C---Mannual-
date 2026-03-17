#include <iostream>
using namespace std;
void print(int n){
    if(n==0) return; // Base case 
    // In this case the work is done after the call the function runs n times till n==0 then the work of that function is done and it's not printed 
    // It will go to the previous function each time where first n would start from 3 go till 0 then the work of the function is done so it goes to the previous one n=1 and then the work is done i.e printing
    // After printing the cursor moves to n=2 i.e the previous one same till n.
    print(n-1); // Call
    cout<<n<<endl; // Work
}
int main()
{
int n;
    cout<<"Enter n : ";
    cin>>n;
    print(n);
    return 0;
}
