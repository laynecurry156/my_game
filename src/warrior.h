#pragma once
#include "hp.h"
#include "stat_block.h"

class Warrior : public hp, public stat_block {

public:
    static const hp_t HP_GROWTH = 19;
    static const stat_t BASE_STRENGTH = 10;
    static const stat_t BASE_INTEL = 1;
    Warrior();

private:


};

Warrior::Warrior() : hp(HP_GROWTH, HP_GROWTH), stat_block(BASE_STRENGTH, BASE_INTEL) {

}