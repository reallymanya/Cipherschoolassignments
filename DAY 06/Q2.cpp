/*Ques-02 Write a C++ program that takes an array as input and prints the sum of odd numbers and the sum of even numbers separately.

Sample Input:
Enter the size of the array: 5
Enter the array: 5 10 15 20 25

Sample Output:
Sum of odd numbers: 45
Sum of even numbers: 30
*/

#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int a[n];
    cout << "Enter the array: "<<endl;
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }

    int sumodd = 0;
    int sumeven = 0;

    for(int i = 0; i<n; i++){
        if(a[i]%2 == 0){
            sumeven += a[i];
        }
        else{
            sumodd += a[i];
        }
    }
    cout << "Sum of odd numbers: "<< sumodd <<endl;
    cout << "Sum of even numbers: "<< sumeven << endl;
}