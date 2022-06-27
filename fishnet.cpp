//
// Created by MSY on 6/27/2022.
//

#include <iostream>
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

bool fishnet::setFish(Fish *fish) {

    if(numberOfCaughtFish() < 5){
        setOfFish[numberOfCaughtFish()] = fish;
        return true;
    }

    return false;
}

int fishnet::numberOfCaughtFish() {

    int number = 0;
    for(int i = 0; i < 5; i++) {
        if(setOfFish[i] == NULL) {
            number++;
        }
    }
    return number;
}

bool fishnet::fishCanBeCaught() {

    for(int i = 0; i < 5; i++) {
        if(setOfFish[i]->canBeCaught()) {
            return true;
        }
    }
    return false;
}

void fishnet::print() const {
    for(int i = 0; i < 5; i++) {
        if(setOfFish[i] == NULL) {
            std::cout << "null" << std::endl;
        } else {
            std::cout << "fish name: " << setOfFish[i]->getFishName() << std::endl;
        }
    }

}
