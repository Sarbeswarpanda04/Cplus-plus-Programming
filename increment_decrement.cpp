#include<iostream>
using namespace std;
int main() {
    int x =5;
    cout<< x++ << endl;  // Post-increment: prints 5, then x becomes 6
    cout<< ++x << endl;  // Pre-increment: x becomes 7,
    return 0;
}