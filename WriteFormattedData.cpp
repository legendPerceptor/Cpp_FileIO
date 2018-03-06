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
//This program completes goal 5;

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main(){
    ofstream output("formattedscores.txt");
    //write two lines
    output<< setw(6)<<"John"<<setw(2)<<"T"<<setw(6)<<"Smith"<<" "<<setw(4)<<90<<endl;
    output<< setw(6)<<"Rric"<<setw(2)<<"K"<<setw(6)<<"Jones"<<" "<<setw(4)<<87<<endl;
    output.close();
    cout<<"Done"<<endl;

    return 0;
}