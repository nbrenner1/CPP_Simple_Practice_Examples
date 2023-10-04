// This program prints a multiplication table. The user is prompted to select the size of table they desire.

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tableSize;
    
    cout << "Please enter the size of the table: ";
    cin >> tableSize;                                   // Read in user's desired table size
    int matrix[tableSize][tableSize];                   // Initialize the table with the user's desired size
    
    for (int i=1; i<=tableSize; i++)
    {
        for (int j=1; j<=tableSize; j++)
        {
            matrix[i][j] = i*j;                          // Calculate and save each value of the table
        }
    }
    
    for (int i=1; i<=tableSize; i++)
    {
        for (int j=1; j<=tableSize; j++)
        {
            cout << matrix[i][j] << " ";                  // Print each value of matrix in table form
        }
        
        cout << endl;
    }
    
    return 0;
}
