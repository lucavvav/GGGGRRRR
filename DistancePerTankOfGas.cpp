// add program title/descritin here
//

#include <iostream>
using namespace std;

int main()
{
    int gasTankGallons = 20;
    double townMileage = 23.5;
    double highwayMileage = 28.9;
    double townDistance = gasTankGallons * townMileage;
    double highwayDistance = gasTankGallons * highwayMileage;
    std::cout << "The car can travel " << townDistance << " miles in a town on one " << gasTankGallons << " gallon tank of gas";
    std::cout << "The car can travel " << highwayDistance << " miles on a highway on one " << gasTankGallons << " gallon tank of gas";

}