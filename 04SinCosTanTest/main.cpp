#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int angle;
    //double sinOfAngle;

    //sinOfAngle = sin(angle);

    cout << "\n\n";
    cout << "Enter an Angle in Degrees: ";
    cin  >> angle;
    cout << endl;
    cout << "sin of the Angle: " << sin(angle*M_PI/180) << endl;
    cout << "cos of the Angle: " << cos(angle*M_PI/180) << endl;
    cout << "tan of the Angle: " << tan(angle*M_PI/180) << endl;
    cout << "sin of the Angle: " << sin(angle*180/M_PI);
    return 0;
}
