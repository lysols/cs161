/**************************************
 * * Author: Alex Traut
 * * Date: 1/18/15
 * * Description: Payment calculator using multiple inputs
***************************************/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {

    double interestRateP, interestRate, numPayments, loanAmount,
           monthlyPayment, paidBack, interestPaid;

    // Take user input
    cout << "What is the monthly interest rate? \n";
    cin >> interestRateP;
    cout << "How many payments? \n";
    cin >> numPayments;
    cout << "What is the total loan amount? \n";
    cin >> loanAmount;

    interestRate = interestRateP * .01;

    // Perform calculations for outputs 
    monthlyPayment = (interestRate * pow(1 + interestRate, numPayments))
 		     / (pow(1 + interestRate, numPayments) - 1)
		     * loanAmount; 
    paidBack = monthlyPayment * numPayments;
    interestPaid = paidBack - loanAmount;

    // Output report to user
    cout << fixed << setprecision(2);
    cout << "Loan Amount:          $" << setw(8) << loanAmount << "\n";
    cout << "Monthly Interest Rate: " << setw(8) <<interestRateP << "%" << "\n";
    cout << "Number of Payments:    " << setw(8) << (int)numPayments << "\n";
    cout << "Monthly Payment:      $" << setw(8) << monthlyPayment << "\n";
    cout << "Amount Paid Back:     $" << setw(8) << paidBack << "\n";
    cout << "Interest Paid:        $" << setw(8) << interestPaid << "\n";

}

