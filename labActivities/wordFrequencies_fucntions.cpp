#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;

/* Define your function here */
int GetWordFrequency(vector<string> wordsList, string currWord)
{
    int frequency = 0;
    for (int i = 0; i < wordsList.size(); ++i)
    {
        if (wordsList[i] == currWord)
        {
            frequency++;
        }
    }
    return frequency;
}

int main()
{
    /* Type your code here */
    int vectorlist;
    cin >> vectorlist;

    vector<string> wordsListBucket(vectorlist);

    for (int i = 0; i < wordsListBucket.size(); ++i)
    {
        cin >> wordsListBucket[i];
        cout << wordsListBucket[i] << endl;
    }
    cout << wordsListBucket[0] << wordsListBucket[1];

    return 0;
}
