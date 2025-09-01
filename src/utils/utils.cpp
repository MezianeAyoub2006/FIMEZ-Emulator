#include "utils.h"

void displayBits(int8_t value) {
    uint8_t unsigned_value = static_cast<uint8_t>(value);
    for (int i = 0; i < 8; i++) {
        bool bit = (unsigned_value & (1 << (7 - i))) != 0;
        std::cout << bit;
    };
    std::cout << std::endl; 
};

int getFlag(int first_value, int second_value) {
    if (first_value == second_value) {
        return 0;
    } else if (first_value > second_value) {
        return 1; 
    } else if (first_value < second_value) {
        return 2;
    };
    return -1;
}
