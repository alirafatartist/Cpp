/*
Example : write a program that accept an integer number from the user ,
in case the number is Positive , check and print out whether it is Even or Odd number.
*/

#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter Your Number: ";
    cin >> number;
    if(number > 0){
        if(number %2==0){
            cout << "The Number is positive ➕ & Even"; 
        }else{
        cout << "This Number is Odd!";
        }
    }else{
        cout << "This Number is Negative ➖";
    }
    return 0;
}
