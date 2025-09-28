// EnergyDrinkConsumption.cpp : Program that calculates the percentage of survey-taking customers who purchase energy drinks weekly, as well as the percentage of customers who prefer citrus-flavored energy drinks
//

#include <iostream>
using namespace std;

int main()
{
    //set initial variables: the 16500 customers surveyed, the percentage of customers who purchase energy drinks weekly, and the percentage of customers who prefer citrus-flavored energy drinks
    int numCustomers = 16500;
    double percentWeeklyPurchaser = 0.15;
    double percentPreferCitrus = 0.58;

    //calculate the number of customers who purchase energy drinks weekly and the number of customers who prefer citrus-flavored energy drinks by multiplying the number of customers who took the survey by each percentage
    double numWeeklyPurchasers = numCustomers * percentWeeklyPurchaser;
    double numCitrusPreferrers = numCustomers * percentPreferCitrus;

    //output the results for how many customers purchase energy drinks weekly and how many customers prefer citrus-flavored energy drinks
    std::cout << "Of the " << numCustomers << " customers who took the survey, approximately " << numWeeklyPurchasers << " of them purchase one or more energy drinks per week." << std::endl;
    std::cout << "Of the " << numCustomers << " customers who took the survey, approximately " << numCitrusPreferrers << " of them prefer citrus-flavored energy drinks." << std::endl;
}