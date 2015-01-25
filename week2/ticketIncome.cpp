/***************************************
 * * Author: Alex Traut
 * * Date: 1/18/15
 * * Description: Display income from ticket sales
***************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double NumClassA, NumClassB, NumClassC,
           totalIncome;

    // Prompt user for tickets sold
    cout << "How many Class A seats sold? \n";
    cin >> NumClassA;
    cout << "How many Class B seats sold? \n";
    cin >> NumClassB;
    cout << "How many Class C seats sold? \n";
    cin >> NumClassC;

    // Calculate income
    cout << fixed << setprecision(2);
    totalIncome = (NumClassA * 15) + (NumClassB * 12) + (NumClassC * 9);

    cout << "Total Income: $" << totalIncome << "\n";
  
}
