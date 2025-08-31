#include "utils.h"

void writeBits(int8_t value) {
    uint8_t unsigned_value = static_cast<uint8_t>(value);
    for (int i = 0; i < 8; i++) {
        bool bit = (unsigned_value & (1 << (7 - i))) != 0;
        std::cout << bit;
    };
    std::cout << std::endl; 
} 

