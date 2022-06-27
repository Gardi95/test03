#include <iostream>

#include "Fish.h"
#include "fishnet.h"
#include "shark.h"
#include "carp.h"

int main() {

    carp* c01 = new carp("kokomi", 159, 46, false, 27);
    carp* c02 = new carp("nami", 166, 56, true, 32);

    shark* s01 = new shark("baby shark", 80, 22, 9);
    shark* s02 = new shark("mama shark", 180, 66, 33);


    fishnet* f01 = new fishnet("jack the reaper");

    f01->setFish(c01);
    f01->setFish(c02);
    f01->setFish(s01);
    f01->setFish(s02);

    f01->print(f01);


    return 0;
}
