/*
Example : write a program that accept an integer from the user and
print out whether it is Positive or Negative number.
*/

#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter Your NUmber: ";
    cin >> number;
    if(number > 0){
        cout << "This number is positive ➕";
    }else{
        cout << "This number is negative ➖";
    }
    return 0;
}

// OR

#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter Your NUmber: ";
    cin >> number;
    if(number < 0){
        cout << "This number is negative ➖";
    }else{
        cout << "This number is positive ➕";
    }
    return 0;
}
