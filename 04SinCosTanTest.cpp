/****************************************************************************
*             Programming Lab 04: SinCosTan                                 *
*                                                                           *
*   This program calculate sin,cos,tan in both radians and degrees.         *
*                                                                           *
*   @Author 29, Fabian Trujillo 5, Jason Betsargon                          *
*   @Created September 13, 2018                                             *
****************************************************************************/
#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    int angle;
    double CPI = 3.14159;


    cout << "\n\n";
    cout << setw(10) << "" << "Enter an Angle in Degrees: ";
    cin  >> angle;
    cout << endl;
    cout << fixed << showpoint << setprecision(4);
    cout << setw(10) << "" << "sin of the Angle: "
         << sin(angle*(CPI/180)) << endl;
    cout << setw(10) << "" << "cos of the Angle: "
         << cos(angle*(CPI/180)) << endl;
    cout << setw(10) << "" << "tan of the Angle: "
         << tan(angle*(CPI/180)) << endl;
    cout << endl;
    cout << setw(10) << "" << "The Angle in Radians is, sin:  "
         << sin(angle*(CPI/180)) << endl;
    cout << setw(10) << "" << "The Angle in Radians is, cos:  "
         << cos(angle*(CPI/180)) << endl;
    cout << setw(10) << "" << "The Angle in Radians is, tan:  "
         << tan(angle*(CPI/180)) << endl;
    return 0;
}
