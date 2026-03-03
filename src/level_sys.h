#pragma once
#include <cstdint>

typedef std::uint16_t level_t;
typedef std::uint64_t exp_t;

class Level_sys {

public:
    static const exp_t LEVEL_2_AT = 100;

    Level_sys() {
        m_current_level = 1;
        m_current_exp = 0;
        m_exp_to_next_level = LEVEL_2_AT;
    };

    void gain_exp (exp_t gained_exp) {
        m_current_exp += gained_exp;
        while (gain_level()) {}
    }

    level_t get_level() {
        return m_current_level;
    }

    exp_t get_current_exp() {
        return m_current_exp;
    }

    exp_t get_exp_to_next_level() {
        return m_exp_to_next_level;
    }



    virtual void level_up() = 0;

protected:
    level_t m_current_level;
    exp_t m_current_exp;
    exp_t m_exp_to_next_level;

    bool gain_level() {
        static const level_t LEVEL_SCALAR = 2; //static const so the variable doesn't get created a bunch of times

        //base case:
        if (m_current_exp < 100) return false;

        if (m_current_exp > m_exp_to_next_level) {
            m_current_level++;
            level_up();
            m_exp_to_next_level *= LEVEL_SCALAR;
            return true;
        }

        return false;
    }

};