/************************************
 * * Author: Alex Traut
 * * Date: 1/18/15
 * * Description: A program to convert Celsius to Fahrenheit
*************************************/

#include <iostream>
using namespace std;

int main() {

    double tempC, tempF;

    // Prompt for input in C
    cout << "Please give a temperature in Celsius. \n";
    cin >> tempC;

    // Convert input using formula
    tempF = (9.0/5.0) * tempC + 32.0;
   
    cout << "The temperature in Fahrenheit is " << tempF << " degrees.\n";
 
}
