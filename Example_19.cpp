/*
Example : Write a program that calculates the Factorial for any given
positive number.
*/
#include <iostream>
using namespace std;

int main() {
    int Number;
    cout << "Enter a positive number: ";
    cin >> Number;
    int Factorial=1;
    if(Number ==0){
        cout << Factorial;
    }else{
        for(int i=Number;i>=1;i--){
            Factorial *=i;
        }
    cout << Factorial;
    }
}



