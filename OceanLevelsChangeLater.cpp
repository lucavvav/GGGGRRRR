// add program title/descritin here
//

#include <iostream>
using namespace std;

int main()
{
    //IDK what happens when you multiply an int by a double in c++ so let's find out!!!
    int yearsPassed1 = 5;
    int yearsPassed2 = 7;
    int yearsPassed3 = 10;
    double inchesPerYear = 1.5;
    double oceanLevelRaised1 = yearsPassed1 * inchesPerYear;
    double oceanLevelRaised2 = yearsPassed2 * inchesPerYear;
    double oceanLevelRaised3 = yearsPassed3 * inchesPerYear;
    std::cout << "Ocean level after " << yearsPassed1 << " years is higher than the current level by " << oceanLevelRaised1 << " millimeters" << std::endl;
    std::cout << "Ocean level after " << yearsPassed2 << " years is higher than the current level by " << oceanLevelRaised2 << " millimeters" << std::endl;
    std::cout << "Ocean level after " << yearsPassed3 << " years is higher than the current level by " << oceanLevelRaised3 << " millimeters" << std::endl;


    


}