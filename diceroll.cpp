// This program is a simple dice roll game, where each player can press any key to roll the dice. 
// After the roll, the winner is evaluated and printed.

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    srand(time(NULL));
    char anyKey;
    
    cout << "Player 1: press any key to roll the dice" << endl;
    anyKey = getchar();        // Get char function used to require any key is pressed before next line is evaluated
    int userOneNumber = rand()%6 + 1;  // Get random number 1-6
    
    cout << "Player 2: press any key to roll the dice" << endl;
    anyKey = getchar();        // Again, get char function used like above
    int userTwoNumber = rand()%6 + 1;  // Get random number 1-6
    
    cout << "The winner is: ";
    if (userOneNumber > userTwoNumber)
    {
        cout << "Player 1" << endl;
    }
    else if (userTwoNumber > userOneNumber)
    {
        cout << "Player 2" << endl;
    }
    else
    {
        cout << "Draw" << endl;    // If neither roll is higher, it must be a draw
    }

    return 0;
}
