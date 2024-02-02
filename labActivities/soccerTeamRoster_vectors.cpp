#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printMenu()
{
    cout << "\nMENU\n";
    cout << "a - Add player\n";
    cout << "d - Remove player\n";
    cout << "u - Update player rating\n";
    cout << "r - Output players above a rating\n";
    cout << "o - Output roster\n";
    cout << "q - Quit\n\n";
    cout << "Choose an option:\n";
}

void addPlayer(vector<int> &jerseyNumbers, vector<int> &playerRatings)
{
    int jersey, rating;

    cout << "Enter a new player's jersey number:" << endl;
    cin >> jersey;

    cout << "Enter the player's rating:" << endl;
    cin >> rating;

    // Validate input
    if (jersey < 0 || jersey > 99 || rating < 1 || rating > 9)
    {
        cout << "Invalid input. Please enter valid values." << endl;
        return;
    }

    // Store values in vectors
    jerseyNumbers.push_back(jersey);
    playerRatings.push_back(rating);

    //  cout << "Player added successfully." << endl;
}

void deletePlayer(vector<int> &jerseyNumbers, vector<int> &playerRatings)
{
    int jerseyToDelete;

    cout << "Enter the jersey number to delete: ";
    cin >> jerseyToDelete;

    // Find the index of the player with the given jersey number
    auto it = find(begin(jerseyNumbers), end(jerseyNumbers), jerseyToDelete);

    if (it != end(jerseyNumbers))
    {
        // Player found, erase the corresponding elements from both vectors
        size_t index = distance(begin(jerseyNumbers), it);
        jerseyNumbers.erase(begin(jerseyNumbers) + index);
        playerRatings.erase(begin(playerRatings) + index);

        cout << "Player with jersey number " << jerseyToDelete << " deleted successfully." << endl;
    }
    else
    {
        cout << "Player with jersey number " << jerseyToDelete << " not found." << endl;
    }
}

void updatePlayerRating(vector<int> &jerseyNumbers, vector<int> &playerRatings)
{
    int jerseyToUpdate, newRating;

    cout << "Enter the jersey number to update rating: ";
    cin >> jerseyToUpdate;

    // Find the index of the player with the given jersey number
    auto it = find(begin(jerseyNumbers), end(jerseyNumbers), jerseyToUpdate);

    if (it != end(jerseyNumbers))
    {
        // Player found, prompt for a new rating
        cout << "Enter a new rating for player: ";
        cin >> newRating;

        // Validate the new rating
        if (newRating < 1 || newRating > 9)
        {
            cout << "Invalid rating. Please enter a valid value between 1 and 9." << endl;
            return;
        }

        // Update the player's rating
        size_t index = distance(begin(jerseyNumbers), it);
        playerRatings[index] = newRating;

        cout << "Player with jersey number " << jerseyToUpdate << " updated successfully." << endl;
    }
    else
    {
        cout << "Player with jersey number " << jerseyToUpdate << " not found." << endl;
    }
}

void outputPlayersAboveRating(const vector<int> &jerseyNumbers, const vector<int> &playerRatings)
{
    int thresholdRating;

    // cout << "Enter the rating threshold: ";
    cin >> thresholdRating;

    cout << "\nABOVE " << thresholdRating << "\n";
    for (size_t i = 0; i < jerseyNumbers.size(); ++i)
    {
        if (playerRatings[i] > thresholdRating)
        {
            cout << "Player " << (i + 1) << " -- Jersey number: " << jerseyNumbers[i]
                 << ", Rating: " << playerRatings[i] << endl;
        }
    }
}

int main()
{
    const int NUM_PLAYERS = 5;

    // Vectors to store jersey numbers and ratings
    vector<int> jerseyNumbers;
    vector<int> playerRatings;

    // Prompt user for initial input
    for (int i = 0; i < NUM_PLAYERS; ++i)
    {
        int jersey, rating;

        // Input jersey number
        cout << "Enter player " << (i + 1) << "'s jersey number:" << endl;
        cin >> jersey;

        // Input player rating
        cout << "Enter player " << (i + 1) << "'s rating:" << endl;
        if (i != 4)
        {
            cout << "\n";
        }
        cin >> rating;

        // Validate input
        if (jersey < 0 || jersey > 99 || rating < 1 || rating > 9)
        {
            cout << "Invalid input. Please enter valid values." << endl;
            --i; // Decrement i to repeat the input for the current player
            continue;
        }

        // Store values in vectors
        jerseyNumbers.push_back(jersey);
        playerRatings.push_back(rating);
    }

    // Display roster after the initial input
    cout << "\nROSTER" << endl;
    for (int i = 0; i < NUM_PLAYERS; ++i)
    {
        cout << "Player " << (i + 1) << " -- Jersey number: " << jerseyNumbers[i]
             << ", Rating: " << playerRatings[i] << endl;
    }

    char option;
    bool quit = false;

    while (!quit)
    {
        // Print the menu
        printMenu();

        // Get user's menu choice
        cin >> option;

        // Process the user's choice
        switch (option)
        {
        case 'a':
            addPlayer(jerseyNumbers, playerRatings);
            break;
        case 'd':
            deletePlayer(jerseyNumbers, playerRatings);
            break;
        case 'u':
            updatePlayerRating(jerseyNumbers, playerRatings);
            break;
        case 'r':
            outputPlayersAboveRating(jerseyNumbers, playerRatings);
            break;
        case 'o':
            // Output roster
            cout << "ROSTER" << endl;
            for (int i = 0; i < jerseyNumbers.size(); ++i)
            {
                cout << "Player " << (i + 1) << " -- Jersey number: " << jerseyNumbers[i]
                     << ", Rating: " << playerRatings[i] << endl;
            }
            break;
        case 'q':
            quit = true; // Set the exit condition
            break;
        default:
            cout << "Invalid option. Please choose a valid option." << endl;
        }
    }

    return 0;
}
