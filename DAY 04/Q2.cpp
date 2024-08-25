#include<iostream>
using namespace std;
class Complex{
    private:
    int real; 
    int image;
    public: 
    Complex(int r=0, int i=0):
    real(r), image(i){ }
    Complex operator + (const Complex& other){
        return Complex(real + other.real, image + other.image);
    }
    Complex operator - (const Complex& other){
        return Complex(real - other.real, image - other.image);
    }
    void display() const{
        cout<<real<<" + "<<image<<"i"<<endl;
    }
};

int main(){
    Complex c1(3,4);
    Complex c2(1, 2);
    cout<<"Complex Number 1: ";
    c1.display();
    cout<<"Complex Number 2: ";
    c2.display();
    Complex sum = c1+c2;
    Complex difference = c1-c2;
    cout<<"Sum: ";
    sum.display();
    cout<<"Difference: ";
    difference.display();
    return 0;
}


