/*Ques-01 Write a C++ function that checks whether an integer is odd or even. If the integer is odd, print "Odd"; otherwise, print "Even."

Sample Input:
Enter a number: 5

Sample Output:
Odd*/

#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "Enter a number: ";
    cin >> a;

    if(a%2 == 0){
        cout << "Even"<< endl;
    }
    else{
        cout << "Odd" << endl;
    }
}