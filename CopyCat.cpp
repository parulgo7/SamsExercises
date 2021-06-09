#include <iostream>
#include <cstring> //preprocessor directive used to access strncpy() method

/*
An original program by parulgo7
A program that uses strncpy() to create a copycat

*/

using namespace std;

void instructions(); //function prototypes 
void copyCatPic();

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

//display instructions to the user
void instructions() {
    cout << "Welcome to the Copy Cat Program!";
    cout << " Type something and see your Copy Cat!" << endl;
}

//display ASCII text image of a cat
void copyCatPic(){
    cout << "=^._.^=";

}
