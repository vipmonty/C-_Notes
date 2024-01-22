// Compute the acceleration of gravity for a given distance from the
// earth's center, distCenter, assigning the result to accelGravity.
// The expression for the acceleration of gravity is:

// (G * M) / (d^2),
// where G is the gravitational constant 6.673 x 10^11,
// M is the mass of the earth 5.98 x 10^24 (in kg) and
// d is the distance in meters
// from the earth's center (stored in variable distCenter).

// Note: Assume distance is at least the radius of the earth.

#include <iostream>
using namespace std;

int main()
{
    double G = 6.673e-11; // (G * M) / (distCenter^2)
    double M = 5.98e24;
    double accelGravity;
    double distCenter;

    cin >> distCenter;
    double answer = (G * M) / (distCenter * distCenter);

    accelGravity = answer;

    cout
        << accelGravity << endl;

    return 0;
}