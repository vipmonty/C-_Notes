#include <iostream>
using namespace std;

int main()
{
    int numVal;
    int inputValue;
    bool allValid = true;
    int i;

    cin >> numVal;
    for (int i = 0; i < numVal; ++i)
    {
        cin >> inputValue;

        // Output the value read
        // cout << "Value read: " << inputValue << endl;

        // Update lowestVal if the current input is lower
        if (i == 0 && (inputValue >= 100 && inputValue <= 1000))
        {
            allValid = false;
            break;
        }
        else
        {
            allValid = true;
            break;
        }
    }
    if (allValid)
    {
        cout << "All valid value (s)";
    }
    else
    {
        cout << "Invalid value (s)";
    }
    return 0;
}