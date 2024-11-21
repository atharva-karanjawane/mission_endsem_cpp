#include <iostream>
using namespace std;

// template <typename dtype> dtype func_name(parameters)
template <typename T> T myMax(T x, T y){
    return (x > y) ? x : y;
}


int main(){
    cout << myMax<int>(3,7)<<endl;
    cout << myMax<double>(3.4,6.3)<<endl;

    return 0;
}