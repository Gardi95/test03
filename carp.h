//
// Created by MSY on 6/27/2022.
//

#ifndef TEST03_CARP_H
#define TEST03_CARP_H

#include "Fish.h"

class carp : public Fish {

protected:

    bool scales;
    int age;


public:
    carp(const std::string &fishName, int size, float weight, bool scales, int age);

    bool isScales() const;

    void setScales(bool scales);

    int getAge() const;

    void setAge(int age);

    bool canBeCaught();

    void print() const;

};


#endif //TEST03_CARP_H
