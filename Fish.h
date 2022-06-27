//
// Created by MSY on 6/27/2022.
//

#ifndef TEST03_FISH_H
#define TEST03_FISH_H

#include <string>

enum tFishType{
    seaFish,
    riverFish
};


class Fish {

protected:

    std::string fishName;
    std::string genericFishName;
    int size;
    int minSize;
    tFishType fishType;
    float weight;


public:

    Fish(const std::string &fishName, const std::string &genericFishName, int size, int minSize, tFishType fishType,
         float weight);

    const std::string &getFishName() const;

    void setFishName(const std::string &fishName);

    const std::string &getGenericFishName() const;

    void setGenericFishName(const std::string &genericFishName);

    int getSize() const;

    void setSize(int size);

    int getMinSize() const;

    void setMinSize(int minSize);

    tFishType getFishType() const;

    float getWeight() const;

    void setWeight(float weight);


    bool achivedMinSize();
    bool virtual canBeCaught() = 0;
    void print() const;

};

std::ostream& operator<<(std::ostream& output, const Fish& fish);

#endif //TEST03_FISH_H
