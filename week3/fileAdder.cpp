/*************************************
 * * Name: Alex Traut
 * * Date: 1/25/15
 * * Description: Program that reads a file and writes to another
**************************************/

#include <iostream>
#include <fstream>

using namespace std;

int main() {

    double inputNum, runningTotal;
    ifstream incomingFile;
    ofstream outgoingFile;

    // Open input file
    incomingFile.open("nums.txt");
    
    // Validate file opened
    if (!incomingFile) {
        cout << "Couldn't open file nums.txt. \n";
    } 
    else {
        // Loop numbers in file and sum them
        runningTotal = 0;
        while (incomingFile >> inputNum) {
	    runningTotal += inputNum;
        }
        incomingFile.close();
	
	// Open output file
	outgoingFile.open("sum.txt");

	if (!outgoingFile) {
	    cout << "Couldn't open sum.txt. \n";
	}
	else {
	// Write sum to file 
            outgoingFile << "The sum of the values is " << runningTotal;
	    outgoingFile << ".\n";
	}
	outgoingFile.close();
    }
}
