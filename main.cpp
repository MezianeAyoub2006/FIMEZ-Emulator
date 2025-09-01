#include <iostream>
#include "src/utils/utils.h"
#include "src/interpreter/interpreter.h"

int main() {
    CPU cpu;
    Interpreter interpreter(cpu);
    std::cout << (int)cpu.readRam(10) << std::endl;
    interpreter.execute(Instruction{8, 3, 10, 0});
    std::cout << (int)cpu.readRam(10) << std::endl;

}