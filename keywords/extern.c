//
// Created by raykuzu on 19/03/2020.
// Targets: functions, gloabl variables
// Effects: special needs
// Extern keyword extends visibility of the target
// By default, the compiler set extern on all functions
// For variables, it's declaration, not definition. It permit too get a variable
// in another block (shared library, ...)
//

#include <errno.h>
#include <unistd.h>
#include <stdio.h>

extern void func() {

}

// is equal to

void func2() {

}

extern int c;

//extern int c = 0; -> Forbidden


int main() {
    //Example

    write(-1, NULL, 0);

    printf("%d\n", errno);

    // Wtf, where does this variable come from ?? -> clue: look at errno.h
    return (0);
}

