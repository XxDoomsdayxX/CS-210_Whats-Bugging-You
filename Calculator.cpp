
/*
 * Calculator.cpp
 *
 *  Date: 1/21/2024
 *  Author: Darrell Walker II
 */

#include <iostream>
using namespace std;

int main() // Use int instead of void for main, and return 0 at the end
{
    char statement[100];
    double op1, op2;    //change int to double to calculate decimals
    char operation;
    char answer = 'Y'; // Use single quotes for char, and fix the initialization

    while (answer == 'Y' || answer == 'y') // Fix the loop condition
    {
        cout << "Enter expression" << endl;
        cin >> op1 >> operation >> op2;    // change order of op2 & op1 too op1 & op2 to ensure correct order of inputs for calculations

        // Remove semicolons after if statements and fix cout and cin operators
        // change if statements to if else statements to check correct conditions & change the conditions from '=' to '==' 
        if (operation == '+')
            cout << op1 << " + " << op2 << " = " << op1 + op2 << endl;
        else if (operation == '-')
            cout << op1 << " - " << op2 << " = " << op1 - op2 << endl;
        else if (operation == '*')
            cout << op1 << " * " << op2 << " = " << op1 * op2 << endl;
        else if (operation == '/')
        {
            // Check for division by zero before performing the operation
            if (op2 != 0)
                cout << op1 << " / " << op2 << " = " << static_cast<double>(op1) / op2 << endl;
            else
                cout << "Error: Cannot divide by zero" << endl;
        }
        else
        {
            // Handle invalid operations
            cout << "Invalid operation" << endl;
        }

        cout << "Do you wish to evaluate another expression? (Y/N): "; // Ask for Y or N
        cin >> answer;

        // Add break statement if the user chooses not to continue
        if (answer != 'Y' && answer != 'y')
        {
            cout << "Program Finished." << endl;
            break;
        }
    }

    return 0; // Return 0 at the end of main
}