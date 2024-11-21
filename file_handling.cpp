#include <iostream>
#include <fstream> // Input Output File Stream 

using namespace std;

int main(){
   
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
    // Looping through each line of file - sample.txt
    
    while (obj.getline(arr1,100))
        cout<<arr1<<endl;

    obj.close();
    cout<<arr1;
    return 0;
}

// Functions

// 1. open(filename) - used to open file
// 2. get(var) - used to fetch the character of the var until space , Athar va --> Athar
// 3. getline(var,max_length) - used to fetch line from variable
// 4. seekp() - used to go to specific location in file
// 5. tellp() - used to get the current location of the put pointer in file