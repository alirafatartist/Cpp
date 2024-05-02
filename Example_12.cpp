/*
Example : Write a program To print out the sum of the numbers entered
from the user as long as he/she enters positive numbers.
*/

#include <iostream>
using namespace std;

int main(){
    int num,sum=0;
    while(num>=0){
        cout << "Enter number: ";
        cin >> num;
        sum+= num;
    }
    
    cout << "the sum of numbers is: " << sum;
}

/*
Enter number: 1
Enter number: 2
Enter number: 3
Enter number: 4
Enter number: 5
Enter number: 6
Enter number: 7
Enter number: 8
Enter number: 9
Enter number: -1
the sum of numbers is: 44
*/

// OR

#include <iostream>
using namespace std;

int main(){
    int num,sum=0;
    while(1){
        cout << "Enter number: ";
        cin >> num;
        sum+= num;
        if(num<0){
            break;
        }
    }
    
    cout << "the sum of numbers is: " << sum;
}

/*
Enter number: 50
Enter number: 10
Enter number: -1
the sum of numbers is: 59
*/
