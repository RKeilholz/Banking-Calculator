#include "AirgeadBanking.h"

void printReportOne(double& t_initialInvestmentAmount, double& t_annualInterest, int& t_numberOfYears) {
	double amount = t_initialInvestmentAmount;            //tracks account balance
	double interestperMonth = (t_annualInterest/100)/12;  //tracks compound interest per month
	double interest;                                    //tracks interest earned each month
	double interestEarned;                              //tracks interest earned each year

	cout << fixed << setprecision(2);
		cout << "    Balance and Interest Without Additional Monthly Deposits    " << endl;
		cout << "================================================================" << endl;
		cout << "  Year\t\tYear End Balance\tYear End Earned Interest" << endl;
	
	for ( int x = 1; x <= t_numberOfYears; x++ ) {//runs calculation and prints info for each year requested
		for ( int y = 0; y < 12; y++ ) {//run month by month interest build- incrementing account balance & interest earned for year
			interest = amount * interestperMonth;
			interestEarned = interestEarned + interest;
			amount = amount + interest;
		}

		cout << "  " << x << "\t\t$";

		//formatt for spacing due to size of amount(handles 0 - 999,999,999,999.99)
		if ( amount >= 100000000000) {
	        cout << amount << "\t$" << interestEarned << endl;
		} else if ( amount >= 1000) {
			cout << amount << "\t\t$" << interestEarned << endl;
		} else {
			cout << amount << "\t\t\t$" << interestEarned << endl;
		}
		
        interestEarned = 0;
		
	}
	    cout << endl;
}

void printReportTwo(double& t_initialInvestmentAmount, double& t_monthlyDeposit, double& t_annualInterest, int& t_numberOfYears) {
    
    double amount = t_initialInvestmentAmount; //tracks account balance
	double interestperMonth = (t_annualInterest/100)/12; //compounded interest for each month
	double interest; //used to calculate how much interest is earned for any given month
	double interestEarned; //holds total interest earned for each year

	cout << fixed << setprecision(2);
		cout << "    Balance and Interest With Additional Monthly Deposits    " << endl;
		cout << "================================================================" << endl;
		cout << "  Year\t\tYear End Balance\tYear End Earned Interest" << endl;
	
	for ( int x = 1; x <= t_numberOfYears; x++ ) { //runs calculation and prints info for each year requested
		for ( int y = 0; y < 12; y++ ) {
		    //run month by month interest build- incrementing account balance & interest earned for year
            amount = amount + t_monthlyDeposit;
			interest = amount * interestperMonth;
			interestEarned = interestEarned + interest;
			amount = amount + interest;
		}

		cout << "  " << x << "\t\t$";
		
		//formatt for spacing due to size of amount(handles 0 - 999,999,999,999.99)
		if ( amount >= 100000000000) {
	        cout << amount << "\t$" << interestEarned << endl;
		} else if ( amount >= 1000) {
			cout << amount << "\t\t$" << interestEarned << endl;
		} else {
			cout << amount << "\t\t\t$" << interestEarned << endl;
		}
	    interestEarned = 0; //resets Year End Earned Interest for next year	
	}
	
}