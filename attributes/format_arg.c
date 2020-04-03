//
// Created by raykuzu on 19/03/2020.
// Targets: functions
// Effects: clean code/trigger warnings if necessary
// Notify compiler the function take a format and modify it
// First arg is the position of the format
//

#include <stdio.h>

__attribute__((format_arg(1))) char *func(char *format) {
    // Modify format
    return (format);
}

char *func2(char *format) {
    // Modify format
    return (format);
}

int main() {
    printf(func("%s %d")); // Warning
    printf(func("%s %d"), "hello", 4);
    printf(func2("%s %d")); // Big warning
    printf(func2("%s %d"), "hello"); // No warning but we need it
    return (0);
}

