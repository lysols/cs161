/***************************************
 * * Name: Alex Traut
 * * Date: 1/31/15
 * * Description: This program sorts values into ascending order
***************************************/

#include <iostream>
using namespace std;

void numSorter(int &num1, int &num2, int &num3);

int main() {

    int userNum1, userNum2, userNum3;

    // Prompt user for input
    cout << "I will sort your numbers in ascending order. \n";
    cout << "Please provide the first number. \n";
    cin >> userNum1;
    cout << "Please provide the second number. \n";
    cin >> userNum2;
    cout << "Please provide the third number. \n";
    cin >> userNum3;  

    cout << "original order: \n";
    cout << userNum1 << "\n" << userNum2 << "\n" << userNum3 << "\n";

    // Apply function to user input and reprint sorted
    numSorter(userNum1, userNum2, userNum3);
    cout << "sorted order: \n";
    cout << userNum1 << "\n" << userNum2 << "\n" << userNum3 << "\n";

    return 0;
}

/**************************************************
 * * Description: takes 3 arguments and sorts arguments into ascending order
 		  returning the values of the 3 inputs by reference
 * * Parameters: requires 3 integers, handles arguments by reference
**************************************************/

void numSorter(int &num1, int &num2, int &num3) {
    // Makes use of the transitive property of inequalities
    if (num1 > num2) {
	int temp = num1;
	num1 = num2;
	num2 = temp;
    }
    if (num1 > num3) {
        int temp = num1;
        num1 = num3;
        num3 = temp;
    }
    if (num2 > num3) {
        int temp = num2;
        num2 = num3;
        num3 = temp;
    }
} 
