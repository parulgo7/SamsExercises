#include <iostream>
//first *specific user inputted number* of multiples of 16

using namespace std;

int main()
{
    const int SIXTEEN = 16;
    string welcome = "Hello! Please input how many multiples of 16 you desire (up to 200)";

    cout << welcome << endl;
    int multiples;
    cin >> multiples;

    if (multiples > 200) {
        cout << "Please type a different number of multiples desired";
        cin >> multiples;
    }

    for (int i = 1; i<= multiples; i++) {
        cout << SIXTEEN * i << " ";
    }
    cout << "\n";

    cout << "Please press Enter to continue" << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}
