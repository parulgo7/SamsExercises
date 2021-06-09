#include <iostream>
#include <cstring>

/*
An original program by parulgo7
A program that uses strncpy() and strcpy() to create a copycat

*/

using namespace std;

void instructions();
void copyCatPic();

const int MAXCHAR = 100;

int main()
{
    //relay instructions to the user
    instructions();

    char userWords[100];
    cin.getline(userWords, 100);

    char catWords[100];
    strncpy(catWords, userWords, 100); //safer version than strcpy() which can write past the buffer

    cout << "User said: " << userWords << endl;
    copyCatPic();
    cout << " said: " << catWords << endl;



    return 0;
}

void instructions() {
    cout << "Welcome to the Copy Cat Program!";
    cout << " Type something and see your Copy Cat!" << endl;
}

void copyCatPic(){
    cout << "=^._.^=";

}
