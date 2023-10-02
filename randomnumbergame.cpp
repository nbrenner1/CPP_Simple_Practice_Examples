// Simple random number guessing game

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    srand(time(NULL));              // Seed time
    int randomNumber = (rand()%1000) + 1;  // Select a random number between 1 and 1000
    int userGuess;
    
    cout << "Please enter your guess (1-1000): ";      // Read in user guess
    cin >> userGuess;
    
    while (userGuess != randomNumber)
    {
        if (userGuess < randomNumber)         // Notify that guess is too low
        {
            cout << "Too low - guess again: ";
            cin >> userGuess;
        }
        
        else                      // Notify that guess is too high
        {
            cout << "Too high - guess again: ";
            cin >> userGuess;
        }
    }
    
    cout << "You got it!" << endl;          // WHILE loop broken when correct answer is given
 
    return 0;
}
