#include <iostream>
#include <string>
#include <iomanip> // needed for setprecision() and fixed
#include <cmath>   // needed for ceil()
using namespace std;

int main()
{
    // Step 1 (2 pts). Read from input wall height, wall width,
    //  and cost of one paint can (doubles)./* Type your code here. */
    double wallHeight;
    double wallWidth;
    double costOfOneCan;
    using namespace std;

    double wallArea;
    cin >> wallHeight;
    cin >> wallWidth;
    cin >> costOfOneCan;

    wallArea = wallHeight * wallWidth;
    // Calculate and
    // output the wall's area to one decimal place using
    // cout << fixed << setprecision(1); once before all other
    cout << fixed << setprecision(1) << "Wall area: " << wallArea << " sq ft" << endl;
    // Step 2 (2 pts).
    // Calculate and output the amount of paint needed
    // to three decimal places.
    // One gallon of paint covers 350 square
    // feet.
    double paintNeeded = (wallArea / 350);
    // Ex: If the input is:
    // 12.0 15.0 29.95
    // the output is:
    cout << fixed << setprecision(3) << "Paint needed: " << paintNeeded << " gallons" << endl;
    // Wall area: 180.0 sq ft
    // Paint needed: 0.514 gallons

    // Calculate and output the number of 1 gallon cans needed to
    //  paint the wall. Extra paint may be left over. Hint: Use
    //  ceil() to round up to the nearest gallon and convert to an integer.

    double cansNeeded = (paintNeeded);
    cout << "Cans needed: " << fixed << setprecision(0) << ceil(cansNeeded) << " can"
         << "(s)" << endl;
    //  Calculate and output the paint cost, sales tax of 7%,
    //  and total cost.
    double salesTax = .07;
    double paintCost = ceil(cansNeeded) * costOfOneCan;

    //  Dollar values are output with two decimal places.
    cout << "Paint cost: $" << fixed << setprecision(2) << paintCost << endl;
    cout << "Sales tax: $" << salesTax * paintCost << endl;
    cout << "Total cost: $" << paintCost + (salesTax * paintCost) << endl;

    return 0;
}
// Ex: If the input is:

// 8.0 8.0 49.20
// the output is:

// Wall area: 64.0 sq ft
// Paint needed: 0.183 gallons
// Cans needed: 1 can(s)
// Paint cost: $49.20
// Sales tax: $3.44
// Total cost: $52.64