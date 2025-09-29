#include <iostream>
using namespace std;

int main()
{
    //set initial variables: years passed for each case (5, 7, 10) and how many millimeters per year the ocean's level will rise
    int yearsPassed1 = 5;
    int yearsPassed2 = 7;
    int yearsPassed3 = 10;
    double MILLIMETERS_PER_YEAR = 1.5;
    
    //for each case, multiply years passed by amt of millimeters per year to calculate how much ocean level will rise in millimeters
    double oceanLevelRaised1 = yearsPassed1 * MILLIMETERS_PER_YEAR;
    double oceanLevelRaised2 = yearsPassed2 * MILLIMETERS_PER_YEAR;
    double oceanLevelRaised3 = yearsPassed3 * MILLIMETERS_PER_YEAR;

    //output results
    std::cout << "The ocean's level will rise by " << oceanLevelRaised1 << " millimeters in " << yearsPassed1 << " years" << std::endl;
    std::cout << "The ocean's level will rise by " << oceanLevelRaised2 << " millimeters in " << yearsPassed2 << " years" << std::endl;
    std::cout << "The ocean's level will rise by " << oceanLevelRaised3 << " millimeters in " << yearsPassed3 << " years" << std::endl;
}