#include "interpreter.h"

void Interpreter::add00(int register_, int8_t value) {
    cpu.writeRegister(register_, cpu.readRegister(register_) + value);
}
void Interpreter::add01(int first_register, int second_register) {
    cpu.writeRegister(first_register, cpu.readRegister(first_register) + cpu.readRegister(second_register));
}
void Interpreter::load00(int register_, int8_t value) {
    cpu.writeRegister(register_, value);
}
void Interpreter::load01(int register_, uint16_t ram_addr) {
    cpu.writeRegister(register_, cpu.readRam(ram_addr));
}
void Interpreter::load10(int register_, uint16_t rom_addr) {
    cpu.writeRegister(register_, cpu.readRom(rom_addr));
}
void Interpreter::load11(int first_register, int second_register) {
    cpu.writeRegister(first_register, cpu.readRegister(second_register));
};

void Interpreter::compare00(int register_, int8_t value) {
    cpu.setFlag(getFlag(cpu.readRegister(register_), value));
};

void Interpreter::compare01(int first_register, int second_register) {
    cpu.setFlag(getFlag(cpu.readRegister(first_register), cpu.readRegister(second_register)));
};

void Interpreter::store00(int8_t value, uint16_t ram_addr) {
    cpu.writeRam(ram_addr, value);
};

void Interpreter::store01(int register_, uint16_t ram_addr) {
    cpu.writeRam(ram_addr, cpu.readRegister(register_));
}

void Interpreter::execute(Instruction instruction) {
    switch (instruction.opcode)
    {
    case 0:
        add00(static_cast<int>(instruction.param1), static_cast<int8_t>(instruction.param2));
        break;
    case 1:
        add01(static_cast<int>(instruction.param1), static_cast<int>(instruction.param2));
        break; 
    case 4:
        load00(static_cast<int>(instruction.param1), static_cast<int8_t>(instruction.param2));
        break;
    case 5:
        load01(static_cast<int>(instruction.param1), static_cast<uint8_t>(instruction.param2));
        break;
    case 6: 
        load10(static_cast<int>(instruction.param1), static_cast<uint8_t>(instruction.param2));
        break; 
    case 7: 
        load11(static_cast<int>(instruction.param1), static_cast<int>(instruction.param2));
        break;
    case 8:
        store00(static_cast<int8_t>(instruction.param1), static_cast<uint8_t>(instruction.param2));
        break;
    case 9:
        store01(static_cast<int>(instruction.param1), static_cast<uint8_t>(instruction.param2));
        break;
    }
}