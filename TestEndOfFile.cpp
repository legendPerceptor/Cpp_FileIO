
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

//This program completes goal 3;

#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream input("score.txt");
    if(input.fail()){
        cout<<"File does not exist"<<endl;
        cout<<"Exit Program"<<endl;
        return 0;
    }
    double sum=0;
    double number;
    while(input>>number){
        cout<<number<<" ";
        sum+=number;
    }
    // The following version will add the last number twice
    // while(!input.eof()){
    //     input>>number;
    //     cout<<number<<" ";
    //     sum+=number;
    // }
    input.close();
    cout<<"\nSum is "<<sum<<endl;
    return 0;
}