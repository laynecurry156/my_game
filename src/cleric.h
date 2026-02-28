#pragma once
#include "hp.h"
#include "stat_block.h"

class Cleric : public hp, public stat_block {

public:
    static const hp_t HP_GROWTH = 11;
    static const stat_t BASE_STRENGTH = 2;
    static const stat_t BASE_INTEL = 2;
    Cleric();

private:


};

Cleric::Cleric() : hp(HP_GROWTH, HP_GROWTH), stat_block(BASE_STRENGTH, BASE_INTEL) {

}