/*
Example 2
Write a program to find the perimeter and area of a square
The perimeter and area of the square are given by the following formulas:
perimeter = Side Length * 4
area = Side Length * Side Length
Input:
Square Side Length
Processing:
perimeter = Side Length * 4
area = Side Length * Side Length
Output:
Print Out The Perimeter and Area.
*/

#include <iostream>
using namespace std;

// Variables
float side_length , perimeter , Area;

// Main Function
int main(){
    // Inputs From User
    cout << "Enter Side Length Of Square: ";
    cin >> side_length;
    // Process
    perimeter = side_length * 4;
    Area = side_length *side_length;
    // Outputs
    cout << "your square perimeter is = " << perimeter << "\n";
    cout << "your square area is = " << Area;
    
    return 0;
}
