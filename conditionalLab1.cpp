/*********************************************************************************************************************\
 * @Author: Rich Zwolinski
 * @Project: One way and two way conditionals
 *
 * Description:
 * This program will validate user input using the given validation function and then perform several operations.
 * The use of one-way and two-way conditionals will dictate output and whether the program can proceed.
 * 
 * You, the student, must complete all the conditions and several other arithmetic statements.
 * There are multiple conditions to write and the curly bracesd { and } to be structured.
 * 
 * Usage:
 * Enter two integer values and allow the program to run.
\*********************************************************************************************************************/

#include <iostream>
using namespace std;

// Function to safely read an integer
// Will not leave until an integer is entered
int getValidatedInteger(const string& prompt) {
    int value;
    while (true) {
        cout << prompt;
        cin >> value;

        // Check for bad cin
        if () {
            // Clear error flag
            
            // Discard invalid input
            
            cout << "Invalid input. Please enter an integer.\n";
        }
        else {
            return value;
        }
    }
}

int main() {
    int num1 = getValidatedInteger("Enter the first integer: ");
    int num2 = getValidatedInteger("Enter the second integer: ");
    int sum;
    int diff;
    int product;
    int quotient;
    int remainder;
    
    // One-way conditional checking if the sum is more than 100
    
        cout << "The sum is greater than 100.\n";
    

    // Two-way conditional determining the larger of the two numbers
    // First number is larger
        cout << "The first number is greater than the second.\n";

        // The other option -- notice the wording
        cout << "The first number is not greater than the second.\n";


    // Display other results
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << diff << endl;
    cout << "Product: " << product << endl;

     // Division and modulus with strict divisibility check
    // If the 2nd number is 0, do not proceed but do not exit the program
    

    // Branched Condition
    
    
        // Nest the conditional to determine divisibility
        // Determine if num1 is evenly divisible by num2 and display
        
            cout << "Strictly divisible.\n";
            cout << "Quotient: " << quotient << endl;

        
            // Display the quotient with a decimal - you will need to recalculate it
            cout << "Not strictly divisible. Quotient: ";

            // Display the quotient and remainder in integer form.
            cout << "Or, " << quotient << " with remainder: " << remainder << endl;
        



    return 0;
}
