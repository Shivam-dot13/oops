#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    fstream file;
    try{
        file.open("test.txt", ios::in | ios::out);
        if (!file.is_open()){
            throw runtime_error("File not found");
        }
        string line;
        getline(file, line);
        cout << "The first line of the file is: " << line << endl;
        file << "\nThis is a new line added by the program." << endl;
        file.close();
    }
    catch (const exception &e){
        cerr << "An error occurred: " << e.what() << endl;
    }
    return 0;
}