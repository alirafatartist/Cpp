#include <iostream>
using namespace std;

int main(){
    int grade;
    cout << "Enter your grade: ";
    cin >> grade;
    
    switch(grade){ // the expersion inside switch must be and intager number not float or these stuff
        case 90:
            cout << "You Got A";
            break;
        case 80 :
            cout << "You Got B";
            break;
        case 70 :
            cout << "You Got C";
            break;
        case 60 :
            cout << "You Got D";
            break;
    default :
            cout << "Sorry , You Got F in";
    }
}
/* For Example if we don't add break; 
if input was 70 the output will be
you got c 
you got d 
Sorry , You Got F in
*/
