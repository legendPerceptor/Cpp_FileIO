/** This project is about File Input and Output.
 ** Here, we list the goals to be achieved in this project
 * 1)To use ofstream for output and ifstream for input
 * 2)To test whether a file exists
 * 3)To test the end of a file
 * 4)To let the user enter a file name
 * 5)To write data in a desired format
 * 6)To read and write data using getline, get, and put functions
 * 7)To use an fstream object to read and write data
 * 8)To open a file with specified modes
 * 9)To use eof(), fail(), bad() and good() functions to test stream states
 * 10)To understand the difference betwwen text I/O and binary I/O
 * 11)To write and read binary files
 * 12)To use seekp and seekg functions to move the file pointers for random file access
 * 13)To open a file for both input and output to update files
 */
//This program completes part of goal 6;

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    cout << "Enter a source file name: ";
    string inputFilename;
    cin >> inputFilename;

    cout << "Enter a target file name: ";
    string outputFilename;
    cin >> outputFilename;

    //Create input and output streams
    ifstream input(inputFilename.c_str());
    ofstream output(outputFilename.c_str());

    if(input.fail()){
        cout<<inputFilename<<" does not exist"<<endl;
        cout<<"Exit program"<<endl;
        return 0;
    }

    char ch=input.get();
    while(!input.eof()){
        output.put(ch);
        ch=input.get();
    }
    input.close();
    output.close();
    cout<<"\nCopy Done"<<endl;
    return 0;
}