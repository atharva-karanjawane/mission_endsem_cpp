#include <iostream>
#include <stdexcept>
using namespace std;

int main(){

try{
    int n = 10;
    int d = 0;
    int result;

    if (d==0){
        throw runtime_error("Division by zero not allowed");
    }

    result = n/d;
    cout<<"Result: "<<result;

}
catch (const exception& e){
    cout<<"Exception: "<<e.what()<<endl;
}
    return 0;
}