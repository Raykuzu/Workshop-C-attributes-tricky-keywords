//
// Created by raykuzu on 20/03/2020.
// _Noreturn keyword (or noreturn if you include stdnoreturn.h) do the same
// job as __attribute__((noreturn))
// For description and use cases see attributes/noreturn.c
// Since C11
//

#include <stdlib.h>
#include <stdnoreturn.h>

_Noreturn void func() {
    exit(0);
}

noreturn void func2() {
    exit(1);
}

int main() {

    func();
    func2(); // detected as dead code
    return (0);
}