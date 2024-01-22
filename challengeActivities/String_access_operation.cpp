#include <iostream>
#include <string>
using namespace std;

int main()
{
    string userInput1;
    string userInput2;
    int lengthDifference;

    getline(cin, userInput1);
    getline(cin, userInput2);

    if (userInput1.size() == userInput2.size())
    {
        lengthDifference = 0;
    }
    else if (userInput1.size() < userInput2.size())
    {
        lengthDifference = userInput2.size() - userInput1.size();
    }
    else
    {
        lengthDifference = userInput1.size() - userInput2.size();
    }
    cout << lengthDifference << endl;
    return 0;
}
