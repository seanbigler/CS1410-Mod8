// File: Memory.cpp
// Created by Sean Bigler on 11/16/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>
#include "Person.h"
using namespace std;


// Main Program
int main()
{
    Person Waldo("Waldo", "Wildcat", 123);
    Waldo.AddResource();
    Waldo.setFirstName("WaldoJr");
    Waldo.AddResource();

    Person WaldoSr = Waldo;

    Waldo = WaldoSr;

    string s1 = Waldo.getResourceName();
    cout << "\ns1 = " << s1 << endl;


    return 0;
}
