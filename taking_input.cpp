#include<iostream>
using namespace std;
int main() {
    cout << "Enter your name: ";
    string name;
    cin >> name;
    cout << "Hello, " << name << "!" << endl;

    cout << "Enter your age: ";
    int age;
    cin >> age;
    if (age >= 18) {
        cout << "You are " << age << " years old." << endl;
        cout << "You are eligible to vote." << endl;
    } else {
        cout << "You are " << age << " years old." << endl; 
        cout << "You are not eligible to vote." << endl;

        return 1;
    }
    
    return 0;
}