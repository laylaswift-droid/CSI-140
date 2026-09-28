/*Author: Layla Swift
Class: CSI-140-01/02
Assignment: Discussion Activity Module 06 File I/O Reading and Writing
Date Assigned: 09.28.2026
Due Date: 10.01.2026 11:59 PM
Description: This program reads four float numbers from a file and then 
outputs them to the console and a new file with formatting. It also calculates 
the total sum of the numbers and outputs it to both the console and the new file.
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
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	//Open the file for reading
	const string filename = "lab4.txt";
	const string filename2 = "lab4Report.txt";
	ifstream fin;
	fin.open(filename);

	//Variable declaration
	float num1, num2, num3, num4;
	string dashes;

	//Read the numbers from the file
	fin >> num1 >> num2 >> num3 >> num4;

	//Output the numbers to the console with formatting
	cout << fixed << setprecision(2);
	cout << right << setw(10) << num1 << endl;
	cout << right << setw(10) << num2 << endl;
	cout << right << setw(10) << num3 << endl;
	cout << right << setw(10) << num4 << endl;

	//Decorative dashes
	dashes.append(6, '-');	
	cout << right << setw(10) << dashes << endl;

	//Calculation for total sum
	float total = num1 + num2 + num3 + num4;
	cout << right << setw(10) << total << endl;

	//Close the input file
	fin.close();

	//Open the file for writing
	ofstream fout;
	fout.open(filename2, ios::app);

	//Output the numbers to the file with formatting
	fout << fixed << setprecision(2);
	fout << right << setw(10) << num1 << endl;
	fout << right << setw(10) << num2 << endl;
	fout << right << setw(10) << num3 << endl;
	fout << right << setw(10) << num4 << endl;
	fout << right << setw(10) << dashes << endl;
	fout << right << setw(10) << total << endl;

	//Close the output file
	fout.flush();
	fout.close();
	return 0;	

}

