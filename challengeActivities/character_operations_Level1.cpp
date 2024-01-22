#include <iostream>
#include <string>
#include <cctype>
#include <typeinfo>
using namespace std;

int main()
{
   string userString;

   getline(cin, userString);
   // isdigit() is used to check if the first and second characters in userString are digit characters.
   // If both calls to isdigit() return true, then both characters are replaced with '='.
   if (isdigit(userString.at(0)) && isdigit(userString.at(1)))
   {
      userString.at(0) = '=';
      userString.at(1) = '=';
   };
   cout << userString << endl;

   return 0;
}

// A 3-character string, userString, is read from input.
// Replace the first and second characters in userString with '=' only
// if both are digit characters.
// Otherwise, userString is not changed.

// Ex: If the input is 359, then the output is:

// ==9

// Ex: If the input is 8r8, then the output is:
// 8r8
