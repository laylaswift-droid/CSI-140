/*Author: Layla Swift
Class: CSI-140-01/02
Assignment: Falling Distance Function
Date Assigned: 10.26.2026
Due Date: 10.29.2026 11:59pm
Description: Write a function that demonstrates the function by calling
it in a loop that passes the values 1 through 10 as arguments and displays 
the return value

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
#include <iomanip>

using namespace std;

//Variables declared
const int TIME_START = 1;
const int TIME_END = 10;
const float GRAVITY = 9.8;
const int WIDTH = 3;
const int WIDTH_OUTPUT = 13;
const float EXPONENT = 2.0;

//Function call
float getFallingDistance(int fallingTime);

int main() 
{
    //Formatting
    cout << fixed << setprecision(2);

    //Fixed loop
    for (int i = TIME_START; i <= TIME_END; i++)
    {
        
        cout << right << setw(WIDTH) << i << ": "
            << right << setw(WIDTH_OUTPUT) << getFallingDistance(i) << endl;

    }

    cout << "Press any key to continue... ";
    return 0;
}

//Function
float getFallingDistance(int fallingTime)
{

    return (GRAVITY * pow(fallingTime, EXPONENT)) / 2.0;
}
