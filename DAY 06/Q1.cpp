/*Ques-01 Write a C++ program that takes an array as input and prints the sum of the array.

Sample Input:
Enter the size of the array: 5
Enter the array: 5 10 15 20 25

Sample Output:
Sum of the array: 75*/

#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the size of the array: "<<endl;
    cin >> n;

    int a[n];
    cout << "Enter the array: "<<endl;
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    
    int sum = 0;
    for(int i = 0; i<n; i++){
        sum += a[i];
    }
    cout << "Sum of the array: "<<sum<<endl;
}
