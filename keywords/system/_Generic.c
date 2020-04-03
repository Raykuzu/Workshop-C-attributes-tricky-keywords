//
// Created by raykuzu on 20/03/2020.
// Targets: macros
// Effects: utility
// _Generic keyword allows you to passes generic argument to a macro and
// apply different treatments for different types (switch case-like)
//

#include <stdio.h>

void print_int(int x) {
    printf("%d\n", x);
}

void print_unsigned(unsigned int x) {
    printf("%u\n", x);
}

void print_long(long int x) {
    printf("%ld\n", x);
}

// The format is MACRO_NAME(x) _Generic((x), type1: [anything], type2: [anything], ...
// default: [anything]

// The [anything] is the macro return value

#include <stdbool.h>

#define IS_INT(x) _Generic((x), int: true, default: false)

// But we can call func too
// It's the same format but we had (x) at the end

#define GENERIC_INT_PRINT(x) _Generic((x),          \
                    unsigned int: print_unsigned,   \
                    long int: print_long,           \
                    default: print_int)(x)


int main() {

    int a = -1;
    unsigned int b = 1;
    long int c = 10000000000;

    IS_INT(a);
    IS_INT(c);

    GENERIC_INT_PRINT(a);
    GENERIC_INT_PRINT(b);
    GENERIC_INT_PRINT(c);

    return (0);
}
