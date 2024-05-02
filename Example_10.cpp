#include <iostream>
using namespace std;

int main(){
    int grade;
    cout << "Enter your grade: ";
    cin >> grade;
    // switch works faster than an equivalent IF - Else ladder.
    switch(grade){ // the expersion inside switch must be and intager number or char not float 
        case 90:
            cout << "You Got A";
            break;
        case 80 :
            cout << "You Got B";
            break;
        case 70 :
            cout << "You Got C";
            break;
        case 60 : // we can't use many cases of same value
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

// we can make case or another case like this if user input was 70 or 80 the output it's be You Got C

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
        case 70 :
            cout << "You Got C";
            break;
        case 60 : // we can't daplicate any case of them again 
            cout << "You Got D";
            break;
    default :
            cout << "Sorry , You Got F in";
    }
}
