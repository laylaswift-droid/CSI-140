/*Author: Layla Swift
Class: CSI-140-01/02
Assignment: Module 05-Lab 1-Payroll Calculator
Date Assigned: 09.24.25
Due Date: 09.29.26 at 11:59pm
Description: This program will read the number of hours worked in a week
and the number of dependents as input, and will then output the worker's
total pay, eacch withholding amount, and the net take-home pay for the
week.

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
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	//Variables used
	const float SOC_SEC_TAX = .06;
	const float FED_INCOME_TAX = .14;
	const float STATE_INCOME_TAX = .05;
	const float UNION_DUES = 10.00;
	const float PAY_RATE = 16.78;
	const float OVERTIME_RATE = 1.5 * PAY_RATE;
	const int REGULAR_HOURS = 40;
	string dashes;
	float grossPay;
	float dependents = 0;
	int hours = 0;

	//Decorative dashes for output
	dashes.append(40, '-');
	cout << dashes << endl;

	//Inputs for employee
	cout << setw(40) << right << "Number of Hours Worked: ";
	cin >> hours;
	cout << setw(40) << right << "Number of Dependents: ";
	cin >> dependents;

	//Decorative dashes for output
	cout << dashes << endl;
	
	//Conditions for pay and dependents
	if (hours <= REGULAR_HOURS)
		grossPay = hours * PAY_RATE;
	else 
		grossPay = (REGULAR_HOURS * PAY_RATE) + ((hours - REGULAR_HOURS) * 
			OVERTIME_RATE);

	if (dependents >= 3)
		dependents = 35.00;
	else
		dependents = 0.00;

	//Calculations for pay and deductions
	float socSecTax = grossPay * SOC_SEC_TAX;
	float fedIncomeTax = grossPay * FED_INCOME_TAX;
	float stateIncomeTax = grossPay * STATE_INCOME_TAX;
	float totalDeductions = socSecTax + fedIncomeTax + stateIncomeTax + 
		UNION_DUES + dependents;
	float netPay = grossPay - totalDeductions;

	//Output for employee
	cout << fixed << setprecision(2);
	cout << setw(40) << right << "Gross Pay: " << "$" << 
		setw(9) << right << grossPay << endl;
	cout << setw(40) << right << "Social Security Tax Deduction: " << "$" << 
		setw(9) << right << socSecTax << endl;
	cout << setw(40) << right << "Federal Income Tax Deduction: " << "$" << 
		setw(9) << right << fedIncomeTax << endl;
	cout << setw(40) << right << "State Income Tax Deduction: " << "$" << 
		setw(9) << right << stateIncomeTax << endl;
	cout << setw(40) << right << "Union Dues Deduction: " << "$" << 
		setw(9) << right << UNION_DUES << endl;
	cout << setw(40) << right << "Dependents Dues Deduction: " << "$" << 
		setw(9) << right << dependents << endl;
	cout << setw(40) << right << "Net Pay: " << "$" << 
		setw(9) << right << netPay << endl;
	
	//Decorative dashes  
	cout << dashes << endl;

	cout << "Press any key to continue . . .";

}
