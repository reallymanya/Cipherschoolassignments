/*Write a C++ function that takes a string as a parameter and checks how many vowels and consonants are in that string.
Assuming that string contains only lowercase.

Sample Input:
Enter a string: cipherschools

Sample Output:
Number of vowels: 4
Number of consonants: 9*/

#include<iostream>
using namespace std;
void count(string s){
    int vowcount = 0;
    int concount = 0;
    int l=s.length();
    for(int i=0;i<l;i++){
        char ch = s[i];
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
            vowcount++;
        }else{
            concount++;
        }
    }
    cout<<"Number of vowels: "<<vowcount<<endl;
        cout<<"Number of consonants: "<<concount<<endl;
}
int main(){
    string str;
    cout<<"Enter a string: ";
    cin>>str;
    count(str);
    return 0;
    }