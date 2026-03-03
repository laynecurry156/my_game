#pragma once
#include <cstdint>

typedef std::int16_t stat_t; // 0 - 255


class stat_block {

public:

    //default constructor
    stat_block() {
        m_strength = 1;
        m_intellect = 1;
    }
    explicit stat_block(stat_t new_strength, stat_t new_intellect) { 
        //explicit makes it so only stat_t is excepted
        m_strength = new_strength;
        m_intellect = new_intellect;
    }

    stat_t get_strength () {
        return m_strength;
    }

    stat_t get_intel () {
        return m_intellect;
    }

private:
    stat_t m_strength;
    stat_t m_intellect;

protected:
    void increase_stats(stat_t new_strength, stat_t new_intellect) {
        m_strength += new_strength;
        m_intellect += new_intellect;
    }

};