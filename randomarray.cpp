// This program generates a random array of 100 integers before evaluating the minimum and maximum values as well as the average of the values.
// The minimum, maximum, and average are all found using functions and pointers.
// The final results are printed to the user at the end.

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void findMin(int *min, int arr[], int arrSize)
{
    *min = arr[0];
    for (int i=0; i<arrSize; i++)
    {
        if (arr[i]<*min)
        {
            *min = arr[i];
        }
    }
}

void findMax(int *max, int arr[], int arrSize)
{
    *max = arr[0];
    for (int i=0; i<arrSize; i++)
    {
        if (arr[i]>*max)
        {
            *max = arr[i];
        }
    }
}

void findAverage(float *average, int arr[], int arrSize)
{
    int sum=0;
    
    for (int i=0; i<arrSize; i++)
    {
        sum += arr[i];
    }
    
    *average = (sum/arrSize);
}


int main()
{
    srand(time(NULL));
    int arraySize = 100;
    int randomArray[arraySize];
    int min;
    int max;
    float average;
    
    for (int i=0; i<arraySize; i++)
    {
        randomArray[i] = rand()%101;
    }
    
    findMin(&min, randomArray, arraySize);
    findMax(&max, randomArray, arraySize);
    findAverage(&average, randomArray, arraySize);
    
    cout << "The max value in this array is: " << max << endl;
    cout << "The min value in this array is: " << min << endl;
    cout << "The average of the values in this array is: " << average << endl;

    return 0;
}
