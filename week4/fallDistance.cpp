/**************************************
 * * Name: Alex Traut
 * * Date: 1/31/15
 * * Description: This program calculates the distance an object falls
****************************************/

#include <iostream>
#include <iomanip>
using namespace std;

double distanceCalc(double timeInput); 
const double gravConst = 9.8; // Global variable incase gravity changes

int main() {
    
    double timePassed, distanceFallen;

    cout << "How long has the object been falling? \n";
    cin >> timePassed;
    
    // Call function and print out its return
    distanceFallen = distanceCalc(timePassed);
    cout << "The object has fallen " << distanceFallen << fixed
         << setprecision(2) << " meters. \n";

    return 0;
}

/***********************************************
 * * Description: returns distance based on a constant and user input as a 
 		  double.
 * * Parameters: requires a double
************************************************/
double distanceCalc(double timeInput) {

    return .5 * gravConst * (timeInput * timeInput);
}  
