/*******************************************
 * * Name: Alex Traut
 * * Date: 1/25/15
 * * Description: Program to sort high and low number from list
**********************************************/

#include <iostream>
using namespace std;

int main() {

    double totalNumbers, userNumber, highNum, lowNum;

    cout << "How many numbers would you like to enter? \n";
    cin >> totalNumbers;
    cout << "Please provide a number. \n";

    // Start looping for user inputted number of times
    for (int i = 0; i < totalNumbers; i++) {
        cin >> userNumber;
        cout << "Please provide another number." << endl;
        if (i == 0) {     // Initializing baseline for comparison
	    highNum = userNumber;
	    lowNum = userNumber;
        }
        else if (userNumber > highNum) {
            highNum = userNumber;
        }
        else if (userNumber < lowNum) {
            lowNum = userNumber;
        }
    }
    cout << "Lowest Number: " << lowNum << endl;
    cout << "Highest Number: " << highNum << endl;

}
