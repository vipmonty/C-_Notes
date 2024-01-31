#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string userString;
    bool noSpaces;
    getline(cin, userString);

    // Declare a Boolean variable noSpaces and assign noSpaces with true
    // if userString does not contain any spaces. Otherwise, assign noSpaces with false.
    // Check if userString contains any spaces
    for (char c : userString)
    {
        if (std::isspace(c))
        {
            noSpaces = false;
            break;
        }
        else
        {
            noSpaces = true;
        }
    }
    if (noSpaces)
    {
        cout << "String accepted" << endl;
    }
    else
    {
        cout << "String not accepted" << endl;
    }

    return 0;
}