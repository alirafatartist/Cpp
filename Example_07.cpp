/*
• For example, the following code will print
A for exam grades greater than or equal to 90,
B for grades greater than or equal to 80,
C for grades greater than or equal to 70,
D for grades greater than or equal to 60, and
F for all other grades.
*/

#include <iostream>
using namespace std;

int main(){
    int grade;
    cout << "Enter your grade: ";
    cin >> grade;
    if(grade >= 90)
        cout << "A";
    else if(grade >= 80)
        cout << "B";
    else if(grade >= 70)
        cout << "C";
    else if(grade >= 60)
        cout << "D";
    else
        cout << "F";
}
