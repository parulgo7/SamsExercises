#include <iostream>

//A program from the "For Dummies" book exploring pointer arrays with char arrays
//some alterations made to original program such as switching months to days of the week


using namespace std;

const char* intToMonthTraditional(int month); //function prototypes
const char* intToMonthPointer(int month);

int main()
{
    cout << "Type a number for which day of the week you want (1-7) 1= M, 7 = Sun" << endl;
    char input[1];

    cin.getline(input,1); //input size constrained to size of 1 (size of char)

    cout << "This is the output for a traditional switch-case method " << intToMonthTraditional(input) << endl;
    cout <<"This is the output for a pointer array approach " << intToMonthPointer(input) << endl;

    return 0;
}

const char* intToMonthTraditional(int month) {

    const char* returnValue;

    switch(month) { //this approach is exhaustive as you must create a case for each option
        case 1:
            returnValue = "Monday";
            break;
        case 2:
            returnValue = "Tuesday";
            break;
        case 3:
            returnValue = "Wednesday";
            break;
        case 4:
            returnValue = "Thursday";
            break;
        case 5:
            returnValue = "Friday";
            break;
        case 6:
            returnValue = "Saturday";
            break;
        case 7:
            returnValue = "Sunday";
            break;
        default:
            returnValue = "Not an option!";
            break;
    }
    //return returnValue;
}

const char* intToMonthPointer(int month) {



}
