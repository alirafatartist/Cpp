/*
Example : A company insures its Employees in the following cases:
— Employee is married.
— Employee is an Single male above 30 years of age.
— Employee is an Single female above 25 years of age.
*/

#include <iostream>
using namespace std;

int main() {
    char Marital_status;
    char Sex;
    int age;

    cout << "Enter your Sex (M/F): ";
    cin >> Sex;
    cout << "Enter your Marital status (M/S): ";
    cin >> Marital_status;
    cout << "Enter your Age: ";
    cin >> age;

    if (Marital_status == 'M')
        cout << "- Employee is married: True";
    else if (Marital_status == 'S' && Sex == 'M' && age > 30)
        cout << "- Employee is a Single Male above 30 years of age: True";
    else if (Marital_status == 'S' && Sex == 'F' && age > 25)
        cout << "- Employee is a Single Female above 25 years of age: True";

    return 0;
}
