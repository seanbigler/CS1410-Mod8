// File: exception1.cpp
// Created by Sean Bigler on 11/9/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>

using namespace std;
// Constants, Structs, Classes
const int MAX = 3;
class Stack
{
private:
    int st[MAX];
    int top;
public:
    class Range     // Exception class for Stack
    {
        // note: Empty class
    };

    Stack()         // Default constructor
    {top = -1;}

    void push(int var)
    {
        if (top >= MAX - 1) // if stack is full
        {
            throw Range();  // Throw exception
        }
        st[++top] = var;    // Put number on stack
    }
    int pop()
    {
        if (top < 0)
        {
            throw Range();  // Throw exception
        }
        return st[top--];
    }

};

// Prototypes


// Main Program
int main()
{
    Stack s1;
    try
    {
        s1.push(11);
        s1.push(12);
        s1.push(13);
        s1.push(14);    // Stack is FULL

        cout << "1: " << s1.pop() << endl;
        cout << "2: " << s1.pop() << endl;
        cout << "3: " << s1.pop() << endl;
        cout << "4: " << s1.pop() << endl;

    }
    catch(Stack::Range) // Exception handler
    {
        cout << "Exception: Stack Full or Empty" << endl;
    }
    cout << "Done" << endl;


    return 0;
}

// Function Definitions