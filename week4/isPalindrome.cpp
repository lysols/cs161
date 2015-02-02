/***********************************
 * * Name: Alex Traut
 * * Date: 1/31/15
 * * Description: Program that determines if a string is a palindrome
************************************/

#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string userInput);

int main() {

    string userText;
    bool palindromeCheck;

    // Accepts input, requires words to have no whitespace
    cout << "Please supply a word, I will see if it's a palindrome. \n";
    cin >> userText;

    palindromeCheck = isPalindrome(userText);

    // Output to user depending on return value from function
    if (palindromeCheck == true) {
	cout << "The supplied word, " << userText << ", is a palindrome! \n";
    }
    else {
        cout << "The supplied word, " << userText << ", isn't a palindrome! \n";
    }
}

/***************************************
 * * Description: checks string provided by user against the reverse of that                      string. returns false if the string and its reverse aren't the
 		  same. 
 * * Parameters: requires string input, no whitespace
****************************************/
bool isPalindrome(string userInput) {
	
    for (int i = 0; i < userInput.length(); i++) {
	if (userInput.at(i) != userInput.at(userInput.length() - 1)) {
	    return false;
	}    
	else {
	        return true;
	     }
	}
} 
