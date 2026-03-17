#include <iostream>
using namespace std;
void print(int n){
    if(n==0){
        return; // Base case // if we skip this condition it will be an infinite loop and we will get a segmentation fault error because of stack overflow
    }
    cout<<n<<endl; // Work
    print(n-1); // Call
}
int main()
{
    print(3);
    return 0;
}