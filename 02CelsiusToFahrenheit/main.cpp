/****************************************************************************
*             Programming Lab 02: Celsius to Fahrenheit                     *
*                                                                           *
*   This program converts to Celsius to Fahrenheit                          *
*                                                                           *
*   @Author 29, Fabian Trujillo 5, Jason Betsargon                          *
*   @Created September 13, 2018                                             *
****************************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "\n\n\n";
    double fahrenheit;
    int celsius;
    cout << setw(10) << "" << "Enter a Temperature in Celsius:   ";
    cin >> celsius;
    cout << fixed << setprecision(1);
    fahrenheit = celsius * 9.0/5 + 32;

    cout << setw(10) << ""<< "The Temperature in Fahrenheit is: "
         << fahrenheit << static_cast<char>(248) << "F";
    cout << "\n\n";


    return 0;
}
