#include <iostream>

//a program from Sams Teach Yourself C++
//prompt: ask the user's first and last name and display as a greeting
//my spin... allowing user to decide which language their greeting will be in

using namespace std;

const int MAXCHARACTERS = 200;

int main()
{

    cout << "Please enter your first name" << endl;
    char firstName[MAXCHARACTERS];
    cin.getline(firstName, MAXCHARACTERS); //using default delimiter '\n'

    cout << "Please enter your last name" << endl;
    char lastName[MAXCHARACTERS];
    cin.getline(lastName, MAXCHARACTERS);

    cout << "Hello " << firstName << " " << lastName << "! ";
    cout << "For a greeting in Spanish, French, or German type 1, 2, or 3 respectively" << endl;

    int option;
    cin >> option;

    switch(option) {
        case 1:
            cout << "Hola " << firstName << " " << lastName << "! Espero que estes bien! "; //Spanish greeting
            break;
        case 2:
            cout << "Bonjour " << firstName << " " << lastName << "! J'espere que vous allez bien "; //French greeting
            break;
        case 3:
            cout << "Hallo " << firstName << " " << lastName << "! Hoffe es geht dir gut "; //German greeting
            break;
        default:
            cout << "not at option!";
            break;
    }

    return 0;
}
