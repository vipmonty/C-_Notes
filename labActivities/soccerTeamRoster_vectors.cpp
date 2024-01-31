#include <iostream>
#include <vector>

using namespace std;

int main()
{
    const int NUM_PLAYERS = 5;

    // Vectors to store jersey numbers and ratings
    vector<int> jerseyNumbers;
    vector<int> playerRatings;

    // Prompt user for input
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

    // Output the roster
    cout << "\nROSTER" << endl;
    for (int i = 0; i < NUM_PLAYERS; ++i)
    {
        cout << "Player " << (i + 1) << " -- Jersey number: " << jerseyNumbers[i]
             << ", Rating: " << playerRatings[i] << endl;
    }

    return 0;
}
