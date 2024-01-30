#include <iostream>
#include <string>
using namespace std;

int main()
{
    string userLocation;
    string birthState;

    getline(cin, userLocation);
    getline(cin, birthState);

    // Given string userLocation on one line and string birthState on a second line, append a comma and a space to userLocation.
    // Then, append birthState to userLocation.

    // Ex: If the input is:

    // Montgomery
    // AL
    // then the output is:

    // Montgomery, AL
    userLocation = userLocation.append(",") + " " + birthState;

    cout
        << userLocation << endl;
    return 0;
}