// concept of Virtual Functions

// notes - https://www.geeksforgeeks.org/virtual-function-cpp/
#include <iostream>
using namespace std;

class base {
public:
    virtual void display() { 
        cout << "display base class\n"; 
    }

    void show() { 
        cout << "show base class\n"; 
    }
};

class derived : public base {
public:
    void display() { 
        cout << "display derived class\n"; 
    }

    void show() { 
        cout << "show derived class\n"; 
    }
};

int main()
{
    base* bptr;
    derived d;
    bptr = &d;

    // Virtual function, binded at runtime
    bptr->display();

    // Non-virtual function, binded at compile time
    bptr->show();

    return 0;
}


// Pure Virtual Function

#include <iostream>
using namespace std;
class Car{
public:
    // pure virtual function
    virtual void color() = 0;
};

class Honda_City : public Car{
public:
    void color(){
    cout<<"Color is Blue";
}
};

int main(){
    Car* cptr;
    Honda_City hc;
    cptr = &hc;
    
    cptr->color();
    // output --> "Color is Blue"
return 0;
}
