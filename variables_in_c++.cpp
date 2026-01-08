#include<iostream>
using namespace std;
int main(){
    // variable names c++ suppport
    int _age = 25;
    int age2 = 30;
    int ageOfPerson = 35;
    cout << _age << endl;
    cout << age2 << endl;
    cout << ageOfPerson << endl;

    // invalid variable names
    // int 2age = 40; // starts with a digit    
    // int age-of-person = 45; // contains hyphen
    // int age person = 50; // contains space

    //variable naming rules
    // 1. should start with a letter (a-z, A-Z) or underscore
    // 2. can contain letters, digits (0-9), and underscores
    // 3. cannot contain spaces or special characters except underscore & dollar sign
    // 4. cannot be a reserved keyword in C++

    return 0;
}