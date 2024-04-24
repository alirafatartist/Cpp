/*
Example 1
Write a program to find the Area of a rectangle
The area of the Rectangle are given by the following formula:
Area = Rect Length * Rect Width.
Input : 
Rectangle Length , Rectangle Width.
Processing : 
Area = Rect Length * Rect Width.
Output :
Print Out The area.
*/
#include <iostream>
using namespace std;

// Variables
int Width , Length , Area;

// Main function
int main(){
    // Inputs From User
    cout << "Enter rectangle length: ";
    cin >> Length;
    cout << "Enter rectangle width: ";
    cin >> Width;
    // Processing
    Area = Width * Length;
    // Output
    cout << "Your rectangle area is = " << Area;
    
    
    /* we can remove declaration of area to free space in memory and we can output like this
    cout << "Your rectangle area is = " << Width * Length;
    */
}
