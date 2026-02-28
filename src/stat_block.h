#pragma once
#include "stat_type.h"

struct stat_block {

    stat_t strength;
    stat_t intellect;

    //default constructor
    stat_block() {
        strength = 1;
        intellect = 1;
    }
    explicit stat_block(stat_t new_strength, stat_t new_intellect) { 
        //explicit makes it so only stat_t is excepted
        strength = new_strength;
        intellect = new_intellect;
    }

};