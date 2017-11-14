// File: FreeStore.cpp
// Created by Sean Bigler on 11/14/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>
#include "Resource.h"

using namespace std;

// Main Program
int main()
{
    {
        Resource localResource("local");
        string localString = localResource.getName();
    }
    Resource *pResource = new Resource("Create with new");
    string newString = pResource->getName();
    cout << newString << endl;

    int j = 3;
    if(j == 2)
    {
        delete pResource;
        return 1;
    }

    Resource *p2 = pResource;   // Pointer Resource to a pointer Resource
    string s3 = p2->getName();

    delete pResource;
    string s4 = pResource->getName();
    cout <<"s4: " << s4 << endl;    // SHOULD NOT BE THERE
    pResource = nullptr;
    delete pResource;   // Crashes your system (Delete same space twice)
    delete p2;
    // Clean
    //delete pResource;

    cout << "Done" << endl;

    return 0;
}
