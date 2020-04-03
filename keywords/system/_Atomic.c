//
// Created by raykuzu on 20/03/2020.
// Targets: variables
// Effects: utility
// _Atomic keyword (or its variants) allows to declare a atomic variable.
// Atomic variables are the only object permit to avoid data race.
// They have there proper modification order allowing to (imagine we have 2 threads)
// read-write, write-read and write-write.
// Since C11
//

#include <stdatomic.h>

int main() {

    // The header define macros to facilitate usage ->
    _Atomic int a = 0;

    // is equal to

    _Atomic(int) a2 = 0;

    // is equal to

    atomic_int a3 = 0;


    (void)a;
    (void)a2;
    (void)a3;
    return (0);
}

