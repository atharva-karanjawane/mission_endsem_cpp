#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // Open a sample file for reading
    ifstream file("sample.txt");

    // Check if the file opened successfully
    if (file.fail()) {
        cout << "Error: Could not open the file!" << endl;
        return 1;
    }

    string line;

    // Read the file line by line until the end of the file
    // !file.eof() --> false
    while (!file.eof()) {
        getline(file, line);
        if (!line.empty()) { // Avoid printing empty lines
            cout << line << endl;
        }
    }

    // Close the file
    file.close();
    return 0;
}

// bad(): Returns true if a serious error occurs in the stream, such as hardware failure or stream corruption. This indicates the stream is no longer usable.
// good(): Returns true if the stream is in a good state and ready for operations. It checks that no errors have occurred (fail(), eof(), or bad() are all false).
