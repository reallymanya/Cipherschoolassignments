/*Ques-01 Write C++ program that take array from the user and sort the array using bubble sort algorithm.

Input:
N = 5
arr[] = {4, 1, 3, 9, 7}

Output:
1 3 4 7 9

*/




#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int temp=0;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}