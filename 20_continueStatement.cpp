// #include<iostream>
// using namespace std;
// int main(){
//     for (int i=1;i<=20;i++){
//         if(i!=3 && i!=8) cout<<i<<" ";
//     }
// }
// the above code can be written as
#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<=20;i++){
        if(i==3 || i==8) continue; // Continue means skip what conditions says
        // Can Write like this also
        if (i==2) continue;
        if (i==3) continue;
        cout<<i<<" ";
    }
}