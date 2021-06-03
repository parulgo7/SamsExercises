#include <iostream>
//above is a preprocessor directive

using namespace std;


int main()
{
    //basic text introduction to program
    cout << "Welcome to the cookie clicker program" <<endl;
    cout << "Please type in your name: " << endl;

    string name; //worth noting string is not capitalized in C++ (versus java)
    cin >> name; //piping in user input to name variable

    int cookie; //declaring cookie variable

    cout << "Hello " << name << " It's nice to meet you! " << endl;
    cout << "To play this game, you type click in order to increment your cookies... enjoy!" << endl;

    cout << "Please type your desired command (may I suggest click?) " << endl;
    cout << "Type break at any moment to end your cookie clicker application" << endl;
    string command;
    cin >> command;

    while (1) { //utilizing how true is any value except 0 in C++
        if (command == "click") { //another interesting aspect of C++, no .equals()!
            cookie++; //postfix incrementor
            cout << name << " has " << cookie << " cookies!!" << endl;
        }
        if (command == "break") {
            break;
        }
        cin >> command;
    }
    cout << "Congrats! You had " << cookie << " cookies! Thanks for playing!" << endl;
    //cout << "Hello world!" << endl;
    return 0;
}
