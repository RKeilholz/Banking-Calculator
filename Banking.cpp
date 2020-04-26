#include <iostream>
#include <iomanip>
using namespace std;



void PrintReportOne(); //move to header file
void PrintReportTwo(); //move to header file

/*
Function: 	PrintMenu //move to functions.cpp
Description: 	prints out the initial menu to user
Return:		None
*/
void printMenu(){
	cout << "*************************************************" << endl;
	cout << "************** Data Input ***********************" << endl;
	cout << "Initial Investment Amount: " << endl;
	cout << "Monthly Deposit: " << endl;
	cout << "Annual Interest: " << endl;
	cout << "Number of years: " << endl;
}

void PrintReportOne(double initialInvestmentAmount, double annualInterest, int numberOfYears) {

	double Amount = initialInvestmentAmount;
	double interestperMonth = (annualInterest/100)/12;
	double interest;
	double interestEarned;
	int spaces;

	cout << fixed << setprecision(2);
		cout << "    Balance and Interest Without Additional Monthly Deposits    " << endl;
		cout << "================================================================" << endl;
		cout << "  Year\tYear End Balance\tYear End Earned Interest" << endl;
	
	for ( int x = 1; x <= numberOfYears; x++ ) {
		for ( int y = 0; y < 12; y++ ) {
			interest = amount * interestperMonth;
			interestEarned = interestEarned + interest;
			amount = amount + interest;
		}

		cout << "  " << x << "\t$";
		if ( amount >= 10000000) {
			cout << amount << "\t\t$"v << interestEarned << endl;
		} else {
			cout << amount << "\t\t\t$" << interestEarned << endl;
		}
		interest
		
	}
}

void PrintReportTwo(double initialInvestmentAmount, double monthlyDeposit, int annualInterest, int numberOfYears) {

	
}

int main() {

	double initialInvestmentAmount;
	double monthlyDeposit;
	int annualInterest;
	int numberOfYears;

	printMenu();
	
	cin >> initialInvestmentAmount >> monthlyDeposit >> annualInterest >> numberOfYears;

	//enter keytracker to continue

	PrintReportOne(initialInvestmentAmount, annualInterest, numberOfYears);


	return 0;
}