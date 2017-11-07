//
// Created by w01164264 on 11/7/2017.
//

#ifndef MOD8_MYSTRING_H
#define MOD8_MYSTRING_H


class MyString
{
private:
    char *str;  // pointer to string
public:
    MyString(char*s);   // constructor with one argument
    ~MyString();        // Destructor

    void Display();     // Display string
    void updateString(char *newStr);

};


#endif //MOD8_MYSTRING_H
