//
// Created by MSY on 6/27/2022.
//

#include "fishnet.h"

fishnet::fishnet(const std::string &name) : name(name) {}

const std::string &fishnet::getName() const {
    return name;
}

void fishnet::setName(const std::string &name) {
    fishnet::name = name;
}

Fish *const *fishnet::getSetOfFish() const {
    return setOfFish;
}
