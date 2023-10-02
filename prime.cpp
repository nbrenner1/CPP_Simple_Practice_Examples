// This program checks if a user-entered number is prime or not

#include <iostream>
#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main()
{
    int userNumber;
    bool isPrime = true;       // Initialize isPrime to true
    
    cout << "Please enter a number to check prime or not: ";    // Get number from user
    cin >> userNumber;
    
    for (int i=2; i<=sqrt(userNumber); i++)        // Check up to sqrt(userNumber)
    {
        if (userNumber % i == 0)             // If the number can be divided by some number equal or greater than two and less than or equal to the square root of itself, it is not a prime number
        {
            isPrime = false;       // Set isPrime to false and break the FOR loop
            break;
        }
    }
    
    if (isPrime)
    {
        cout << "The entered number is a prime number" << endl;
    }
    else
    {
       cout << "The entered number is not a prime number" << endl; 
    }

    return 0;
}
