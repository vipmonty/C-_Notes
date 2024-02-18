#include <iostream>
#include <string>

using namespace std;

// Function prototypes
void PrintMenu();
void ExecuteMenu(char option, string &sampleText);
int GetNumOfWords(const string &text);
int FindText(const string &searchText, const string &sampleText);

int main()
{
    string sampleText;

    cout << "Enter a sample text:" << endl
         << endl;
    getline(cin, sampleText);

    cout << "You entered: " << sampleText << endl;
    cout << endl;

    char option;
    do
    {
        PrintMenu();
        cin >> option;
        cin.ignore(); // Ignore the newline character left in the input buffer
        ExecuteMenu(option, sampleText);
    } while (option != 'q');

    return 0;
}

// Function definition for PrintMenu
// Function definition for PrintMenu
// Function definition for PrintMenu
void PrintMenu()
{
    cout << "MENU" << endl;
    cout << "c - Number of non-whitespace characters" << endl;
    cout << "w - Number of words" << endl;
    cout << "f - Find text" << endl;
    cout << "r - Replace all !'s" << endl;
    cout << "s - Shorten spaces" << endl;
    cout << "q - Quit" << endl;
    cout << endl; // Added an additional newline character
}

// Function definition for ExecuteMenu
void ExecuteMenu(char option, string &sampleText)
{
    switch (option)
    {
    case 'c':
    {
        int count = 0;
        for (char c : sampleText)
        {
            if (!isspace(c))
            {
                count++;
            }
        }
        cout << "Number of non-whitespace characters: " << count << endl;
        cout << endl;
        break;
    }
    case 'w':
        cout << "Number of words: " << GetNumOfWords(sampleText) << endl;
        cout << endl;
        break;
    case 'f':
    {
        string searchText;
        cout << "Enter a word or phrase to be found:" << endl;
        //  << endl;
        //  cin.ignore(); // Ignore the newline character left in the input buffer

        getline(cin, searchText);
        int instances = FindText(searchText, sampleText);                    // Get the instances count
        cout << "\"" << searchText << "\" instances: " << instances << endl; // Output in the expected format
        cout << endl;                                                        // Add a newline after printing the instances count
        break;
    }
    case 'r':
        // Implementation for replacing '!' characters
        break;
    case 's':
        // Implementation for shortening spaces
        break;
    case 'q':
        cout << "Choose an option:"; // Display "Choose an option:" when 'q' is entered
        cout << endl;
        break;
    default:
        cout << "Invalid option. Please choose again." << endl;
        cout << "Choose an option:" << endl; // Display "Choose an option:" for invalid options
        break;
    }
}

// Function definition for GetNumOfWords
int GetNumOfWords(const string &text)
{
    int count = 0;
    bool inWord = false;
    for (char c : text)
    {
        if (isspace(c))
        {
            inWord = false;
        }
        else
        {
            if (!inWord)
            {
                count++;
                inWord = true;
            }
        }
    }
    return count;
}

// Function definition for FindText
// int FindText(const string &searchText, const string &sampleText)
// {
//     int count = 0;
//     size_t pos = sampleText.find(searchText);
//     while (pos != string::npos)
//     {
//        count++;
//        pos = sampleText.find(searchText, pos + 1);
//     }
//     return count;
// }
// Function definition for FindText
// Function definition for FindText
// Function definition for FindText
int FindText(const string &searchText, const string &sampleText)
{
    int count = 0;
    size_t pos = 0;
    while ((pos = sampleText.find(searchText, pos)) != string::npos)
    {
        count++;
        pos += searchText.length(); // Move past the found searchText to avoid overlapping matches
    }
    //  cout << "\"" << searchText << "\" instances: " << count << endl; // Output in the expected format

    return count;
}
