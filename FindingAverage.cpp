// Author: Layla-Swift
// Class : CSI - 140 - 01/02
// Assignment : Lab 1 - Finding_Average
// Date Assigned : 09/03/26
// Due Date : Due - 09/12/26 and 11:59 pm
// Description :
// This program will sum five numbers and then calculate the average. The output will show each of the five numbers and then the average up to one decimal point.
// Certification of Authenticity :
// I certify that this is entirely my own work, except where I have given
// fully - documented references to the work of others.I understand the
// definition and consequences of plagiarism and acknowledge that the assessor
// of this assignment may, for the purpose of assessing this assignment :
//	-Reproduce this assignment and provide a copy to another member of
//	academic staff; and /or
//	-Communicate a copy of this assignment to a plagiarism checking
//	service(which may then retain a copy of this assignment on its
//		database for the purpose of future plagiarism checking)

#include <iostream>
using namespace std;

int main()

{
	int quiz1 = 55;
	int quiz2 = 87;
	int quiz3 = 92;
	int quiz4 = 63;
	int quiz5 = 97;

	float average = (quiz1 + quiz2 + quiz3 + quiz4 + quiz5) / 5.00;

	cout << "Quiz 1: " << quiz1 << endl;
	cout << "Quiz 2: " << quiz2 << endl;
	cout << "Quiz 3: " << quiz3 << endl;
	cout << "Quiz 4: " << quiz4 << endl;
	cout << "Quiz 5: " << quiz5 << endl;
	cout << "Avg   : " << average << endl;

}