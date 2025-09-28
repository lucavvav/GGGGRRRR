// OceanLevels.cpp : Program that displays how much the ocean levels have risen after 5, 7, and 10 years
//

#include <iostream>
using namespace std;

int main()
{
    //set initial variables: the amount of years passed for each test case (5, 7, and 10 years) and the amount of millimeters the ocean level rises by each year
    int yearsPassed1 = 5;
    int yearsPassed2 = 7;
    int yearsPassed3 = 10;
    double inchesPerYear = 1.5;

    //for each test case, calculate the amount of millimeters the ocean level raised by multiplying the amount of years passed by the amount of milimeters the ocean rises by each year
    double oceanLevelRaised1 = yearsPassed1 * inchesPerYear;
    double oceanLevelRaised2 = yearsPassed2 * inchesPerYear;
    double oceanLevelRaised3 = yearsPassed3 * inchesPerYear;

    //output the results for each test case
    std::cout << "Ocean level after " << yearsPassed1 << " years is higher than the current level by " << oceanLevelRaised1 << " millimeters" << std::endl;
    std::cout << "Ocean level after " << yearsPassed2 << " years is higher than the current level by " << oceanLevelRaised2 << " millimeters" << std::endl;
    std::cout << "Ocean level after " << yearsPassed3 << " years is higher than the current level by " << oceanLevelRaised3 << " millimeters" << std::endl;

}