// File: Accumulator.cpp
// Created by Sean Bigler on 11/21/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>
#include "Accum.h"

using namespace std;
// Constants, Structs, Classes


// Prototypes


// Main Program
int main()
{
    Accum<int> integers(0);
    integers += 3;
    integers += 7;
    cout << integers.GetTotal() << endl;

    Accum<string> mystring("");
    mystring += "hello";
    mystring += " world";
    cout << mystring.GetTotal() << endl;

    //integers += "Weber";  // Types must match!
    //mystring += 4;


    return 0;
}

// Function Definitions