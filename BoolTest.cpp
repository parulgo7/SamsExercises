//BoolTest - testing the boolean aspect of C++ (how logical values can be represented as ints)
//This is based off of an "C++ For Dummies exercise (C4-p55)


#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main()
{
    //setting output format for bool to 'true and false' rather than ints 1 0
    cout.setf(cout.boolalpha);

    cout << "determining if two integer values are the same or not" << endl;
    string command = "Please input your value";
    //requesting 2 values from the user
    cout << command << endl;
    int input1;
    cin >> input1;

    cout<< command << endl;
    int input2;
    cin >> input2;

    //it is possible to store the results of a comparison in a variable
    bool comparison;
    comparison = (input1 == input2); //() added for clarification

    cout << "The statement " << input1 << " is equal to " << input2 << " is " << comparison << endl; //new line

    //wait till user is ready to terminate the program
    cout << "Please press enter to continue \n ";
    cin.ignore(10, '\n'); //specific code that terminates the process based on stream size and deliminator
    cin.get();

    //--------------------------------- bool with float variables

    //a concrete example exemplifying the nuance with boolean comparison with floats
    float val1 = 10.0;
    float val2 = 10.0 / 3;

    bool fcomparison;
    fcomparison = (val1 == (val2 * 3));
    cout << "float value 1 is " << val1 << endl;
    cout << "float value 2 is " << val2 << endl;
    cout << "The statement " << val1 << " is equal to " << (val2 * 3) << " is " << fcomparison << endl; //new line

    cout << "here it HAPPENS to work out... but we cannot depend on this because floats and doubles are prone to" <<
    " round off errors (at least math with them does)... therefore we use delta values!" << endl;

    //checking if the delta value is within 0.0001 (on both sides)
    float delta = val1 - (val2*3);
    bool isFEqual = (-0.0001 < delta) && (delta < 0.0001);

    cout << "With the delta " << delta << ", we can see the comparison is " << isFEqual << endl;



    return 0;
}
