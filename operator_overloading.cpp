// Example for Operator Overlaoding
#include <iostream>
using namespace std;
// Created class named complex which resembles complex numbers
class Complex{
    private:
    int real,imag;
    // x + it
    // x - real
    // y - imag
    public:

    // Constructor - It is used to instantiate the class object.
    // Basically constructor tewa call hoto jewa tu object banvto tya class cha.
    Complex(int r = 0, int i = 0){
        real = r;
        imag = i;
    }

    // Operator Overloading
    Complex operator+(Complex const& obj){
        Complex result;
        result.real = real+ obj.real;
        result.imag = imag + obj.imag;
        return result;
    }
    // display() - It is used to display or cout the Complex number
    void display(){
        cout<<real<<" + i"<<imag<<'\n';
    }
};

int main() {
    // Object Creation - c1,c2
    Complex c1(10,5),c2(2,4);
    // Operator overloading
    Complex c3 = c1 + c2;
    // Displays c3
    c3.display();
    
    return 0;
}
