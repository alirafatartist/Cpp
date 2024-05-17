/*
Example : Write a program that calculates and prints out the Average grade for 6 students .
*/

#include <iostream>
using namespace std;

int main() {
   const int studentcount = 6;
    int grade;
    int sum=0;
    double  average;
    for(int i=1; i<=studentcount; i++){
        cout << "Enter Student "<<i<< " Grade: " ;
        cin >> grade;
        sum += grade;
    }
    
    average = static_cast<double>(sum) / studentcount;
    cout << "The average grade is: " << average << endl;

    return 0;
}
