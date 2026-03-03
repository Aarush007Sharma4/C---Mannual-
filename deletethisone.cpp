// Create a function to swap 2 integers using 2 functions using void swap(int,int) and void swap(float,float)
#include <iostream>
using namespace std;
void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Swapped integers: x = " << a << ", y = " << b << endl;
}
void swap(float a, float b) {
    float temp = a;
    a = b;
    b = temp;
    cout << "Swapped floats: m = " << a << ", n = " << b << endl;
}
int main() {
    int x = 5, y = 10;
    float m = 1.5, n = 2.5;

    cout << "Before swapping integers: x = " << x << ", y = " << y << endl;
    swap(x, y);
    cout << "Before swapping floats: m = " << m << ", n = " << n << endl;
    swap(m, n);
    return 0;
}