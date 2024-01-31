#include <iostream>
#include <cctype>
#include <string>

bool isPalindrome(const std::string& str) {
    // Remove spaces from the input string
    std::string cleanStr;
    for (char ch : str) {
        if (!std::isspace(ch)) {
            cleanStr += ch;
        }
    }

    // Check if the cleaned string is a palindrome
    int length = cleanStr.length();
    for (int i = 0; i < length / 2; ++i) {
        if (std::tolower(cleanStr[i]) != std::tolower(cleanStr[length - 1 - i])) {
            return false; // Not a palindrome
        }
    }

    return true; // It's a palindrome
}

int main() {
    std::string input;
    
    std::cout << "Enter a word or phrase: ";
    std::getline(std::cin, input);

    if (isPalindrome(input)) {
        std::cout << "palindrome: " << input << std::endl;
    } else {
        std::cout << "not a palindrome: " << input << std::endl;
    }

    return 0;
}
