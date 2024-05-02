/*
Example : Write a program that calculates and prints out the Average
grade for 6 students .
*/

#include <iostream>
using namespace std;

int main(){
    int counter=1,sum=0,grade=0;
    while(counter<=6){
        cout << "Enter Student "<< counter << " Grade: ";
        cin >> grade;
        sum+= grade;
        counter++;
    }
    
    cout << "the Average grade for 6 students: " << float(sum)/counter;
}

/*
Enter Student 1 Grade: 5435
Enter Student 2 Grade: 435
Enter Student 3 Grade: 534
Enter Student 4 Grade: 543
Enter Student 5 Grade: 43
Enter Student 6 Grade: 345
the Average grade for 6 students: 1047.86
*/
