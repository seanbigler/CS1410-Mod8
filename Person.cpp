//
// Created by w01164264 on 11/14/2017.
//

#include "Person.h"

Person::Person(string fn, string ln, int an)
{
    firstName = fn;
    lastName = ln;
    arNumber = an;
//    pResource = NULL;   // prior to C++ 11
    //pResource = nullptr;    //C++ 11  Not needed for smart pointers

}

Person::~Person()
{
    //delete pResource;
}
/**
 * Gets Full name for person
 * @return fullName
 */
string Person::getName()
{
    string fullName = firstName + " " + lastName;
    return fullName;
}

int Person::getArNumber()
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
bool Person::operator<(Person &p)
{

    return arNumber < p.arNumber;
}
/**
 * Compare Person < int
 * @param n : int number
 * @return True or False
 */
bool Person::operator<(int n)
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
/**
 *
 */
void Person::AddResource()
{
    // Resource r("hello");
    //pResource = &r;       // Only lives within this method
    //delete pResource;     // Not needed for smart pointers
    pResource.reset();
    //pResource = new Resource("Resource for " + getName());
    pResource = make_shared<Resource>("Resource for " + getName());
}

void Person::setFirstName(const string &firstName)
{
    Person::firstName = firstName;
}

void Person::setLastName(const string &lastName)
{
    Person::lastName = lastName;
}

string Person::getResourceName()
{

    return pResource->getName();
}
/**
 * Copy Constructor
 * @param p
 */
//Person::Person(const Person &p)
//{
//    firstName = p.firstName;
//    lastName = p.lastName;
//    arNumber = p.arNumber;
//    //pResource = p.pResource;  // DO NOT copy reference
//    // Need to create your own memory
//    pResource = new Resource(p.pResource->getName());
//}

//Person &Person::operator=(const Person &p)
//{
//    firstName = p.firstName;
//    lastName = p.lastName;
//    arNumber = p.arNumber;
//    delete pResource;
//    pResource = new Resource(p.pResource->getName());
//
//
//    return *this;   // return yourself
//}

