#include <iostream>
#include <string>

using namespace std;

// Function prototypes
void PrintMenu();
void ExecuteMenu(char option, string &sampleText);
int GetNumOfWords(const string &text);
int FindText(const string &searchText, const string &sampleText);
void ReplaceExclamation(string &text);
void ShortenSpace(string &text);
int GetNumOfNonWSCharacters(const string &text); // Declaration of GetNumOfNonWSCharacters

int main()
{
    string sampleText;

    cout << "Enter a sample text:" << endl
         << endl;
    getline(cin, sampleText);

    cout << "You entered: " << sampleText << endl
         << endl;

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
        cout << "Number of non-whitespace characters: " << GetNumOfNonWSCharacters(sampleText) << endl;
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
        getline(cin, searchText);
        int instances = FindText(searchText, sampleText);
        cout << "\"" << searchText << "\" instances: " << instances << endl;
        cout << endl;
        break;
    }
    case 'r':
        ReplaceExclamation(sampleText);                // Call ReplaceExclamation to replace '!' with '.'
        cout << "Edited text: " << sampleText << endl; // Output the edited string
        cout << endl;
        break;
    case 's':
        ShortenSpace(sampleText);                      // Call ShortenSpace to shorten spaces
        cout << "Edited text: " << sampleText << endl; // Output the edited string
        cout << endl;
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
int FindText(const string &searchText, const string &sampleText)
{
    int count = 0;
    size_t pos = 0;
    while ((pos = sampleText.find(searchText, pos)) != string::npos)
    {
        count++;
        pos += searchText.length(); // Move past the found searchText to avoid overlapping matches
    }
    return count;
}

// Function definition for ReplaceExclamation
void ReplaceExclamation(string &text)
{
    for (char &c : text)
    {
        if (c == '!')
        {
            c = '.'; // Replace '!' with '.'
        }
    }
}

// Function definition for ShortenSpace
void ShortenSpace(string &text)
{
    string result;
    bool lastWasSpace = false;
    for (char c : text)
    {
        if (isspace(c))
        {
            if (!lastWasSpace)
            {
                result += ' '; // Add a single space to the result string
            }
            lastWasSpace = true;
        }
        else
        {
            result += c;
            lastWasSpace = false;
        }
    }
    text = result;
}

// Function definition for GetNumOfNonWSCharacters
int GetNumOfNonWSCharacters(const string &text)
{
    int count = 0;
    for (char c : text)
    {
        if (!isspace(c))
        {
            count++;
        }
    }
    return count;
}
