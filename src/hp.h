#pragma once
#include "hp_type.h"

class hp {

    public:

    bool set_max_hp (hp_t new_max_hp) {
        if (new_max_hp < 1) {
            return false;
        } 

        max_hp = new_max_hp;

        if (current_hp > max_hp) {
            current_hp = max_hp;
        }

        return true;
    }

    hp_t get_max_hp () {
        return max_hp;
    }

    hp_t get_current_hp () {
        return current_hp;
    }

    void take_damage (hp_t damage) {
        if (damage >= current_hp) {
            current_hp = 0;
            return;
        }

        current_hp -= damage;
    }

    void heal (hp_t amount_healed) {
        if (amount_healed + current_hp > max_hp) {
            current_hp = max_hp;
            return;
        }

        current_hp += amount_healed;
    }

    private:
    //hp_t shield_hp;
    hp_t current_hp;
    hp_t max_hp;

};