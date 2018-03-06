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

//This program completes goal 1, 2;
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ofstream output;
    //create a file
    output.open("scores.txt");//!!
    //Caution: if a file exists, its contents will be destroyed without warning!
    //write two lines
    output<<"John "<<"J "<<"Smith "<<90<<endl;
    output<<"Eric "<<"K "<<"Jones "<<87<<endl;
    //The following line is essential, without which the data may
    //not be saved properly in the file
    output.close();
    cout<<"Output Done"<<endl;

    ifstream input("scores.txt");
    //input.open() can be replaced by constructor
    if(input.fail()){
        cout<<"File does not exist!"<<endl;
        cout<<"exit program"<<endl;
        return 0;
    } 
    string firstName;
    char mi;
    string lastName;
    int score;
    //read the information in the first line
    input>>firstName>>mi>>lastName>>score;
    cout<<firstName<<" "<<mi<<" "<<lastName<<" "<<score<<endl;
    //read the information in the second line
    input>>firstName>>mi>>lastName>>score;
    cout<<firstName<<" "<<mi<<" "<<lastName<<" "<<score<<endl;
    input.close();
    cout<<"Input Done"<<endl;
    return 0;
}