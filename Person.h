//
// Created by w01164264 on 11/14/2017.
//

#ifndef MOD8_PERSON_H
#define MOD8_PERSON_H
#include <iostream>
#include <memory>   // for smart pointers
#include "Resource.h"
using namespace std;


class Person
{
private:
    string firstName;
    string lastName;
    int arNumber;
    //Resource *pResource;    // Raw pointer
    shared_ptr<Resource> pResource; // Shared pointer
public:
    Person(string fn, string ln, int an);

    Person();

    //Person(const Person &p);  // copy constructor - not needed with smart pointer
    ~Person();
    string getName() ; // Return first and last name
    // Setter and Getter for the arNumber
    int getArNumber() ;

    void setArNumber(int arNumber);

    void setFirstName(const string &firstName);

    void setLastName(const string &lastName);

    string getResourceName() ;

    // Operator overload for < and >
    // These should work with int < Person,
    // Person < int, int > Person, Person > int
    bool operator < (Person &p);
    bool operator < (int n);
    friend bool operator < (int n, const Person &p);

    //Person& operator = (const Person &p);

    void AddResource();

    friend ostream &operator<<(ostream &os, const Person &person);

};
bool operator < (int i, const Person &p);

#endif //MOD8_PERSON_H
