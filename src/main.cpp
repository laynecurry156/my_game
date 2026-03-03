#include <iostream>
#include "all_classes.h"

int main () {

    Cleric cler1;

    for (int i = 0; i < 10; i++) {
        std::cout << "Cleric:\n"
            << "Max HP | Current HP: " << cler1.get_max_hp() << " | " << cler1.get_current_hp() << "\n"
            << "Strength: " << cler1.get_strength() << "\n"
            << "Intellect: " << cler1.get_intel() << "\n"
            << "Level: " << cler1.get_level() << "\n"
            << "EXP: " << cler1.get_current_exp() << "/" << cler1.get_exp_to_next_level() << "\n"
            << "-----------------------------\n";
        cler1.gain_exp(100);
    }

    return 0;
}