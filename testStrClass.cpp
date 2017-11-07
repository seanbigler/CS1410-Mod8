// File: strClass.cpp
// Created by Sean Bigler on 11/7/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>
#include "MyString.h"

using namespace std;
// Constants, Structs, Classes


// Prototypes


// Main Program
int main()
{
    MyString s1 = "Who knows nothing doubts nothing";
    cout << "s1 = ";
    s1.Display();

    s1.updateString("Now this is what I call music");
    cout << "s1 = ";
    s1.Display();

    return 0;
}

// Function Definitions