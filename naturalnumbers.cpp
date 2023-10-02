// This program reads in a number from the user then output all natural numbers 
// from 1 to the user's number as well as the sum of those numbers

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int userNumber;
    int sum = 0;
    
    cout << "Input a number of terms: ";
    cin >> userNumber;
    cout << "The natural numbers up to " << userNumber << " terms are:" << endl;
    
    for (int i=1; i<=userNumber; i++)
    {
        cout << i << " ";
        sum += i;
    }
    
    cout << endl << endl;
    cout << "The sum of the natural numbers is: " << sum << endl;

    return 0;
}
