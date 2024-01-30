#include <iostream>
using namespace std;

// Output the user's input. (2 pts)
// Output the input squared and cubed. Hint: Compute squared as userNum * userNum. (2 pts)
// Get a second user input into userNum2, and output the sum and product. (1 pt)

// Enter integer:
// 4
// You entered: 4
// 4 squared is 16
// And 4 cubed is 64!!
// Enter another integer:
// 5
// 4 + 5 is 9
// 4 * 5 is 20
#include <iostream>
using namespace std;

int main()
{
    int userNum;

    cout << "Enter integer:" << endl;
    cin >> userNum;

    int inputSquared = userNum * userNum;
    int inputCubed = userNum * userNum * userNum;

    cout << "You entered:" << endl
         << userNum << endl;

    cout << userNum << " Squared is " << inputSquared << endl;
    cout << "And " << userNum << " cubed is " << inputCubed << "!!" << endl;

    int userNum2;
    cin >> userNum2;
    cout << "Enter another integer:" << endl;
    cout << userNum2 << endl;

    // 4 + 5 is 9
    // 4 * 5 is 20
    int inputSum = userNum + userNum2;
    int inputMul = userNum * userNum2;

    cout << userNum << " + " << userNum2 << " is " << inputSum << endl;
    cout << userNum << " * " << userNum2 << " is " << inputMul << endl;
    return 0;
}