#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
    // Get input
    string input;

    getline(cin, input);

    // cout << input << endl;

    // Extract initials
    istringstream iss(input);
    string firstName;
    string middleName;
    string lastName;

    // Output result
    if (iss >> firstName >> middleName >> lastName)
    {
        cout << lastName << ", " << firstName[0] << "." << middleName[0] << "." << endl;
    }
    else if (lastName.empty())
    {
        cout << middleName << ", " << firstName[0] << "." << endl;
    }

    // Only add middle initial if it's not empty
    // if (!middleName.empty())
    // {
    //     cout << lastName << "." << endl;
    // }
    // else
    // {
    //     cout << "dog" << endl;
    // }

    //  cout << "." << endl;

    return 0;
}
