//
// Created by MSY on 6/27/2022.
//

#ifndef TEST03_FISHNET_H
#define TEST03_FISHNET_H

#include "Fish.h"
#include <string>

class fishnet {

protected:

    std::string name;
    Fish* setOfFish[5] = {};

public:

    fishnet(const std::string &name);

    const std::string &getName() const;

    void setName(const std::string &name);

    Fish *const *getSetOfFish() const;


};


#endif //TEST03_FISHNET_H
