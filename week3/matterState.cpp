/*****************************
 * * Name: Alex Traut
 * * Date: 1/25/15
 * * Description: Program to determine state of matter
*****************************/

#include <iostream>
using namespace std;

int main() {

    int tempInput;

    // Take user input
    cout << "Please enter the temperature:\n";
    cin >> tempInput;
    cout << "The substances can be found in the given states: \n";

    // Determine matter states
    if ((tempInput > -173) && (tempInput < 172)) {
        cout << "    ethyl alcohol = liquid\n";
    }
    else if (tempInput <= -173) {
        cout << "    ethyl alcohol = solid\n";
    }
    else {
        cout << "    ethyl alcohol = gas\n";
    }

    if ((tempInput > -38) && (tempInput < 676)) {
        cout << "    mercury = liquid\n";
    }
    else if (tempInput <= -38) {
        cout << "    mercury = solid\n";
    }
    else {
        cout << "    mercury = gas\n";
    }

    if ((tempInput > -362) && (tempInput < -306)) {
        cout << "    oxygen = liquid\n";
    }
    else if (tempInput <= -362) {
        cout << "    oxygen = solid\n";
    }
    else {
        cout << "    oxygen = gas\n";
    }

    if ((tempInput > 32) && (tempInput < 212)) {
        cout << "    water = liquid\n";
    }
    else if (tempInput <= 32) {
        cout << "    water = solid\n";
    }
    else {
        cout << "    water = gas\n";
    }

}
