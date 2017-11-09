//
// Created by w01164264 on 11/9/2017.
//

#include "Distance.h"
#include <iostream>
using namespace std;

Distance::Distance()
{
    feet = 0;
    inches = 0.0;
}

Distance::Distance(int f, float i)
{
    feet = f;
    inches = i;
}

void Distance::getDistance()
{
    cout << "\nEnter feet: ";
    cin >> feet;
    cout << "\nEnter inches: ";
    cin >> inches;
    if (inches >= 12)
    {
        throw InchesEx();
    }
}

void Distance::showDistance()
{
    cout << feet << "\' " << inches << "\"" << endl;
}
