#include <iostream>
using namespace std;

class Complex{
    private:
    int real,imag;
    // x + iy
    public:
    Complex(int r = 0, int i = 0){
        real = r;
        imag = i;
    }
    Complex operator+(Complex const& obj){
        Complex result;
        result.real = real+ obj.real;
        result.imag = imag + obj.imag;
        return result;
    }
    
    void display(){
        cout<<real<<" + i"<<imag<<'\n';
    }
};

int main() {
    Complex c1(10,5),c2(2,4);
    Complex c3 = c1 + c2;
    c3.display();
    return 0;
}
