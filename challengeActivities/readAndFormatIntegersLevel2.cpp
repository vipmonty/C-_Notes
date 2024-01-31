#include <iostream>
using namespace std;

int main()
{
    int valCount;
    cin >> valCount;

    for (int i = 0; i < valCount; ++i)
    {
        int value;
        std::cin >> value;

        // Output integer surrounded by square brackets
        std::cout << "[" << value << "] ";
    }

    // End with a newline
    std::cout << std::endl;

    return 0;
}