//
// Created by w01164264 on 11/9/2017.
//

#ifndef MOD8_DISTANCE_H
#define MOD8_DISTANCE_H


class Distance
{
private:
    int feet;
    float inches;
public:
    class InchesEx{};   // Exception class

    Distance();
    Distance(int f, float i);
    void getDistance();
    void showDistance();
};


#endif //MOD8_DISTANCE_H
