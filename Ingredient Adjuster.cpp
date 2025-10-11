#include <iostream>
using namespace std;

int main()
{
    //variables for default ingredients and batch
    int defaultBatch = 48;
    float defaultSugar = 1.5;
    float defaultButter = 1;
    float defaultFlour = 2.75;

    float cookiesRequested;
    cout<< "How many cookies do you want to make?";
    cin>> cookiesRequested;

    //calculate the amount of ingredients needed, adjusted by the requested amount of cookies
    float adjustedSugar = (defaultSugar * (cookiesRequested/defaultBatch));
    float adjustedButter = (defaultButter * (cookiesRequested/defaultBatch));
    float adjustedFlour = (defaultFlour * (cookiesRequested/defaultBatch));

    cout<< "You need " << adjustedSugar << " cup(s) of sugar, " << adjustedButter << " cup(s) of butter, and " << adjustedFlour << " cup(s) of flour to make " << cookiesRequested << " cookies." << std::endl;
    return 0;
}