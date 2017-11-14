//
// Created by w01164264 on 11/14/2017.
//

#ifndef MOD8_PERSON_H
#define MOD8_PERSON_H
#include <iostream>
using namespace std;


class Person
{
private:
    string firstName;
    string lastName;
    int arNumber;
public:
    Person(string fn, string ln, int an);
    ~Person();
    string getName() const; // Return first and last name
    // Setter and Getter for the arNumber
    int getArNumber() const;

    void setArNumber(int arNumber);
    // Operator overload for < and >
    // These should work with int < Person,
    // Person < int, int > Person, Person > int
    bool operator < (Person &p) const;
    bool operator < (int n) const;
    friend bool operator < (int n, const Person &p);


};
bool operator < (int i, const Person &p);

#endif //MOD8_PERSON_H
