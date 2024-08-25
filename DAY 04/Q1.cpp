/*Write a C++ program that takes two integers as input and performs the following arithmetic operations:
Addition
Subtraction
Multiplication
Division (ensure that you handle division by zero)
Modulus

Sample Output :-

Enter first integer: 10
Enter second integer: 3
Addition: 13
Subtraction: 7
Multiplication: 30
Division: 3.33333
Modulus: 1

*/

#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    
    cout << "Enter first integer: ";
    cin >> num1;
    cout << "Enter second integer: ";
    cin >> num2;

   
    int addition = num1 + num2;
    int subtraction = num1 - num2;
    int multiplication = num1 * num2;
    
    
    if (num2 != 0) {
        float division = static_cast<float>(num1) / num2;
        cout << "Division: " << division << endl;
    } else {
        cout << "Division: Undefined (division by zero)" << endl;
    }

    
    if (num2 != 0) {
        int modulus = num1 % num2;
        cout << "Modulus: " << modulus << endl;
    } else {
        cout << "Modulus: Undefined (division by zero)" << endl;
    }

    
    cout << "Addition: " << addition << endl;
    cout << "Subtraction: " << subtraction << endl;
    cout << "Multiplication: "<< multiplication << endl;

}
