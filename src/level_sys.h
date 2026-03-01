#pragma once
#include <cstdint>

typedef std::uint16_t level_t;
typedef std::uint32_t exp_t;

class Level_sys {

public:
    Level_sys() {
        m_current_level = 1;
        m_current_exp = 0;
    };
    Level_sys() {};

    void gain_exp (exp_t gained_exp) {
        m_current_exp += gained_exp;
    }

    virtual bool level_up() {

    }

protected:
    level_t m_current_level;
    exp_t m_current_exp;
    level_t m_level_up_availible;

};