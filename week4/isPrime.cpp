/*******************************************
 * * Name: Alex Traut
 * * Date: 1/31/15
 * * Description: This program determines if a number is prime or not
********************************************/

#include <iostream>
using namespace std;

bool primeCalc(int userNum);

int main() {

    int userInput, primeResults;

    cout << "Please input a positive integer \n";
    cin >> userInput;

    // Call function with the users input as argument
    primeResults = primeCalc(userInput);

    // Print response based on return value of function
    if (primeResults == true) {
	cout << "The number " << userInput << " is prime! \n";
    } 
    else {
        cout << "The number " << userInput << " is not prime! \n";
    }
    
    return 0;

}

/**********************************************
 * * Description: takes argument as an int and return boolean depending on
                   if argument was prime or not.
 * * Parameters: requires a single int parameter.
**********************************************/
bool primeCalc(int userNum) {   

    if (userNum == 2) { 
	return true;
    }
    else if (userNum % 2 == 0 || userNum == 1) { 
	// Not prime if evenly divisible by 2
	return false;
    }
    else {
	for (int i = 3; i < (userNum - 1); i++) { // Loop checks divisibility
	    if (userNum % i == 0) {
		// If evenly divisible by any number, then not prime
		return false;
	    }
	}
	return true;
    }

}
