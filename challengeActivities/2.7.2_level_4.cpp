/*The pressure of gas is given by  gasPressure = gasVolume / (gasTemperature * 8.314)
. Read double variables gasVolume and gasTemperature from input
, respectively. Then, compute gasPressure using the
 formula. Finally, output "Gas pressure is " followed
 by the value of gasPressure to five digits after the decimal
 point. End with a newline.

Ex:
If the input is 3.0 10.0, then the output is:

Gas pressure is 0.03608*/

#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    double gasTemperature;
    double gasVolume;
    double gasPressure;

    cin >> gasVolume;
    cin >> gasTemperature;
    double answer = gasVolume / (gasTemperature * 8.314);
    gasPressure = answer;
    cout << "Gas pressure is " << fixed << setprecision(5) << gasPressure << endl;
    return 0;
}
