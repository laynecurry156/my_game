#pragma once
#include "hp.h"
#include "stat_block.h"

class Necro : public hp, public stat_block {

public:
    static const hp_t HP_GROWTH = 12;
    static const stat_t BASE_STRENGTH = 2;
    static const stat_t BASE_INTEL = 3;
    Necro();

private:


};

Necro::Necro() : hp(HP_GROWTH, HP_GROWTH), stat_block(BASE_STRENGTH, BASE_INTEL) {

}