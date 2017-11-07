// File: DynamicIntArray
// Created by Sean Bigler on 11/7/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>

using namespace std;
// Constants, Structs, Classes


// Prototypes


// Main Program
int main()
{
    double sum = 0.0;
    int size;
    // Capture input
    cout << "How many numbers would you like to store? ";
    cin >> size;
    // Allocate array of doubles based on input
    double *info = new double[size];
    // Fill in the values
    for (int i = 0; i < size; i++)
    {
        cout << "Enter a double value: ";
        cin >> info[i];
    }
    // Display values
        // keep track of sum of values
    for (int i = 0; i < size; i++)
    {
        sum += info[i];
        cout << i << " value: " << info[i] << endl;
    }

    // Display sum
    cout << "Sum is " << sum << endl;

    // Clean
    delete[] info;


    return 0;
}

// Function Definitions