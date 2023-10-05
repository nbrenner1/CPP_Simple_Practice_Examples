// This program allows the user to select how many fibonacci numbers they would like to see before outputing that many terms of the fibonacci sequence

#include <iostream>

using namespace std;

int main()
{
    int x=0;
    int y=1;
    int temp;
    int userNumber;
    
    cout << "How many fibonacci numbers would you like: ";
    cin >> userNumber;
    
    for (int i=0; i<userNumber; i++)
    {
        cout << x << " ";
        temp = x+y;
        x = y;
        y = temp;
    }

    return 0;
}
