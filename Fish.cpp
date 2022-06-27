//
// Created by MSY on 6/27/2022.
//

#include <iostream>
#include "Fish.h"

Fish::Fish(const std::string &fishName, const std::string &genericFishName, int size, int minSize, tFishType fishType,
           float weight) : fishName(fishName), genericFishName(genericFishName), size(size), minSize(minSize),
                           fishType(fishType), weight(weight) {}

const std::string &Fish::getFishName() const {
    return fishName;
}

void Fish::setFishName(const std::string &fishName) {
    Fish::fishName = fishName;
}

const std::string &Fish::getGenericFishName() const {
    return genericFishName;
}

void Fish::setGenericFishName(const std::string &genericFishName) {
    Fish::genericFishName = genericFishName;
}

int Fish::getSize() const {
    return size;
}

void Fish::setSize(int size) {
    Fish::size = size;
}

int Fish::getMinSize() const {
    return minSize;
}

void Fish::setMinSize(int minSize) {
    Fish::minSize = minSize;
}

tFishType Fish::getFishType() const {
    return fishType;
}


float Fish::getWeight() const {
    return weight;
}

void Fish::setWeight(float weight) {
    Fish::weight = weight;
}

bool Fish::achivedMinSize() {

    if(size >= minSize){
        return true;
    }
    return false;
}

void Fish::print() const {
    std::cout << "fish name: " << fishName << std::endl;
    std::cout << "generic fish name: " << genericFishName << std::endl;
    std::cout << "fish size: " << size << std::endl;
    std::cout << "fish minimum size: " << minSize << std::endl;
    switch (fishType) {
        case seaFish:
            std::cout << "fish type: seafish " << std::endl;
            break;

        case riverFish:
            std::cout << "fish type: riverFish " << std::endl;
            break;
    }
    std::cout << "fish weight: " << weight << std::endl;
}

std::ostream& operator<<(std::ostream& output, const Fish& fish) {
    fish.print();
    return output;
}
