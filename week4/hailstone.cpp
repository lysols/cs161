/********************************************
 * * Name: Alex Traut
 * * Date: 2/1/15
 * * Description: Program that takes a user integer. applies a hailstone
 * *		  sequence to it, and prints the # steps needed to complete it.
*********************************************/

#include <iostream>
using namespace std;

int hailstoneSeq(int userInt);

int main() {

    int userNum, stepsTaken;
    
    cout << "Please input an integer for the Hailstone Sequence. \n";
    cin >> userNum;

    // Perform the hailstone sequence and store its return value
    stepsTaken = hailstoneSeq(userNum);
    cout << "The sequence took " << stepsTaken << " steps.\n";
}

/******************************************
 * * Description: takes user input as an int and returns the steps needed to get                  the input down to 1 through a hailstone process 
 		  (divide by 2 if even, multiply by 3 and add 1 if odd)
 * * Parameters: requires a non-negative integer
*******************************************/
int hailstoneSeq(int userInt) {
    int numSteps = 0;

    while (userInt != 1) { // Stop looping when we reach 1
	if (userInt % 2 == 0) {
	    userInt = (userInt / 2);
	    numSteps++;
	}
	else {
	    userInt = (userInt * 3 + 1);
	    numSteps++;
	}
    }
    return numSteps;
}
