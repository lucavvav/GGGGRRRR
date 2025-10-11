#include <iostream>
#include <iomanip>
#include<cstdlib>
using namespace std;

int main ()
{
    srand(time(0));

    int answer;
    cout << "Please choose an option\n";
    cout << "1. Fight\n";
    cout << "2. Run\n";
    cin >> answer;

    int goblinHP = 10;
    if (1 == answer)
    {
        //We calculate a random number
        int damage = (rand() % 15) + 1;
        goblinHP -= damage;
        cout << "Goblin's hp is: " <<goblinHP << endl;
    }
    if (answer ==2)
    {
        cout << "Goblin's hp is: " << goblinHP << endl;
        cout << "Fled";
    }
    if (goblinHP <= 0)
    {
        cout << "Goblin slain";
    }
    
    
    
    return 0;
}
