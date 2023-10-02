// Simple program to print all evens between 1 and 100

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    for (int i=1; i<=100; i++)
    {
        if (i%2==0)        // Can change "2" to whatever in order to print out different multiples
        {
            cout << i << endl;      // If there is no remainder when dividing the number by 2, it is an even number so it is printed
        }
    }
    
    return 0;
}
