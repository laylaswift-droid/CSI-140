/*Author: Layla Swift
Class: CSI-140-01/02
Assignment: Functions-Cylinder
Date Assigned: 10.29.2026	
Due Date: 11.04.2026 11:59 PM
Description: This takes a pre-existing program and splits the code into four functions.
It uses prototypes for the above functions and main is the first function in the code. 
The main function contains only variable declarations, function calls, and a return.

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
#include <limits> // for numeric_limits

using namespace std;

// Constants
const int SPACE = 20;
const double PI = 3.14159;

// Function prototypes
void getRadius(double& radius);
void getHeight(double& height);
void computeVolume(double radius, double height, double& volume);
void displayResult(double volume);


// Main function
int main()
{
	// Variable declarations
	double radius, height, volume;
	char choice;

	// Main loop for repeated calculations
	do {

		getRadius(radius);
		getHeight(height);
		computeVolume(radius, height, volume);
		displayResult(volume);

		cout << endl;
		cout << "Calculate another one?\n";
		cout << "Enter [Y] to continue, all other letters terminate: ";
		cin >> choice;
		cout << endl;

	} while (choice == 'Y' || choice == 'y'); // Continue if user enters 'Y' or 'y'

	cout << "Goodbye!\n";

	return 0;
}

// Function definitions
void getRadius(double& radius)
{
	cout << setw(SPACE) << "Enter radius:  ";
	cin >> radius;

	/* Input validation loop in case of invalid input* I grabbed this from the
	Parking Garage program assigned after this. I noticed that if I entered a letter
	instead of a number, the program would run crazy*/
	while (cin.fail()) {
		cout << "Invalid input! Please enter a number: ";

		cin.clear(); 
		cin.ignore(numeric_limits<streamsize>::max(), '\n'); 

		cin >> radius;
	}
}
void getHeight(double& height)
{
	cout << setw(SPACE) << "Enter height:  ";
	cin >> height;

	/* Input validation loop in case of invalid input* I grabbed this from the
	Parking Garage program assigned after this. I noticed that if I entered a letter
	instead of a number, the program would run crazy*/
	while (cin.fail()) {
		cout << "Invalid input! Please enter a number: ";

		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		cin >> height;
	}
}
void computeVolume(double radius, double height, double& volume)
{
	volume = PI * radius * radius * height;
}
void displayResult(double volume)
{
	cout << setw(SPACE) << "Volume:  " << volume << endl;
}