//
// Created by raykuzu on 19/03/2020.
// Targets: functions
// Effects: special needs
// The attribute destructor permit to a function to be called after main
//

#include <stdio.h>

__attribute__((destructor)) void func() {
    printf("I'm after main return or exit\n");
}

int main() {
    printf("I will not close the program today\n");
    return (0);
}
