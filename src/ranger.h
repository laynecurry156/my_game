#pragma once
#include "hp.h"
#include "stat_block.h"

class Ranger : public hp, public stat_block {

public:
    static const hp_t HP_GROWTH = 14;
    static const stat_t BASE_STRENGTH = 3;
    static const stat_t BASE_INTEL = 1;
    Ranger();

private:


};

Ranger::Ranger() : hp(HP_GROWTH, HP_GROWTH), stat_block(BASE_STRENGTH, BASE_INTEL) {

}