#pragma once
#include "stat_type.h"

class stat_block {

public:

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

    stat_t get_strength () {
        return strength;
    }

    stat_t get_intel () {
        return intellect;
    }

private:
    stat_t strength;
    stat_t intellect;

};