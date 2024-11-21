#include <iostream>
#include <fstream>
#include <filesystem> // For filesystem operations
using namespace std;
namespace fs = std::filesystem;

void addExeFilesToGitignore(const string& directoryPath) {
    ofstream gitignore(".gitignore", ios::app); // Open .gitignore in append mode

    if (!gitignore.is_open()) {
        cout << "Error: Could not open .gitignore file." << endl;
        return;
    }

    for (const auto& entry : fs::directory_iterator(directoryPath)) {
        if (entry.is_regular_file()) { // Check if it's a regular file
            string filename = entry.path().filename().string();
            if (filename.size() > 4 && filename.substr(filename.size() - 4) == ".exe") {
                cout << "Adding to .gitignore: " << filename << endl;
                gitignore << filename << endl; // Append to .gitignore
            }
        }
    }

    gitignore.close();
    cout << "All .exe files have been added to .gitignore." << endl;
}

int main() {
    string directoryPath = "."; // Current directory

    cout << "Scanning directory for .exe files: " << directoryPath << endl;
    addExeFilesToGitignore(directoryPath);

    return 0;
}
