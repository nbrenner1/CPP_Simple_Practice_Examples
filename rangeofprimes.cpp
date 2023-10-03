// This program allows the user to define a range in which they would like to check for prime numbers.
// The program then outputs all the primes in that range as well as the total number of primes found.

#include <iostream>
#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main()
{
    int startRange;
    int endRange;
    int numOfPrimes=0;
    int isPrime;
    
    cout << "Input number for start range: ";     // Prompt user for start of range to check
    cin >> startRange;
    cout << "Input number for end range: ";       // Prompt user for end of range to check
    cin >> endRange;
    cout << "The prime numbers between " << startRange << " and " << endRange << " are: " << endl;
    
    if (startRange==1)
    {
        startRange += 1;      // If starting range is 1, make the starting range 2 to avoid 1 being deemed a prime number
    }
    
    for (int i=startRange; i<=endRange; i++)        // FOR loop to check each number in the range
    {
        isPrime=1;                                  // Set isPrime to true to start each loop
        for (int j=2; j<=sqrt(i); j++)              // FOR loop to check if each of the numbers in the range (i) is a prime number
        {
            if (i%j == 0)
            {
                isPrime = 0;                        // Change isPrime to false if a number is found where there is no remainder and break the loop
                break;
            }
        }
        
        if (isPrime==1)                             // If the number is prime, increment the number of primes found and output it to the screen
        {
            numOfPrimes += 1;
            cout << i << " ";
        }
        
    }
    
    cout << endl;
    cout << "The total number of prime numbers between " << startRange << " and " << endRange << " is: " << numOfPrimes << endl;         // Display total primes found
    
    return 0;
}
