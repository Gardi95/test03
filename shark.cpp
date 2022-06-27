//
// Created by MSY on 6/27/2022.
//

#include <iostream>
#include "shark.h"

shark::shark(const std::string &fishName, int size,
             float weight, int age) : Fish(fishName, "shark", size, 0, seaFish, weight), age(age) {}

int shark::getAge() const {
    return age;
}

void shark::setAge(int age) {
    shark::age = age;
}

bool shark::canBeCaught() {
    return true;
}

void shark::print() const {
    Fish::print();
    std::cout << "shark age: " << age << std::endl;
}
