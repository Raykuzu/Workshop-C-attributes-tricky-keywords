//
// Created by raykuzu on 19/03/2020.
// Targets: variables
// Effects: special needs
// Force compiler to use a certain size for a variable (integer or float) instead of use system size
// Possible values for integers are QI (1 byte), HI (2 bytes), SI (4 bytes), DI (8 bytes), TI (16 bytes)
// Possible values for floats are SF (4 bytes), DF (8 bytes), TF (16 bytes)
//

__attribute__((mode(QI))) typedef unsigned int my_32bits_system_unsigned;

__attribute__((mode(TF))) typedef float my_big_float;


int main() {
    return (0);
}