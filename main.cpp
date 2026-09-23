#include <iostream>
#include <string>
#include <iomanip>
#include <chrono>
#include <thread>
#include <cmath>
#include <ctime>
using namespace std;

// Define some general constants
const int WIDTH_INPUT_LABELS = 33;
const int WIDTH_OUTPUT_LABELS = 43;
const int PRECISION = 2;
// And I'm using this initialization because I Googled how to repeat
// characters a few months ago for a different project
const string DASHES(32, '-');

// Googled how to print colored text
// Hopefully it works on Windows
const char RESET[] = "\033[0m";
const char RED[] = "\033[31m";
const char GREEN[] = "\033[32m";
const char BLUE[] = "\033[34m";
const char CYAN[] = "\033[36m";

int main()
{
    // Initialize the random seed
    srand(time(0));

    // This probably doesn't need to be here, but, it is within
    // the code block entitled "An expected sample run of the code" so...
    cout << RED << "YOUR INPUT" << endl;
    cout << BLUE << DASHES << endl;

    // Declare variables for user input
    string fullName;
    string cityAndState;
    float negativeNumber;

    // Get input from the user
    cout << "Please enter the following data" << endl;
    cout << BLUE << setw(WIDTH_INPUT_LABELS) << right << "Your full name: " << RED;
    getline(cin, fullName);
    cout << BLUE << setw(WIDTH_INPUT_LABELS) << right << "City and state you live: " << RED;
    getline(cin, cityAndState);
    cout << BLUE << setw(WIDTH_INPUT_LABELS) << right << "Enter a negative number: " << RED;
    cin >> negativeNumber;

    // Make sure the user knows what a negative number is
    if (negativeNumber >= 0)
    {
        // Oh good heavens some otherwise magic numbers
        const int DELAY_CASUAL = 2000;
        const int DELAY_PANIC = 500;
        // Found flush from Googling how to print singular characters and still update the terminal
        cout << GREEN << "Bro..." << std::flush;
        this_thread::sleep_for(chrono::milliseconds(DELAY_CASUAL));
        cout << " Like," << std::flush;
        this_thread::sleep_for(chrono::milliseconds(DELAY_CASUAL));
        cout << "\rDeleting system32 " << flush; // Not actually lol
        while (true)
        {
            this_thread::sleep_for(chrono::milliseconds(DELAY_PANIC));
            cout << '.' << flush;
        }
    }

    // Print out the full report
    cout << BLUE << DASHES << endl;
    cout << "YOUR REPORT" << endl;
    cout << DASHES << endl;

    // Report on the user's information
    cout << "Hello " << fullName << endl;
    cout << "You live in " << cityAndState << endl;

    // Report on the number the user provided
    float positiveNumber = abs(negativeNumber);
    const int RANDOM_MAX = round(positiveNumber); // Save the current value for later, assumed to be rounded
    cout << BLUE << setw(WIDTH_OUTPUT_LABELS) << right << "Absolute value of the number you entered : ";
    cout << GREEN << positiveNumber << endl;

    positiveNumber = sqrt(positiveNumber);
    positiveNumber = floor(positiveNumber * pow(10, PRECISION)) / pow(10, PRECISION); // Example rounds down??
    cout << BLUE << setw(WIDTH_OUTPUT_LABELS) << right << "Square root of that number : ";
    cout << BLUE << setprecision(PRECISION) << fixed << positiveNumber << endl;

    positiveNumber = round(positiveNumber);
    const int RANDOM_MIN = positiveNumber; // Save the current value for later
    cout << BLUE << setw(WIDTH_OUTPUT_LABELS) << right << "Rounding this to nearest integer : ";
    cout << CYAN << setprecision(0) << positiveNumber << endl;

    // Append a description of two random numbers to the report
    cout << BLUE << "Two random numbers between " << CYAN << RANDOM_MIN;
    cout << BLUE << " and " << GREEN << RANDOM_MAX << BLUE << " are ";
    cout << RED << rand() % (RANDOM_MAX - RANDOM_MIN + 1) + RANDOM_MIN;
    cout << BLUE << " and ";
    cout << RED << rand() % (RANDOM_MAX - RANDOM_MIN + 1) + RANDOM_MIN << endl;

    // Print out the end marker, including the evil extra dash
    cout << BLUE << DASHES << '-' << endl;
    cout << "END OF REPORT" << endl;
}