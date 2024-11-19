#include <iostream>
#include <fstream>

using namespace std;

int main(){
    char arr[100];
    cout<<"Enter Some Text";
    cin.getline(arr,100);
    ofstream myfile("sample.txt");
    myfile << arr;
    myfile.close();
    cout<<"File Written Succesfully";

    return 0;
}