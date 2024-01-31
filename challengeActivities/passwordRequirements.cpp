#include <iostream>
#include <string>
using namespace std;

int main()
{
    string secretStr;
    unsigned int i;

    getline(cin, secretStr);
    int numLetters = 0;

    // Loop through each character in the string
    for (i = 0; i < secretStr.length(); ++i)
    {
        // Check if the character is alphabetic or a digit
        if ((secretStr[i] >= 'A' && secretStr[i] <= 'Z') ||
            (secretStr[i] >= 'a' && secretStr[i] <= 'z') ||
            (secretStr[i] >= '0' && secretStr[i] <= '9'))
        {
            // Increment the count of letters
            ++numLetters;
        }
        else
        {
            // Replace non-alphabetic and non-digit characters with 'z'
            secretStr[i] = 'z';
        }
    }

    cout << "Adjusted password: " << secretStr << endl;

    return 0;
}