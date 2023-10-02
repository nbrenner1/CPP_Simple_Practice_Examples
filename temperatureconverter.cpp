// Simple temperature system converter (F to C or C to F)

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    char temperatureSystem;
    float enteredTemperature;
    float convertedTemperature;
    
    cout << "Please choose the metrics you will use (F or C): ";    // Allow user to select their input temperature system
    cin >> temperatureSystem;
    
    if (temperatureSystem=='F')          // Convert from Fahrenheit to Celsius
    {
        cout << "Input the temperature in Fahrenheit: ";
        cin >> enteredTemperature;
        
        convertedTemperature = (enteredTemperature-32) * (5.0/9.0);
        cout << "The temperature in Celsius: " << convertedTemperature << endl;
    }
    
    else                                // Convert from Celsius to Fahrenheit
    {
        cout << "Input the temperature in Celsius: ";
        cin >> enteredTemperature;
        
        convertedTemperature = (enteredTemperature*(9.0/5.0)) + 32;
        cout << "The temperature in Fahrenheit: " << convertedTemperature << endl;
    }
    
    return 0;
}
