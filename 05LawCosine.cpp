/****************************************************************************
*             Programming Lab 05: Law of Cosines                            *
*                                                                           *
*   This program allows the user to solve a triangle with law of cosines.   *
*                                                                           *
*   @Author 29, Fabian Trujillo 5, Jason Betsargon                          *
*   @Created September 13, 2018                                             *
****************************************************************************/
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    double side_a = 0;
    double side_b;
    double angle_C;
    double length_c;
    double angle_A;
    double CPI = 3.14;

    cout << "\n\n";
    cout << setw(27) << "" << "LAW OF COSINE" << endl;
    cout << setw(13) << ""
         << "-------------------------------------------" << endl;
    cout << endl;
    cout << setw(10)  << ""
         << "Enter Length of side a                       : ";
    cin  >> side_a;
    cout << setw(10)  << ""
         << "Enter Length of side b                       : ";
    cin  >> side_b;
    cout << setw(10)  << ""
         << "Enter Angle C between Side a and Side b      : ";
    cin  >> angle_C;
    length_c = sqrt(pow(side_a,2) + pow(side_b,2) - 2*(side_a * side_b)*
            cos(angle_C * (CPI/180)));
    angle_A = (acos((pow(side_b,2) + pow(length_c,2) - pow(side_a,2))/
              (2*side_a*length_c))) * (180/CPI);
    cout << fixed << showpoint << setprecision(1);
    cout << endl;
    cout << setw(10)  << "" << "Length of Side c is                          : "
         << length_c;
    cout << "\n\n";
    cout << setw(27) << "" << "OTHER ANGLES ARE" << endl;
    cout << setw(13) << "" << "--------------------------------------------"
         << endl;
    cout << endl;
    cout << setw(10)  << "" << "Angle A is                                   : "
         << angle_A <<endl;
    cout << setw(10)  << "" << "Angle B is                                   : "
         << 180 - (angle_A+angle_C) <<endl;

    return 0;
}
