/*Author: Layla Swift
Class: CSI-140-01/02
Assignment: Module 4 Lab 1 Monthly Deposit Amount Calculator
Date Assigned: 09.17.26
Due Date: 09.22.26 11:59pm
Description: This code will require 3 inputs from a user and then calculate 
the amount the user should deposit into savings every month in order to reach a
goal.

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
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

int main()

{
	//Variables used
	const int SPACE_INPUT = 30;
	int amountNeeded;
	float yearInterestRate;
	int savingDuration;
	float monthInterestRate;
	float monthDeposit;
	


	//Inputs required
	cout << setw(SPACE_INPUT) << right << "Enter Amount Needed: " << "$";
	cin >> amountNeeded;
	cout << setw(SPACE_INPUT) << right << "Enter Interest Rate (APR): ";
	cin >> yearInterestRate;
	cout << setw(SPACE_INPUT) << right << "Enter Duration (in months): ";
	cin >> savingDuration;
	

	//Calculations for final output
	cout << fixed << setprecision(2);
	monthInterestRate = (yearInterestRate / 100) / 12;
	//The following calculation was my own creation but I required an example
	// to see how it was formatted. I used our textbook to see where to place 
	// the 'pow' in the expression
	monthDeposit = monthInterestRate * amountNeeded / (pow(monthInterestRate + 1, 
		savingDuration) - 1); 
	
	//Final output
	cout << setw(SPACE_INPUT) << right << "Monthly Deposit Amount: " << "$" 
		<< monthDeposit;
	
	return 0;
}