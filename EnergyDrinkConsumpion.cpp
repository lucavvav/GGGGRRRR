// add program title/descritin here
//

#include <iostream>
using namespace std;

int main()
{
    int numCustomers = 16500;
    double percentWeeklyPurchaser = 0.15;
    double percentPreferCitrus = 0.58;
    double numWeeklyPurchasers = numCustomers * percentWeeklyPurchaser;
    double numCitrusPreferrers = numCustomers * percentPreferCitrus;
    std::cout << "Of the " << numCustomers << " customers who took the survey, approximately " << numWeeklyPurchasers << " of them purchase one or more energy drinks per week." << std::endl;
    std::cout << "Of the " << numCustomers << " customers who took the survey, approximately " << numCitrusPreferrers << " of them prefer citrus-flavored energy drinks." << std::endl;
}