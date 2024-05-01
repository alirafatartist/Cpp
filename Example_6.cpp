/*
For example, write a program that ask the user to Enter 2 numbers and print out
whether they are equal or there is one which is greater than the other.
*/

#include <iostream>
using namespace std;

int main(){
    int num1,num2;
    cout << "Enter Number 1: ";
    cin >> num1;
    cout << "Enter Number 2: ";
    cin >> num2;
    
    if(num1 == num2){
        cout << "The two numers are equal";
    }else if(num1 > num2){
        cout << "The number 1 is greater than number 2";
    }else{
        cout << "The number 2 is greater than number 1";
    }
}
