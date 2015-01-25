/*************************************
 * * Name: Alex Traut
 * * Date: 1/25/15
 * * Description: A program to create a random number and ask user to guess it.
***************************************/

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {

    int userNum, randomNum, numAttempts;
    unsigned seed;

    // Set the seed
    seed = time(0);
    srand(seed);

    // Generate the number, 1-100 inclusive
    randomNum = rand() % 100 + 1;
    userNum = 0;
    numAttempts = 0;
    cout << "Guess the number between 1 and 100. \n";

    // Take the users number, prompt until correct
    while (userNum != randomNum) {
        cin >> userNum;
	numAttempts++;
        if (userNum > randomNum) {
            cout << "The number is less than your input. \n";
            cout << "Please try again. \n";
        }
        else if (userNum < randomNum) {
            cout << "The number is greater than your input. \n";
	    cout << "Please try again. \n";
        }
    }
    cout << "You've found the random number. It was " << randomNum << ".\n";
    cout << "You took " << numAttempts << " attempts.\n";
}
