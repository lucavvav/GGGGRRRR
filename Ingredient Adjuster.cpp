#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //set initial variables: the default batch and how many cups of sugar, butter, and flour it requires, as well as the desired amount of cookies
    int defaultBatch = 48;
    double defaultSugar = 1.5;
    double defaultButter = 1;
    double defaultFlour = 2.75;
    double cookiesRequested;

    //ask the user to input the desired number of cookies
    cout<< "How many cookies do you want to make?" <<std::endl;
    cin>> cookiesRequested;

    //calculate the amount of ingredients needed, adjusted to the requested amount of cookies
    double adjustedSugar = (defaultSugar * (cookiesRequested/defaultBatch));
    double adjustedButter = (defaultButter * (cookiesRequested/defaultBatch));
    double adjustedFlour = (defaultFlour * (cookiesRequested/defaultBatch));

    //output the results explaining how many cups of each ingredient is necessary for the desired amount of cookies
    cout<< setprecision(2);
    cout<< adjustedSugar << " cups of sugar" << std::endl;
    cout<< adjustedButter << " cups of butter" << std::endl;
    cout<< adjustedFlour << " cups of flour" << std::endl;
    return 0;
}