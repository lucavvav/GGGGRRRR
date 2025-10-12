#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;


int main()
{
    //set initial variables for principal, interest rate, and # of times interest is compounded in a year
    double principal, rate, timesCompounded;

    //set variables for interest and savings
    double interest;
    double savings;

    //ask user to input values for principal, rate, and times compounded variables 
    cout<< "Input principal, interest rate, and number of times the interest is compounded in a year" <<std::endl;
    cin>> principal >> rate >> timesCompounded;

    //calculate savings and interest
    savings = principal * pow(1 + ((rate/100) / timesCompounded), timesCompounded);
    interest = savings - principal;

    //output interest rate, times compounded, principal, interest, and amount in savings in a report
    cout<< std::left << std::setw(25) << "Interest rate:" << setprecision(3) << std::setw(10) << std::right << std::setw(10) << rate << "%" << std::endl;
    cout<< std::left << std::setw(26) << "Times Compounded:" << std::setw(10) << std::right << std::setw(10) << timesCompounded << std::endl;
    cout<< std::left << std::setw(25) << "Principal:" << setprecision(2) << fixed << std::right << "$" << std::setw(10) << principal << std::endl;
    cout<< std::left << std::setw(25) << "Interest:" << setprecision(2) << std::right << "$" << std::setw(10) << interest << std::endl;
    cout<< std::left << std::setw(25) << "Amount in savings:" << setprecision(2) << std::right << "$" << std::setw(10) << savings << std::endl;

    return 0;
}