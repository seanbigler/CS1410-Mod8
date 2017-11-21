//
// Created by w01164264 on 11/21/2017.
//

#ifndef MOD8_ACCUM_H
#define MOD8_ACCUM_H

template <class T>
class Accum
{
private:
    T total;
public:
    Accum(T start): total(start){};
    T operator += (const T &t)
    {
        return total = total + t;
    }
    T GetTotal()
    {
        return total;
    }
};

#endif //MOD8_ACCUM_H
