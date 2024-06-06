// Functions

// this code will gives me an error  
// error: 'sum' was not declared in this scope
#include <iostream>
using namespace std;



int main(){
    int number1,number2;
    cout << "Enter number 1: ";
    cin >> number1;
    cout << "Enter number 2: ";
    cin >> number2;
    cout << "The sum is: " << sum(number1,number2);
}

int sum(int a,int b){
    return (a + b);
}


// The correct code
#include <iostream>
using namespace std;

int sum(int a,int b){
    return (a + b);
}

int main(){
    int number1,number2;
    cout << "Enter number 1: ";
    cin >> number1;
    cout << "Enter number 2: ";
    cin >> number2;
    cout << "The sum is: " << sum(number1,number2);
}

// Enter number 1: 4
// Enter number 2: 5
// The sum is: 9


// Using Cmath Library
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double number1,number2;
    cout << "Enter number1: ";
    cin >> number1;
    cout << "Enter number2: ";
    cin >> number2;
    cout << "the square root for num1 is: " << sqrt(number1) << endl;
    cout << "the square root for num2 is: " << sqrt(number2) << endl;
    cout << "the the num1 raised to the power of num2 is: " << pow(number1,number2);
}

// Enter number1: 4
// Enter number2: 9
// the square root for num1 is: 2
// the square root for num2 is: 3
// the the num1 raised to the power of num2 is: 262144




// • For Example : write a program that ask the user to Enter 2 integer numbers
// and print out the larger of them.

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num1,num2;
    
  cout << "Enter num1: ";
  cin >> num1;
  cout << "Enter num2: ";
  cin >> num2;
  
  if(num1>num2){
      cout << "The larger number is number1 which is " << num1;
  }else if(num1 == num2){
      cout << "The two numbers are equal";
  }else{
      cout << "The larger number is number2 which is " << num2;
  }
}
// Way 2
// • For Example : write a program that ask the user to Enter 2 integer numbers
// and print out the larger of them.

#include <iostream>
#include <cmath>
using namespace std;

int larger(int num1,int num2){
    if(num1>num2){
      cout << "The larger number is number1 which is " << num1;
  }else if(num1 == num2){
      cout << "The two numbers are equal";
  }else{
      cout << "The larger number is number2 which is " << num2;
  }
}

int main(){
    int num1,num2;
    
  cout << "Enter num1: ";
  cin >> num1;
  cout << "Enter num2: ";
  cin >> num2;
  
  return larger(num1,num2);
}

