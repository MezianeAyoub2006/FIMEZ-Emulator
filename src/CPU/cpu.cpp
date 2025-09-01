#include "cpu.h"


CPU::CPU() {
    memset(RAM, 0, sizeof(RAM));
    memset(ROM, 0, sizeof(ROM));
    memset(REGISTERS, 0, sizeof(REGISTERS));
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

void CPU::setFlag(uint8_t value) {
    FLAG = value;
};

void CPU::setSP(uint8_t value) {
    SP = value;
};

void CPU::setPC(uint8_t value) {
    PC = value;
};


uint8_t CPU::getFlag() {
    return FLAG;
};

uint8_t CPU::getSP() {
    return SP;
};

uint8_t CPU::getPC() {
    return PC;
}

void CPU::debugRegisters() {
    for (int i = 0; i < N_REGISTERS; i++) {
        std::cout << "R";
        std::cout << i; 
        std::cout << " : ";
        std::cout << (int)readRegister(i);
        std::cout << " , ";
        displayBits(readRegister(i));
    }
}