/*Author: Layla Swift
Class: CSI-140-01/02
Assignment: Module 04-Activity-1-String-Input-Math Functions-Random Number
Date Assigned: 09.14.26
Due Date: 09.17.26 before class
Description: This code will ask for some imput from a user and then print the
given information by decorating via math functions and a random number generator.

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
#include <ctime> // For time()
#include <cstdlib> // For srand() and rand()
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;


int main()

{
	//Initialize random number generator
	srand(time(0));

	//Variables declared
	string fullName;
	string city;
	string state;
	string dashes;
	string address = city + state;
	int negNum;
	int randNumber = rand();
	int uniqueNum1;
	int uniqueNum2;

	//Decorative dashes
	dashes.append(33, '-');
	cout << dashes << endl;

	//Inputs required from user
	cout << "Please enter the following data " << endl;
	cout << setw(33) << right << "Your full name: ";
	getline(cin, fullName);
	cout << setw(33) << right << "City and state you live: ";
	getline(cin, address);
	cout << setw(33) << right << "Enter a negative number: ";
	cin >> negNum;
	cin.ignore(); //added to allow for an answer to be input
	cout << "\n"; //I looked this up to find a way to add a space 

	//Calculations for outputs
	int absNum = abs(negNum);
	float squareNum = sqrt(absNum);
	int roundNum = round(squareNum);

	//Decorative dashes
	cout << dashes << endl;

	cout << "YOUR REPORT" << endl;

	//Decorative dashes
	cout << dashes << endl;

	//Output results
	cout << setprecision(2) << fixed;
	cout << setw(5) << left << "Hello " << fullName << endl;
	cout << left << "You live in " << address << endl;
	cout << "Absolute value of the number you entered : " << absNum << endl;
	cout << setw(43) << right << "Square root of that number : " << squareNum << endl;
	cout << setw(43) << right << "Rounding this to nearest integer : " << roundNum << endl;

	//For randomizing the output numbers
	uniqueNum1 = (rand() % (absNum - roundNum + 1)) + roundNum;
	uniqueNum2 = (rand() % (absNum - roundNum + 1)) + roundNum;
	cout << "Two random numbers between " << roundNum << " and " << absNum << " are " << uniqueNum1 << " and " << uniqueNum2 << endl;

	//Decorative dashes
	cout << dashes << endl;

	cout << "END OF REPORT";

}