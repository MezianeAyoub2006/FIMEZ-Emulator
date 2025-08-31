#include <iostream>
#include <cstdint>
#include <cstring>
#include "../specs.h"

class CPU {
private :
    int8_t RAM[RAM_SIZE * 1024]; 
    int8_t ROM[ROM_SIZE * 1024];
    int8_t REGISTERS[N_REGISTERS];
    uint8_t SP;
    uint8_t PC;
    uint8_t FLAG;
public : 
    CPU();   
    int8_t readRam(uint16_t addr) const;
    void writeRam(uint16_t addr, int8_t value);
    int8_t readRom(uint16_t addr) const;
    int8_t readRegister(int register_) const;
    void writeRegister(int register_, int8_t value);
};
