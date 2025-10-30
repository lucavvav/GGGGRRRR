#include <iostream>

bool checkFirst() {
    std::cout << "Checking first condition" << std::endl;
    return true;
}
bool checkSecond() {
    std::cout << "Checking second condition" << std::endl;
    return true;
}

int main()
{
    if (checkFirst() && checkSecond()) {
        std::cout << "Both conditions are true!" << std::endl;
    } else {
        std::cout << "At least one condition is false." << std::endl;
    }
    return 0;
}