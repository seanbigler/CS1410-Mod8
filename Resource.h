//
// Created by w01164264 on 11/14/2017.
//

#ifndef MOD8_RESOURCE_H
#define MOD8_RESOURCE_H
#include<iostream>
using namespace std;

class Resource
{
private:
    string name;
public:
    Resource(string n);
    ~Resource();
    string getName() const;
};


#endif //MOD8_RESOURCE_H
