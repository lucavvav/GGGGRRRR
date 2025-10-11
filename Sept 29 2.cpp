#include <iostream>
using namespace std;

int main()
{
    // take 3 scores
    int score1, score2, score3;
    double average;

    cout<< "Enter 3 test scores:";
    cin>> score1 >> score2 >> score3;

    // average them
    average = (score1 + score2 + score3)/3;

    //tell student grade
    cout<< "Your average is:" << average << endl;

    if (average >= 80)
    {
        cout<< "You got at least a B\n";
        cout<< "Will this line execute\n";
        if (average >= 90)
        {
            cout<< "You got an A";
        }
    }

    if (average >= 90)
    {
        cout<< "You got an A";
    }

  

    return 0;
}