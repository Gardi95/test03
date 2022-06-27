//
// Created by MSY on 6/27/2022.
//

#include <iostream>
#include "carp.h"

carp::carp(const std::string &fishName, int size, float weight, bool scales, int age) : Fish(fishName, "carp", size, 55, riverFish, weight),
                                                 scales(scales), age(age) {}

bool carp::isScales() const {
    return scales;
}

void carp::setScales(bool scales) {
    carp::scales = scales;
}

int carp::getAge() const {
    return age;
}

void carp::setAge(int age) {
    carp::age = age;
}

bool carp::canBeCaught() {

    if(age > 2 && achivedMinSize()) {
        return true;
    }

    return false;
}

void carp::print() const {
    Fish::print();
    std::cout << "fish age: " << age << std::endl;
    if(scales) {
        std::cout << "fish has scales " << std::endl;
    } else {
        std::cout << "fish does not have scales " << std::endl;
    }
}

