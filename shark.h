//
// Created by MSY on 6/27/2022.
//

#ifndef TEST03_SHARK_H
#define TEST03_SHARK_H

#include "Fish.h"

class shark : public Fish {

protected:

    int age;



public:

    shark(const std::string &fishName, int size, float weight, int age);

    int getAge() const;

    void setAge(int age);

    bool canBeCaught();

    void print() const;
};


#endif //TEST03_SHARK_H
