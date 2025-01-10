#include <iostream>

using namespace std;

int main()
{
    double n1=0,n2=0;
    int n1=0, n2=0, op=0;
    std::cout << "Welcome to calculator" << std::endl;
    calculator:
    std::cout << "Dear User, Please Enter 2 numbers" << std::endl;
    std::cin >> n1 >> n2;
    if(cin.fail()) {
            cin.clear(); // Clear the error flag
            cin.ignore(10000, '\n'); // Ignore invalid input
            cout << "Invalid input. Please enter two numbers:" << endl;
            goto calculator
    } 
        
    chooseop:
    std::cout << "Please Enter operation. (l for +, 2 for -, 3 for * , 4 for / )" << std::endl;
    std::cin >> op;
    if(n1 == 0){
        std::cout << "Can't devid by zero ⚠️" << std::endl;
    }
    else if (op == 1) {
        std::cout << "Result " << n1 << " + " << n2 << " is " << (n1 + n2) << std::endl;
    } else if (op == 2) {
        std::cout << "Result " << n1 << " - " << n2 << " is " << (n1 - n2) << std::endl;
    } else if (op == 3) {
        std::cout << "Result " << n1 << " X " << n2 << " is " << (n1 * n2) << std::endl;
    } else {
        std::cout << "Invalid option" << std::endl;
        goto chooseop;
    }
    return 0;
}
