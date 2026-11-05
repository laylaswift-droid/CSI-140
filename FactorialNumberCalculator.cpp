/*Author: Layla Swift
Class: CSI-140-01/02
Assignment: Module-07-Lab 4 - Factorial Number Calculator
Date Assigned: 10.08.2026
Due Date: 10.14.2026 11:59pm
Description: This program will accept an integer as input and return the factorial for that number to the user.  Your program must repeat until the user enters -1 as input to terminate the program.

Certification of Authenticity:
I certify that this is entirely my own work, except where I have given
fully-documented references to the work of others. I understand the
definition and consequences of plagiarism and acknowledge that the assessor
of this assignment may, for the purpose of assessing this assignment:
- Reproduce this assignment and provide a copy to another member of
academic staff; and/or
- Communicate a copy of this assignment to a plagiarism checking
service (which may then retain a copy of this assignment on its
database for the purpose of future plagiarism checking)*/


#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	// Variable Declaration. 
	int num = 0;
	int result = 0;

	// Description
	cout << "Compute Factorial. Enter -1 to end." << endl;
	cout << "\n";

	// Loop to calculate factorial until user enters -1
	while (true)
	{
		cout << "Enter a number: ";
		cin >> num;

		// Calculate factorial
		result = 1;
		for (int i = 1; i <= num; i++) 
			result *= i;

		// Display result and check for invalid input
		if (num < 0)
			cout << "Invalid Input!" << endl;
		else
			cout << setw(16) << right << "Result: " << result << endl;
		cout << "\n";

		// Check for termination condition
		if (num == -1)
		{
			cout << "Bye-Bye!" << endl;
			break;
		}	
	}
}






