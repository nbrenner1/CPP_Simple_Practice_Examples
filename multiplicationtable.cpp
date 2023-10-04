// This program prints the basic multiplication table for integers 1-10

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int matrix[10][10];
    
    for (int i=1; i<=10; i++)
    {
        for (int j=1; j<=10; j++)
        {
            matrix[i][j] = i*j;
        }
    }
    
    for (int i=1; i<=10; i++)
    {
        for (int j=1; j<=10; j++)
        {
            cout << matrix[i][j] << " ";
        }
        
        cout << endl;
    }
    
    return 0;
}
