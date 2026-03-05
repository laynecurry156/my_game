#pragma once
#include <cstdint>

typedef std::int16_t point_t;


class Point_well {

    public:

    //default constructor 
    Point_well() { 
        current_val = 1;
        max_val = 1;
    }
    Point_well(point_t current, point_t max) {
        current_val = current;
        max_val = max;
        if (current_val > max_val) current_val = max_val;
    }

    bool set_max_val (point_t new_max_val) {
        if (new_max_val < 1) {
            return false;
        } 

        max_val = new_max_val;

        if (current_val > max_val) {
            current_val = max_val;
        }

        return true;
    }

    point_t get_max_val () {
        return max_val;
    }

    point_t get_current_val () {
        return current_val;
    }

    void reduce (point_t damage) {
        if (damage >= current_val) {
            current_val = 0;
            return;
        }

        current_val -= damage;
    }

    void increase (point_t amount_healed) {
        if (amount_healed + current_val > max_val) {
            current_val = max_val;
            return;
        }

        current_val += amount_healed;
    }

    private:
    point_t current_val;
    point_t max_val;

};