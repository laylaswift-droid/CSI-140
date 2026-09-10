/*Author: Layla Swift
Class: CSI-140-01/02
Assignment: Simple Trip Cost Calculator
Date Assigned: 09/07/26
Due Date: 09/10/26 11:59pm
Description: This program will help a user calculate the total cost of a road trip. 
It will require input from user and then calculate total fuel, food, and trip costs.

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
	//Variable list
	int tripDistance;
	int fuelEfficiency;
	float gasPricePerGallon;
	int daysOfTrip;
	int dailyFoodCost;
	float fuelCost;
	float foodCost;
	float totalTripCost;

	//The following statements create placeholders for inputs
	cout << "Enter the distance of the trip in miles: ";
	cin >> tripDistance;

	cout << "Enter the fuel efficiency of the car (miles per gallon): ";
	cin >> fuelEfficiency;

	cout << "Enter the price of gas per gallon: ";
	cin >> gasPricePerGallon;

	cout << "Enter the number of days of the trip: ";
	cin >> daysOfTrip;

	cout << "Enter the average daily food cost: ";
	cin >> dailyFoodCost;
	cout << endl;

	//Calculations for outputs
	fuelCost = (tripDistance / fuelEfficiency) * gasPricePerGallon;

	foodCost = daysOfTrip * dailyFoodCost;

	totalTripCost = fuelCost + foodCost;

	//Output of calculations
	cout << setprecision(2) << fixed;
	cout << setw(26) << left << "Fuel cost for the trip  :$" << setw(9) << right << fuelCost << endl;
	cout << setw(26) << left << "Food cost for the trip  :$" << setw(9) << right << foodCost << endl;
	cout << setw(26) << left << "Total trip cost         :$" << setw(9) << right << totalTripCost << endl;

}
