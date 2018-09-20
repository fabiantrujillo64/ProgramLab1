/****************************************************************************
*             Programming Lab 01: Print My Name                             *
*                                                                           *
*   This program allows the user to print their name.                       *
*                                                                           *
*   @Author 29, Fabian Trujillo 5, Jason Betsargon                          *
*   @Created September 13, 2018                                             *
****************************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    string name;
    cout << "\n\n\n";

    cout << setw(10) << "" << "Enter your name: ";
    getline(cin, name);
    cout << setw(10) << "" << "Your name is:    " << name << endl;
    return 0;
}
