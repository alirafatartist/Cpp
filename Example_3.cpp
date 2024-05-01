/*
Example : write a program that accept an integer from the user and in case this
integer is even print out the follouing message
"This number is even"
  */

#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter Your NUmber: ";
    cin >> number;
    if(number % 2){
        cout << "This number is odd ❌";
    }else{
        cout << "This number is even ✅";
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
    if(number % 2 == 0){
        cout << "This number is even ✅";
    }else{
        cout << "This number is odd ❌";
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
    if(number % 2 != 0){
        cout << "This number is odd ❌";
    }else{
        cout << "This number is even ✅";
    }
    return 0;
}
