# Endsem OOPs Preparation

## Syllabus

------------


Unit 3: Polymorphism
Unit 4: Files and Streams
Unit 5: Exception Handling
Unit 6: Standard Template Library

------------


## Unit 3 : Polymorphism

##### Types of Polymorphism
1. Compile Time
		Method Overloading
		Operator Overloading
2. Run Time
		Virtual functions

##### [Method Overloading](https://github.com/atharva-karanjawane/mission_endsem_cpp/blob/b745b803f04e0d4ab61ab6f60219ebe75a3958a3/Unit%203%20-%20Polymorphism/method_overloading.cpp "Method Overloading")
It is feature of OOP where a two or more functions have same name but different dtype or parameters.

##### [Operator Overloading](https://github.com/atharva-karanjawane/mission_endsem_cpp/blob/b745b803f04e0d4ab61ab6f60219ebe75a3958a3/Unit%203%20-%20Polymorphism/operator_overloading.cpp "Operator Overloading")
It is compile time polymorphism, in this type the operator is overloaded to provide specific meaning to user defined datatype ( here complex no.)

**Operators which cannot be overloaded**
- Scope resolution operator ( :: )
- Conditional operator ( ?: )
- Class access operator ( . )
- Size of operator

### Run Time Polymorphism
##### Function Overriding

It is concept in which we can define a function of same name & same parameters in both  base class & derived class.

### [Type Casting](https://github.com/atharva-karanjawane/mission_endsem_cpp/blob/b745b803f04e0d4ab61ab6f60219ebe75a3958a3/Unit%203%20-%20Polymorphism/type_casting.cpp "Type Casting")
It is process of converting one datatype to another.

#### Types of Type Casting
1. Implicit Type Casting
2. Explicit Type Casting

##### Implicit Type Casting
Also known as automatic type conversion.
- It is possible for implicit conversions to lose information, signs can be lost (when signed is implicitly converted to unsigned), and overflow can occur (when long long is implicitly converted to float).
```cpp
// An example of implicit conversion

#include <iostream>
using namespace std;

int main()
{
    int x = 10; // integer x
    char y = 'a'; // character c

    // y implicitly converted to int. ASCII
    // value of 'a' is 97
    x = x + y;

    // x is implicitly converted to float
    float z = x + 1.0;

    cout << "x = " << x << endl
         << "y = " << y << endl
         << "z = " << z << endl;

    return 0;
}
```

##### Explicit Type Casting
Here the user can typecast the result to make it of a particular data type.
`(type) expression`

### [Virtual Function](https://github.com/atharva-karanjawane/mission_endsem_cpp/blob/b745b803f04e0d4ab61ab6f60219ebe75a3958a3/Unit%203%20-%20Polymorphism/virtual_function.cpp "Virtual Function")
It is a member function which is declared within base class and redefined by derived class.
    // C++ program to illustrate
    // concept of Virtual Functions
    
    #include <iostream>
    using namespace std;
    
    class base {
    public:
        virtual void print() { cout << "print base class\n"; }
    
        void show() { cout << "show base class\n"; }
    };
    
    class derived : public base {
    public:
        void print() { cout << "print derived class\n"; }
    
        void show() { cout << "show derived class\n"; }
    };
    
    int main()
    {
        base* bptr;
        derived d;
        bptr = &d;
    
        // Virtual function, binded at runtime
        bptr->print();
    
        // Non-virtual function, binded at compile time
        bptr->show();
    
        return 0;
    }

#### Pure Virtual Function

It is the function that must be overriden in derived class & need not to be defined.

```cpp
// An abstract class
class Test {
    // Data members of class
public:
    // Pure Virtual Function
    virtual void show() = 0;

    /* Other members */
};
```

##### Abstract Class 
A class which contains atleast one pure virtual function is called as abstract base class.

- We cannot create objects of abstract base class due to its functions with no defination.
- We can create pointers and references to abstract class.
