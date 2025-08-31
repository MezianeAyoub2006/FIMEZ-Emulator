#include "cpu.h"


CPU::CPU() {
    memset(RAM, 0, sizeof(RAM));
    memset(ROM, 0, sizeof(ROM));
}

int8_t CPU::readRam(uint16_t addr) const {
    return RAM[addr];
};

int8_t CPU::readRom(uint16_t addr) const {
    return ROM[addr];
};

void CPU::writeRam(uint16_t addr, int8_t value) {
    RAM[addr] = value;
};

int8_t CPU::readRegister(int register_) const {
    return REGISTERS[register_];
};

void CPU::writeRegister(int register_, int8_t value) {
    REGISTERS[register_] = value;
};