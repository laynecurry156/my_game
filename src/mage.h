#pragma once
#include "hp.h"
#include "stat_block.h"

class Mage : public hp, public stat_block {

public:
    static const hp_t HP_GROWTH = 10;
    static const stat_t BASE_STRENGTH = 1;
    static const stat_t BASE_INTEL = 4;
    Mage();

private:


};

    Mage::Mage() : hp(HP_GROWTH, HP_GROWTH), stat_block(BASE_STRENGTH, BASE_INTEL) {

}