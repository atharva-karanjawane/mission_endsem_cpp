#include <iostream>
#include <fstream> // Input Output File Stream 

using namespace std;

int main(){
/*    
// Writing in a file

    // To Store the input Text
    char arr[100];
    // Display purpose
    cout<<"Enter Text";
    // To take Input Text 
    cin.getline(arr,100); // getline(var,max_length)
    ofstream myfile("sample.txt"); // myfile is obj of ofstream class
    // arr ---> myfile
    myfile << arr;
    myfile.close(); // File is closed
    cout<<"File Written Succesfully";

*/
// Reading a File

    // Declaring var
    char arr1[100];
    // Declaring object obj of ifstream class
    ifstream obj("sample.txt");
    
    // Checking whether file is open
    if (!obj.is_open()){ // !is_open() - false
        cout<<"Error";
        return 1;
    }
    obj.get("sample.txt");
    // Looping through each line of file - sample.txt
/*    
    while (obj.getline(arr1,100))
        cout<<arr1<<endl;
*/
    obj.close();
    cout<<arr1;
    return 0;
}

// Functions
// 1. open(filename) - used to open file
// 2. get(file) - used to fetch the character of the file