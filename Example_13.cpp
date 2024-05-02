/*
Example : Write a program that calculates and prints out the Average
grade for 5 students or ends the program by entering -1.
*/

#include <iostream>
using namespace std;

int main() {
    int counter=1,grade=0,sum=0;
    while(counter<=5){
        cout << "Enter student " << counter <<" grade: ";
        cin >> grade;
        if(grade == -1){
            break;
        }
        sum+=grade;
        counter++;
        
    }
        cout << "the Average grade for 5 students is: "<< float(sum)/5;
}
/*
Enter student 1 grade: 10
Enter student 2 grade: 20
Enter student 3 grade: 30
Enter student 4 grade: 40
Enter student 5 grade: 50
the Average grade for 5 students is: 30
*/

/*
Enter student 1 grade: 10
Enter student 2 grade: -1
the Average grade for 5 students is: 2
*/
