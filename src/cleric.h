#pragma once
#include "hp.h"
#include "stat_block.h"
#include "level_sys.h"

class Cleric : public hp, public stat_block, public Level_sys {

public:
    static const hp_t BASE_HP = 11;
    static const stat_t BASE_STRENGTH = 2;
    static const stat_t BASE_INTEL = 2;

    static const hp_t HP_GROWTH = 6;
    static const stat_t STRE_GROWTH = 1;
    static const stat_t INTE_GROWTH = 2;

    Cleric();

private:
    void level_up() override {
        set_max_hp(get_max_hp() + HP_GROWTH);
        increase_stats(STRE_GROWTH, INTE_GROWTH);
    }

};

Cleric::Cleric() : hp(BASE_HP, BASE_HP), stat_block(BASE_STRENGTH, BASE_INTEL) {

}