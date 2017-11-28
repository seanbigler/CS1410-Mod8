// File: PlayVectors.cpp
// Created by Sean Bigler on 11/28/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
// Constants, Structs, Classes


// Prototypes


// Main Program
int main()
{
    vector<int> v;
    v.push_back(3); // add a member
    v.push_back(99);
    v.push_back(-23);
    v.push_back(6);

    //cout << v[0] << endl;

    //  Loop through all members using auto iterator with a range
    // auto = automatically get variable type
    for (auto i = v.begin(); i != v.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;


    // Loop through using index notation
    for (unsigned int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;


    // Using directly an iterator
    for (auto item:v)
    {
        cout << item << " ";
    }
    cout << endl;


    for (auto i = v.rbegin(); i != v.rend(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;


    // Display the max, min, and sort your array

    sort(begin(v), end(v));

    for (auto item:v)
    {
        cout << item << " ";
    }
    cout << endl;
    // Find maximum element
    auto result = max_element(begin(v), end(v));
    auto minresult = min_element(begin(v), end(v));
    cout << "Max is: " <<  v[distance(v.begin(), result)] << endl;
    // or
    cout << "Max is: " << *result << endl;
    cout << "Min is: " << *minresult << endl;


    return 0;
}

// Function Definitions