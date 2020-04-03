//
// Created by raykuzu on 18/03/2020.
// Targets: functions
// Effects: optimization/clean code
// Attribute noreturn optimize function that doesn't return (call to exit, abort, ...)
//

#include "stdlib.h"

__attribute__((noreturn)) void func()  {
    exit(0);
}

int main() {
    return (0);
}