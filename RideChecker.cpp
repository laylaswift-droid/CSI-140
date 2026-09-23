/*Author: Layla Swift
Class: CSI-140-01/02
Assignment: Amusement Park Ride Checker (if/else)
Date Assigned: 09.21.26
Due Date: 09.24.26 11:59pm
Description: This program will ask for height and assess whether the person 
tall enough to either ride alone, ride with an adult, or not ride.
Program will also ask age in assessment.
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
using namespace std;

int main()
{
    //Variables used
    int height;
    int age;

    //Input required
    cout << "Enter your height in inches: ";
    cin >> height;

    cout << "Enter your age in years: ";
    cin >> age;

    //Outputs based on height and age
    if (height < 48)
    {
        cout << "Sorry, you are too short for the ride.";
    }
    else if (age >= 10 && height >= 48 && height <= 59)
    {
        cout << "You can ride with an adult.";
    }
    else if (age >= 10 && height >= 60)
    {
        cout << "You can ride alone.";
    }
    else
    {
        cout << "You may not ride." << endl;
    }
}


