//
// Created by raykuzu on 19/03/2020.
// Targets: functions
// Effects: special needs
// The attribute constructor permit to a function to be called before main
//

#include <stdio.h>

__attribute__((constructor)) void func() {
    printf("I'm before main\n");
}

int main() {
    printf("First time I'm not the entrypoint of the program wtf\n");
    return (0);
}