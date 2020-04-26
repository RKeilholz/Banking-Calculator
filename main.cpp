#include "AirgeadBanking.h"


int main() {

	double initialInvestmentAmount;
	double monthlyDeposit;
	double annualInterest;
	int numberOfYears;

	printMenu();
	
	//read in user data- edit for exception handling (try/catch)
	cin >> initialInvestmentAmount >> monthlyDeposit >> annualInterest >> numberOfYears;

	//enter keytracker to continue

	printReportOne(initialInvestmentAmount, annualInterest, numberOfYears);
	printReportTwo(initialInvestmentAmount, monthlyDeposit, annualInterest, numberOfYears);
	

	return 0;
}