#include <stdio.h>
#include <string.h>
#include <cctype>
#define MAX 500 // For maximum size of the array

/*
Function to return number of characters in the parameter character array
*/
int GetNumOfNonWSCharacters(const char data[])
{
    // Counter for number of characters
    int counter = 0;
    int c;
    // Loops till end of the array
    for (c = 0; data[c] != '\0'; c++)
        // Checks if current character is not a space character
        if (data[c] != ' ')
            // Increase the counter by one
            counter++;
    // Returns the counter
    return counter;
}

/*
Function to return number of words in the parameter character array
*/
int GetNumOfWords(const char data[])
{
    // Counter for number of words
    int counter = 0;
    int c;
    // Loops till end of the array
    for (c = 0; data[c] != '\0'; c++)
        // Checks if current character is a space character and next character is not a space character
        if (data[c] == ' ' && data[c + 1] != ' ')
            // Increase the counter by one
            counter++;
    // Returns the counter after incrementing it by one for last word
    return ++counter;
}

/*
Function to converts first character of each sentence to upper case
*/
void FixCapitalization(char data[])
{
    int c;
    // Converts the first character to upper case
    data[0] = toupper(data[0]);
    // Loops till end of the array
    for (c = 1; data[c] != '\0'; c++)
    {
        // Checks if current character is a '.' dot character
        if (data[c] == '.')
        {
            // Loops till next alphabet character ignoring spaces
            while (!isalpha(data[++c]))
                ; // Do nothing
            // Converts the current character to upper case
            data[c] = toupper(data[c]);
        }
    }
}

/*
Function to replace each '!' character to '.' character
*/
void ReplaceExclamation(char data[])
{
    int c;
    // Loops till end of the array
    for (c = 0; data[c] != '\0'; c++)
        // Checks if current character is a '!' dot character
        if (data[c] == '!')
            // Assigns '.' character at current index position
            data[c] = '.';
}

/*
Function to replace all multiple spaces to single space
*/
void ShortenSpace(char data[])
{
    // Creates a temporary array
    char duplicate[MAX];
    int c = 0, d = 0;

    // Loops till end of the array
    while (data[c] != '\0')
    {
        // Checks if current character is a space character
        if (data[c] == ' ')
        {
            // Keeps the next index position
            int next = c + 1;

            // Checks if next index position is not end of the array
            if (data[next] != '\0')
            {
                // Loops till next character is either space and not end of the array
                while (data[next] == ' ' && data[next] != '\0')
                {
                    // Checks if next index position character is space
                    if (data[next] == ' ')
                        // Increase the counter by one
                        c++;
                    // Increase the next index counter by one
                    next++;
                }
            }
        }
        // Assigns character at c index position of parameter array to duplicate array d index position
        duplicate[d] = data[c];
        // Increase both c and d index for both the array
        c++;
        d++;
    }
    // Assigns null character at the end
    duplicate[d] = '\0';
    // Copies the contents of duplicate array to data array
    strcpy(data, duplicate);
}

/*
Function to display menu, accept user choice and calls appropriate function based on user choice till
user entered character is not 'q' or 'Q'
*/
char printMenu(char data[])
{
    char ch;

    // Displays menu
    printf("\n\n MENU");
    printf("\n c - Number of non - whitespace characters.");
    printf("\n w - Number of words.");
    printf("\n f - Fix capitalization.");
    printf("\n r - Replace all !'s.");
    printf("\n s - Shorten spaces.");
    printf("\n q - Quit.");

    // Accepts user choice
    printf("\n Choose an option: ");
    scanf("%c", &ch);

    // Checks if user choice is 'q' or 'Q' then return the character
    if (ch == 'q' || ch == 'Q')
        return ch;

    // Checks user choice and calls appropriate function
    switch (ch)
    {
    case 'C':
    case 'c':
        printf("\n Number of non-whitespace characters: %d", GetNumOfNonWSCharacters(data));
        break;
    case 'W':
    case 'w':
        printf("\n Number of words: %d", GetNumOfWords(data));
        break;
    case 'F':
    case 'f':
        FixCapitalization(data);
        printf("\n Edited text: %s", data);
        break;
    case 'R':
    case 'r':
        ReplaceExclamation(data);
        printf("\n Edited text: %s", data);
        break;
    case 'S':
    case 's':
        ShortenSpace(data);
        printf("\n Edited text: %s", data);
        break;
    default:
        printf("\n Invalid choice!! \t Try again.");
    }
}

// main function definition
int main()
{
    // Creates an array of size MAX to store data
    char data[MAX];

    // Accepts data
    printf("\n Enter a sample text: ");
    gets(data);
    // Displays entered data
    printf("\n You entered: %s", data);

    // Loops till printMenu() function does not returns 'q' or 'Q'
    do
    {
        // Calls the function to accept user choice and check other functions
        char ch = printMenu(data);
        fflush(stdin);
        // Checks if user choice is 'q' or 'Q' then come out of the loop
        if (ch == 'q' || ch == 'Q')
            break;
    } while (1);
    printf("\n Thanks");
    return 0;
}