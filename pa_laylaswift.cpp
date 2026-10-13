
/*Author: Layla Swift
Class: CSI-140-01/02
Assignment: Module-06-Assignment 2A - Stock / Investment - Calculator
Date Assigned: 10.02.2026
Due Date: 10.06.2026 11:59pm
Description: This program will prompt for an investment file, prompt for an output file name, and compute the profit from each stock into that output file.

Certification of Authenticity:
I certify that this is entirely my own work, except where I have given
fully documented references to the work of others. I understand the
definition and consequences of plagiarism and acknowledge that the assessor
of this assignment may, for the purpose of assessing this assignment:
- Reproduce this assignment and provide a copy to another member of
academic staff; and/or
- Communicate a copy of this assignment to a plagiarism checking
service (which may then retain a copy of this assignment on its
database for the purpose of future plagiarism checking)*/

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>


using namespace std;


int main()
{

    // Define the input and output file names
    string input_file = "stock_data.txt";
    string output_file = "investment_results.txt";

    // Prompt the user for the input file name
    cout << "Please enter your input file name: ";
    getline(cin, input_file);

    // Prompt the user for the output file name
    cout << "Please enter your output file name: ";
    getline(cin, output_file);

    // Open the input and output files
    ifstream fin;
    fin.open(input_file);
    ofstream fout;
    fout.open(output_file);

    // Check if the input file was opened successfully
    if (!fin.is_open()) {
        cout << "Error: Could not open input file " << input_file << endl;
        return 1;
    }

    // Check if the output file was opened successfully
    if (!fout.is_open()) {
        cerr << "Error: Could not open output file " << output_file << endl;
        return 1;
    }

    //Variable declarations
    string stockName;
    double buyingCost = 0;
    double buyingCommissionRate = 0;
    double buyingAmt = 0;
    double sellingAmount = 0;
    double sellingCommissionRate = 0;
    double sellingAmt = 0;
    double profitOrLoss = 0;
    double numberOfSharesBought = 0;
    double numberOfSharesSold = 0;
	double totalBuyingCost = 0;
	double totalBuyingCommission = 0;
	double totalSellingAmount = 0;
	double totalSellingCommission = 0;
	double totalProfit = 0;

	// Set the output format for the output file
    fout << setprecision(2) << fixed;
    fout << left << setw(20) << "STOCK"
        << right << setw(15) << "BUYING AMT"
        << right << setw(15) << "BUYING COMM"
        << right << setw(15) << "SELLING AMT"
        << right << setw(15) << "SELLING COMM"
        << right << setw(15) << "PROFIT" << endl;

    /*I looked ahead in the next module(chapter 5) to figure out how to do a while loop
    and the accumulator at the end of the code. A while loop seemed more appropriate than 
    an if loop for this scenario. I hope this is ok.*/ 

    // Read the stock data from the input file and calculate the profit or loss for each stock
     while (getline(fin, stockName)) {
        fin >> buyingAmt >> buyingCommissionRate >> numberOfSharesBought;
        fin >> sellingAmt >> sellingCommissionRate >> numberOfSharesSold;
		fin.ignore();

		
		/*I had a bit of trouble with the calculations for the buying and selling commission rates. 
        My original formula would work for two of the stocks, but not the third, so I had to 
        look up the formula for calculating commission rates and used Google to help me figure out 
        the correct formula. I also had to look up the formula for calculating profit or loss and 
        used Google to help me figure out the correct math. I had all the correct information, 
        but not in the correct order.*/

        // Calculate the buying cost, selling amount, and profit or loss for each stock
		buyingCost = buyingAmt * numberOfSharesBought;
        sellingAmount = sellingAmt * numberOfSharesSold;

		buyingCommissionRate = (buyingCost * buyingCommissionRate) / 100;
		sellingCommissionRate = (sellingAmount * sellingCommissionRate) / 100;

		profitOrLoss = (sellingAmount - sellingCommissionRate) - (buyingCost + buyingCommissionRate);

		// Write the stock data and profit or loss to the output file
        fout << left << setw(20) << stockName
            << right << setw(15) << buyingCost
            << right << setw(15) << buyingCommissionRate
            << right << setw(15) << sellingAmount
            << right << setw(15) << sellingCommissionRate
            << right << setw(15) << profitOrLoss << endl;

        // Calculate the total profit or loss for all stocks
        totalBuyingCost += buyingCost;
        totalBuyingCommission += buyingCommissionRate;
        totalSellingAmount += sellingAmount;
        totalSellingCommission += sellingCommissionRate;
        totalProfit += profitOrLoss;

    }
	 fout << endl;// Add a blank line before the total profit or loss

	 // Write the total profit or loss to the output file. The instructions also only stated to right 
     // justify 15 spaces but everything looked weird, so I adjusted it to look like the output
	 // example included in the instructions. 
	 fout << right << setw(28) << "Total Buying Amount: " << right << setw(15) << totalBuyingCost << endl;
	 fout << right << setw(28) << "Total Buying Commission: " << right << setw(15) << totalBuyingCommission << endl;
	 fout << right << setw(28) << "Total Selling Amount: " << right << setw(15) << totalSellingAmount << endl;
	 fout << right << setw(28) << "Total Selling Commission: " << right << setw(15) << totalSellingCommission << endl;    
	 fout << right << setw(28) << "Grand Profit: " << right << setw(15) << totalProfit << endl;   

	 // Close the input and output files
	 fin.close();
	 fout.close();
	 return 0;
}

