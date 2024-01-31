#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int vecLength;
    int i;

    cin >> vecLength;

    // Creates a vector of size vecLength and initializes all values to 0
    vector<int> yearlyPrices(vecLength);
    for (i = 0; i < vecLength; ++i)
    {
        // Input values for the second half of the vector

        cin >> (yearlyPrices[i]).push_back(i);
    }
    for (i = 0; i < yearlyPrices.size(); ++i)
    {
        cout << yearlyPrices.at(i) << " ";
    }

    return 0;
}