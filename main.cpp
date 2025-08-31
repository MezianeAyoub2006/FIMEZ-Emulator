#include <iostream>
#include "src/utils/utils.h"
#include "src/interpreter/interpreter.h"

int main() {
    CPU cpu;
    Interpreter interpreter(cpu);
    interpreter.load00(0, 10);
    writeBits(cpu.readRegister(0));
    interpreter.load00(1, 15);
    writeBits(cpu.readRegister(1));
    interpreter.add01(0, 1);
    writeBits(cpu.readRegister(0));
}