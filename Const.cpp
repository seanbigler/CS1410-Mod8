// File: Const.cpp
// Created by Sean Bigler on 11/14/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>
#include "Person.h"

using namespace std;
// Constants, Structs, Classes


// Prototypes
int Double(const int& x);   // Allow to pass reference and pass const

// Main Program
int main()
{
    int i = 3;
    const int ci = 3;
    i = 4;
    // Read only variable
    //ci = 4;

    int j = 10;
    int dj = Double(j);
    int d10 = Double(10);
    //cout << dj << endl;
    //cout << d10 << endl;

    Person Waldo("Waldo", "Wildcat", 234);
    Waldo.setArNumber(456);
    //cout << Waldo.getArNumber() << endl;
    const Person cWaldo = Waldo;
    //cWaldo.setArNumber(987);  Const object, cannot change value

    int wNumber = cWaldo.getArNumber();
    //cout << wNumber << endl;

    int *pi = &i;
    //cout << &i << endl;
    //cout << pi << endl;

    const int *pci = &ci;   // Pointer to const


    Person *pWaldo = &Waldo;
    Person someone("Someone", "Else", 345);
    const Person *pcWaldo = &cWaldo;

    cout << Waldo.getName() << endl;
    cout << pWaldo->getName() << endl;  // Use arrow operator ->


    return 0;
}

// Function Definitions
int Double(const int& x)
{
    return x * 2;
}