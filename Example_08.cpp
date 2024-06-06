/*
Example, print out the student grade according to the following formulas:
Afor exam marks greater than or equal 90 and less than or equal
B for exam marks greater than orequal 80 and less than 90
C for exam marks orequal to 70 and less than 80
D for exam rnarks t}nn or equal to 60, and 1 ess than 70
F for all ot}rr nurks.
100
*/

#include <iostream>
using namespace std;

int main(){
    int grade;
    cout << "Enter your grade: ";
    cin >> grade;
    if(grade >= 90 && grade <= 100)
        cout << "A";
    else if(grade <= 90 && grade >= 80)
        cout << "B";
    else if(grade <= 80 && grade >= 70)
        cout << "C";
    else if(grade <= 70 && grade >=60)
        cout << "D";
    else
        cout << "F";
}
