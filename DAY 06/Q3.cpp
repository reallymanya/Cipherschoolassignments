/*Ques-03 Write a C++ program that takes an array as input and prints the number of odd numbers and the number of even numbers in the array.

Sample Input:
Enter the size of the array: 5
Enter the array elements: 5 10 15 20 25

Sample Output:
Number of odd numbers: 3
Number of even numbers: 2*/


#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int a[n];
    cout << "Enter the array elements: "<<endl;
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }

    int countodd = 0;
    int counteven = 0;

    for(int i = 0; i<n; i++){
        if(a[i]%2 == 0){
            counteven++;
        }
        else{
            countodd++;
        }
    }
    cout << "Number of odd numbers: "<< countodd <<endl;
    cout << "Number of even numbers: "<< counteven << endl;
}