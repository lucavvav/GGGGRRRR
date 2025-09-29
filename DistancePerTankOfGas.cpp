// DistancePerTankOfGas.cpp : Program that calculates how far a car can drive from a full tank of gas in both a town and a highway
//

#include <iostream>
using namespace std;

int main()
{
    //set initial variables: the size of the gas tank (in gallons), the average mileage per gallon when driving in towns, and the average mileage per gallon when driving in highways 
    int gasTankGallons = 20;
    double townMileage = 23.5;
    double highwayMileage = 28.9;

    //calculate the distance the car can travel using a full tank of gas in both a town and a highway using the formula (distance = number of gallons * average miles per gallon)
    double townDistance = gasTankGallons * townMileage;
    double highwayDistance = gasTankGallons * highwayMileage;

    //output the results for how far the car can drive in both a town and a highway
    std::cout << "The car can travel " << townDistance << " miles in a town on one " << gasTankGallons << " gallon tank of gas." << std::endl;
    std::cout << "The car can travel " << highwayDistance << " miles on a highway on one " << gasTankGallons << " gallon tank of gas." << std::endl;
}