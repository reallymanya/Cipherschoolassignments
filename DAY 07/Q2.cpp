/*Ques-02 Write C++ program that take array from the user and sort the array using insertion sort algorithm.

Input:
N = 5
arr[] = {4, 1, 3, 9, 7}

Output:
1 3 4 7 9*/




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
    for(int i=1;i<n;i++){
        temp=a[i];
        int j=i-1;
        while(temp<a[j]&&j>=0){
            a[j+1]=a[j];
            --j;
        }
        a[j+1]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

