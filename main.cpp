#include <iostream>

//a program exercise from Sams Teach Yourself C++

using namespace std;

void displayInstructions(); //function prototype

int main()
{
    float goal[5]; //declaration of an array of floats (5 elements)

    goal[0] = 0.9;
    goal[1] = 0.75;
    goal[2] = 0.5;
    goal[3] = 0.25;
    goal[4] = 0.1; //attempting to write goal[5] would be a fence post error
                    //as it would write into the memory of other things than the array goal
                    // which is dangerous

    displayInstructions();
    float currentWeight, target;

    cin>> currentWeight;
    cin >> target;

    cout << "The current weight is " << currentWeight << endl;
    cout << "The target weight is " << target << endl;

    for (float percent : goal) { //for each loop
        float loss = (currentWeight - target) * percent;
        cout << "Goal for " << percent * 100 << " percent: ";
        cout << target + loss << endl;
    }

    return 0;
}

//a function that displays the user instructions for the program (entering weight and target weight)
void displayInstructions() {

    cout << "Please enter your current weight and target weight (press enter between)" << endl;
    return; //another way to have 'void'
}


