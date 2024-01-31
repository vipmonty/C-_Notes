#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double inputValue;
    double lowestVal = 1e38; // Initialize lowestVal to a large positive value

    for (int i = 0; i < 9; ++i)
    {
        cin >> inputValue;

        if (inputValue < lowestVal)
        {
            lowestVal = inputValue;
        }
    }

    cout << "The lowest value entered is: " << lowestVal << endl;

    return 0;
}
