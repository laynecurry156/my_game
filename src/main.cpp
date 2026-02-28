#include <iostream>
#include "all_classes.h"

int main () {

    Mage mage1;

    std::cout << "Mage HP (max | current): " << mage1.get_max_hp() << " | " << mage1.get_current_hp(); 
    std::cout << "\nMage Strength | Intellect: " << mage1.get_strength() << " | " << mage1.get_intel() << std::endl;

    return 0;
}