// File: FileInOut
// Created by Sean Bigler on 11/30/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>
#include <fstream>  // File Stream library
#include <vector>

using namespace std;

// Main Program
int main()
{
    ifstream inFS;  // input file stream
    ofstream outFS; // output file stream
    int fileNum1 = 0;
    int fileNum2 = 0;
    vector<int> nums;

    // Try to open the file
    cout << "Opening file myfile.txt" << endl;
    inFS.open("../myfile.txt"); //  ../ means one file above      // Relative path
    //inFS.open("C:\\Users\\w01164264\\CS1410-Mod8\\myfile.txt");   // Absolute path

    if(!inFS.is_open())
    {
        cout << "Could not open file myfile.txt" << endl;
        return 1;
    }

    // Now use inFS
    cout << "Reading two integers" << endl;
//    inFS >> fileNum1;
//    inFS >> fileNum2;
        // By hand
//    inFS >> fileNum1;
//    nums.push_back(fileNum1);
//    inFS >> fileNum2;
//    nums.push_back(fileNum2);
//    inFS >> fileNum2;
//    nums.push_back(fileNum2);
    // Using a loop
    while(!inFS.eof())
    {
        inFS >> fileNum1;
        // Check previous stream operation had no problems
        if(inFS.good())
        {
            cout << "num: " << fileNum1 << endl;
        }
        else
        {
            cout << "bad record" << endl;
        }
        nums.push_back(fileNum1);
    }

    cout << "Opening file myout.txt" << endl;
    outFS.open("../myout.txt"); //  ../ means one file above      // Relative path
    //inFS.open("C:\\Users\\w01164264\\CS1410-Mod8\\myfile.txt");   // Absolute path

    if(!outFS.is_open())
    {
        cout << "Could not open file myout.txt" << endl;
        return 1;
    }
    for (auto item:nums)
    {
        cout << item << endl;   // write to string
        outFS << item << endl;
    }


    for (auto item:nums)
    {
        cout << item << endl;
    }

    cout << "Num1: " << fileNum1 << endl;
    cout << "Num2: " << fileNum2 << endl;

    inFS.close();

    return 0;
}
