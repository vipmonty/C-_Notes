#include <iostream>
#include <string>
using namespace std;

int main()
{
    string codeWord;
    int count;
    int strIndex;

    cin >> codeWord;
    count = 0;
    strIndex = 0;

    size_t found = codeWord.find("abc");

    while (found != string::npos)
    {
        // Increment the count for each occurrence
        ++count;

        // Remove "abc" from codeWord
        codeWord.erase(found, 3);

        // Find the next occurrence of "abc"
        found = codeWord.find("abc");
    }

    cout << "Count: " << count << endl;
    cout << "Remaining string: " << codeWord << endl;

    return 0;
}