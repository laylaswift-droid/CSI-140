/*Author: Layla Swift
Class: CSI-140-01/02
Assignment: Mod 3 Lab 1 Change Calculator
Date Assigned: 09.10.26
Due Date: 09.16.26
Description: This code will process the amount due and provide the minimum number
of bills to make correct change (assuming that there is no change).

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
    //Declared Variables
    int hundreds;
    int hundredRemainder;
    int fifties;
    int fiftyRemainder;
    int twenties;
    int twentyRemainder;
    int tens;
    int tenRemainder;
    int fives;
    int fiveRemainder;
    int ones;
    int oneRemainder;
    int totalAmount;

    const int SPACE_STRING = 14;
    const int SPACE_NUMBER = 21;

    //User input
    cout << "Enter amount: $";
    cin >> totalAmount;

    //Calculations for minimum bills of each denomination
    hundreds = totalAmount / 100;
    hundredRemainder = totalAmount % 100;
    fifties = hundredRemainder / 50;
    fiftyRemainder = hundredRemainder % 50;
    twenties = fiftyRemainder / 20;
    twentyRemainder = fiftyRemainder % 20;
    tens = twentyRemainder / 10;
    tenRemainder = twentyRemainder % 10;
    fives = tenRemainder / 5;
    fiveRemainder = tenRemainder % 5;
    ones = fiveRemainder / 1;
    oneRemainder = fiveRemainder % 1;

    //Outputs
    cout << setw(SPACE_STRING) << right << "$100 Bill(s): ";
    cout << setw(SPACE_NUMBER) << left << hundreds << endl;
    cout << setw(SPACE_STRING) << right << "$50 Bill(s): ";
    cout << setw(SPACE_NUMBER) << left << fifties << endl;
    cout << setw(SPACE_STRING) << right << "$20 Bill(s): ";
    cout << setw(SPACE_NUMBER) << left << twenties << endl;
    cout << setw(SPACE_STRING) << right << "$10 Bill(s): ";
    cout << setw(SPACE_NUMBER) << left << tens << endl;
    cout << setw(SPACE_STRING) << right << "$5 Bill(s): ";
    cout << setw(SPACE_NUMBER) << left << fives << endl;
    cout << setw(SPACE_STRING) << right << "$1 Bill(s): ";
    cout << setw(SPACE_NUMBER) << left << ones << endl;


}
