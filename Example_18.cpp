/*
Example : Write a program that accepts 10 numbers from the user and
prints out the sum of even numbers and the sum of odd numbers.
*/
#include <iostream>
using namespace std;

int main() {
    int Number;
    int SumE;
    int SumO;
    for(int i =1;i<=10;i++){
        cout << "Enter Number" << i << ": ";
        cin >> Number;
        if(Number % 2==0){
            SumE += Number;
        }else{
            SumO += Number;
        }
    }
    cout << "sum of even numbers is: " << SumE << "\n";
    cout << "sum of odd numbers is: " << SumO;
}
