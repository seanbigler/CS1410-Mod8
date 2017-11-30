// File: PlayVectors.cpp
// Created by Sean Bigler on 11/28/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include "Person.h"

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

    // Vector of objects

    vector<Person> vp;
    Person Waldo("Waldo", "Wildcat", 123);
    Person Vandy("Vandy", "Vanderbilt", 678);
    vp.push_back(Waldo);
    vp.push_back(Vandy);
    // Use iterator to get objects
    for (auto ip = vp.begin(); ip != vp.end(); ip++)
    {
        cout << ip->getName() << endl;
        // Requires object to have output << operator defined
        cout << *ip << endl;
    }

    // MAPs
    map<int, Person> people;
    //      key of type int         value of type Person
    people[Waldo.getArNumber()] = Waldo;
    // IF the key exists, you update the value,
    // ELSE you create the value
    people[Vandy.getArNumber()] = Vandy;
    for (auto ip = people.rbegin(); ip != people.rend(); ip++)
    {
        // Two components of map are:
        // key -> first                 value -> second
        cout << ip->first << " " << ip->second.getName() << endl;
    }
    Person Elmo("Elmo", "Street", 100);
    people[123] = Elmo;
    people[124] = Elmo;

    for (auto item:people)
    {
        cout << item.first << " " << item.second.getName() << endl;
    }



    return 0;
}

// Function Definitions