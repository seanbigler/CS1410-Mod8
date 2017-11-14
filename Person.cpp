//
// Created by w01164264 on 11/14/2017.
//

#include "Person.h"

Person::Person(string fn, string ln, int an)
{
    firstName = fn;
    lastName = ln;
    arNumber = an;
}

Person::~Person()
{

}

string Person::getName() const
{
    string fullName = firstName + " " + lastName;
    return fullName;
}

int Person::getArNumber() const
{
    return arNumber;
}

void Person::setArNumber(int arNumber)
{
    Person::arNumber = arNumber;
}
/**
 * compare Person with Person
 * @param p : reference to person
 * @return True or False
 */
bool Person::operator<(Person &p) const
{

    return arNumber < p.arNumber;
}
/**
 * Compare Person < int
 * @param n : int number
 * @return True or False
 */
bool Person::operator<(int n) const
{
    return arNumber < n;
}
/**
 * Compare int < Person
 * @param n :int number
 * @param p :Person reference
 * @return True or False
 */
bool operator<(int n, const Person &p)
{
    return n < p.arNumber;
}
