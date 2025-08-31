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
}