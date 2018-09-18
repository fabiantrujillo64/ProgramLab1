
/****************************************************************************
*             Programming Lab 03: Arithmetic                                *
*                                                                           *
*   This program does a lot of math with 2 integers                         *
*                                                                           *
*   @Author 29, Fabian Trujillo 5, Jason Betsargon                          *
*   @Created September 13, 2018                                             *
****************************************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{

    int num1;
    int num2;
    int sum;
    int difference;
    double divide;
    int product;
    int mod;
    int powToSecond;
    int absoluteValue;


    cout << "\n\n";

    cout << setw(20) << "" << "ARITHMETIC" << endl;

    cout << setw(10) << "" << "Enter two integers: ";
    cin >> num1 >> num2;

    /// Adding
    sum = num1 + num2;

    /// Subtracting
    difference = num1 - num2;

    /// Multiplying
    product = num1 * num2;

    /// Dividing
    divide = static_cast<double>(num1) / num2;

    /// Modulus
    mod = num1 % num2;

    /// Raising num1 to num2
    powToSecond = pow(num1 , num2);

    /// Absolute Value of Difference
    absoluteValue = abs(difference);

    /// Displaying everything
    cout << "\n";
    cout << setw(10) << "" << "Sum of num1 and num2                  : " << setw(6) << sum << endl;
    cout << setw(10) << "" << "Difference of num1 and num2           : " << setw(6) << difference << endl;
    cout << setw(10) << "" << "Proudcut of num1 and num2             : " << setw(6) << product << endl;
    cout << setw(10) << "" << "Division of num1 and num2             : " << setw(6) << divide << endl;
    cout << setw(10) << "" << "Modulus of num1 and num2              : " << setw(6) << mod << endl;
    cout << setw(10) << "" << "num1 raised to the power of num2      : " << setw(6) << powToSecond << endl;
    cout << setw(10) << "" << "Absolute value of difference          : " << setw(6) << absoluteValue << endl;




    return 0;
}
