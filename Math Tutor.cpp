#include <iostream>
#include <random>
#include <iomanip>

int main()
{
    //set up random number generator and range
    std::random_device rd;
    std::mt19937 gen (rd());
    std::uniform_int_distribution<> dist (1,999);

    //assign random numbers to variables
    int randomNumber1 = dist(gen);
    int randomNumber2 = dist(gen);

    //add both random variables to find the solution
    int solution = randomNumber1 + randomNumber2;

    //output the random numbers in an addition problem
    std::cout << std::setw(5) << std::right << randomNumber1 << std::endl;
    std::cout << "+" << std::setw (4) << std::right << randomNumber2 << std::endl;
    std::cout << "-----" << std::endl;

    //pause the program so that the user may solve it themselves before proceeding
    std::cin.get();

    //output the solution after the user presses enter
    std::cout << solution;

    return 0;
}