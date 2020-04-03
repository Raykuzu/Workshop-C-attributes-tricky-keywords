//
// Created by raykuzu on 20/03/2020.
// Targets: nothing
// Effects: utility
// _Static_assert keyword (or static_assert if you include assert.h) allows you
// to assert statement at COMPILE TIME. If it's false it will abort.
// For assert at runtime look assert function in assert.h
//

#include <assert.h>

int main() {

    _Static_assert(2 + 2 == 4, "some message");

    static_assert(2 + 2 == 4, "some message");

    return (0);
}