#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    double lengthMm;
    double lengthCm;

    cin >> lengthMm;
    double input;
    lengthCm = lengthMm / 10;
    input = lengthCm; // THE 30.00

    cout << "10 millimeters = 1 centimeter" << endl;
    cout << fixed << setprecision(2) << lengthMm << " millimeter ";
    cout << "= ";
    cout << fixed << setprecision(3) << input << " centimeters" << endl;

    return 0;
};