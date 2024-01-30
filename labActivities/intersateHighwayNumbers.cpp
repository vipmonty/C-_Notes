#include <iostream>
using namespace std;

int main()
{
    int highwayNumber;

    // cout << "Enter a highway number: ";
    cin >> highwayNumber;

    if (highwayNumber >= 1 && highwayNumber <= 99)
    {
        // Primary highway
        if (highwayNumber % 2 == 0)
        {
            cout << "I-" << highwayNumber << " is primary, going east/west." << endl;
        }
        else
        {
            cout << "I-" << highwayNumber << " is primary, going north/south." << endl;
        }
    }
    else if (highwayNumber >= 100 && highwayNumber <= 999)
    {
        // Auxiliary highway
        int primaryHighway = highwayNumber % 100;

        if (primaryHighway >= 1 && primaryHighway <= 99 && primaryHighway % 2 == 0)
        {
            cout << "I-" << highwayNumber << " is auxiliary, serving I-" << primaryHighway << ", going east/west." << endl;
        }
        else if (primaryHighway >= 1 && primaryHighway <= 99 && primaryHighway % 2 != 0)
        {
            cout << "I-" << highwayNumber << " is auxiliary, serving I-" << primaryHighway << ", going north/south." << endl;
        }
        else
        {
            cout << highwayNumber << " is not a valid interstate highway number." << endl;
        }
    }
    else
    {
        cout << highwayNumber << " is not a valid interstate highway number." << endl;
    }

    return 0;
}
