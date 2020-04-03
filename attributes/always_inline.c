//
// Created by raykuzu on 19/03/2020.
// Targets: functions
// Effects: optimization
// Force compiler to apply inlining to a function (see inline.txt)
//

#include <stdio.h>

__attribute__((always_inline)) void func() {
    printf("hello\n");
}

int main() {
    func();
    return (0);
}