/**************************************
 * * Name: Alex Traut
 * * Date: 1/25/15
 * * Description: Sum between lower and upper bound inputs
***************************************/

#include <iostream>
using namespace std;

int main() {

    int firstNum, secondNum, runningTotal;

    // Ask and store input
    cout << "Please provide the first integer: \n";
    cin >> firstNum;
    cout << "Please provide the second integer: \n";
    cin >> secondNum;

    // Conditionals to determine lower&upper bounds
    if (firstNum > secondNum) {
        runningTotal = secondNum;

        for (int i = secondNum + 1; i <= firstNum; i++) {
           runningTotal += i;
        }
        cout << "The total is: " << runningTotal << "\n";
    }
   
    else if (secondNum > firstNum) {
        runningTotal = firstNum;

        for (int i = firstNum + 1; i <= secondNum; i++) {
           runningTotal += i;
        }
        cout << "The total is: " << runningTotal << "\n";
    }  

}

