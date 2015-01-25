/********************************
 * * Author: Alex Traut
 * * Date: 1/18/15
 * * Description: Program to randomly generate numbers within a range
*********************************/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    int upperBound, lowerBound, numOne, numTwo, numThree, numFour, numFive;
    unsigned seed; 

    // Take user input
    cout << "What is the lower bound?\n";
    cin >> lowerBound;
    cout << "What is the upper bound?\n";
    cin >> upperBound;

    // Set the seed
    seed = time(0);
    srand(seed);

    // Calculate the range and determine the number 
    numOne = rand() % (upperBound - lowerBound + 1) + lowerBound;
    numTwo = rand() % (upperBound - lowerBound + 1) + lowerBound;
    numThree = rand() % (upperBound - lowerBound + 1) + lowerBound;
    numFour = rand() % (upperBound - lowerBound + 1) + lowerBound;
    numFive = rand() % (upperBound - lowerBound + 1) + lowerBound;

    // Output the numbers
    cout << numOne << "\n" << numTwo << "\n" << numThree;
    cout << "\n" << numFour << "\n" << numFive << "\n";

}
