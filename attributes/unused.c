//
// Created by raykuzu on 18/03/2020.
// Targets: functions, parameters, variables
// Effects: clean code/remove warnings
// Attribute unused permit to remove warning when a parameter or a function isn't used
//

#include "stdio.h"

void func1(const char *msg) {
    printf("Hello");
}

void func2( __attribute__((unused)) const char *msg) {
    printf("Hello");
}

void func3(const char *msg);

__attribute__((unused)) void func4(const char *msg);

void func5() {
    __attribute__((unused)) const char *msg;
}

int main() {
    return (0);
}