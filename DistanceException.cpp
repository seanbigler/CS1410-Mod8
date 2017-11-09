// File: DistanceException.cpp
// Created by Sean Bigler on 11/9/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>
#include "Distance.h"

using namespace std;

// Main Program
int main()
{
    try
    {
        Distance d1(17, 3.5);
        Distance d2;
        d2.getDistance();

        cout << "\nd1: ";
        d1.showDistance();
        cout << "\nd2: ";
        d2.showDistance();


    }
    catch(Distance::InchesEx)
    {
        cout << "Initialization Error"
             "Inches value too large";
    }

    // Continue here
    cout << "\nMore work here. I am not dead";

    return 0;
}

// Function Definitions