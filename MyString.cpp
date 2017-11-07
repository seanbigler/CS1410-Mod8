//
// Created by w01164264 on 11/7/2017.
//

#include <cstring>
#include <iostream>
#include "MyString.h"
using namespace std;
/**
 * Constructor
 * @param s
 */
MyString::MyString(char *s)
{
    int length = strlen(s);   // length of input string

    // Get memory
    str = new char[length + 1];
    strcpy(str, s); // copy argument to new allocated space, and save address to str


}
/**
 * Destructor
 */
MyString::~MyString()
{
    cout << "Deleting memory" << endl;
    delete []str;
}

void MyString::Display()
{
    cout << str << endl;
}
/**
 * Update String. Allocate new memory,
 * change pointer to new space, and
 * delete old memory
 * @param newStr
 */
void MyString::updateString(char *newStr)
{
    int length = strlen(newStr);
    char *temp = new char[length+1];    // allocate new memory
    strcpy(temp, newStr);
    cout << "Deleting old memory" << endl;
    delete[] str;   // Delete
    str = temp;     // Point to new allocated space


}
