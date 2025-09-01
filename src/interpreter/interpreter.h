#include "../CPU/cpu.h"
#include "../instruction/instruction.h"

class Interpreter {
private:
    CPU &cpu;
public:
    Interpreter(CPU &cpu_) : cpu(cpu_) {};
    void add00(int register_, int8_t value);
    void add01(int first_register, int second_register);
    void load00(int register_, int8_t value);
    void load01(int register_, uint16_t ram_addr);
    void load10(int register_, uint16_t rom_addr);
    void load11(int first_register, int second_register);
    void store00(int8_t value, uint16_t ram_addr);
    void store01(int register_, uint16_t ram_addr);
    void compare00(int register_, int8_t value);
    void compare01(int first_register, int second_register);
    void execute(Instruction instruction);
};