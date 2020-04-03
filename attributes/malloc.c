//
// Created by raykuzu on 19/03/2020.
// Targets: functions
// Effects: optimization
// Notify compiler func is a malloc-like function (return pointer and alloc memory)
// allow him to optimize it
//

#include <stddef.h>

__attribute__((malloc)) void *func() {
    return (NULL);
}

int main() {
    char *data = func();

    (void)data;
    return (0);
}