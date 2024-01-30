#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int addTwoNums (int numOne, int numTwo) {
    return numOne + numTwo;
 };

int main()
{
    // int my_age = 36;
    // double weight = 122;
    // std::string message = "My name is Viphakone Monty and I am ";
    // std::string message2 = ", I also weigh ";
    // std::cout << message << my_age << message2 << weight << std::endl;

    // return 0;

    int numOne = 1;
    int numTwo = 3;

    cout << 'Enter two numbers to add' << endl;
    cout << 'Number 1:' << endl;
    cin >> numOne;

    cout << 'Number 2: ' << endl;
    cin >> numTwo;

    cout << numOne << ' + ' << numTwo << ' = ' << addTwoNums(numOne, numTwo) << endl;
    return 0;
};